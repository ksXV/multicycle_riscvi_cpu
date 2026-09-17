#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valu.h"

#include "tb_boilerplate.hpp"
#include <cstdint>
#include <iostream>
#include <string_view>

enum struct operation {
  ADD, //= 0b000, // or sub
  SUB,
  SLL,  // = 0b001,
  SLT,  // = 0b010,
  SLTU, // = 0b011,
  XOR,  // = 0b100,
  SRL,  // = 0b101, // or sra
  SRA,
  OR, // = 0b110,
  AND // = 0b111
};

constexpr std::string_view op_to_string(operation op) {
  switch (op) {
  case operation::ADD:
    return "ADD";
  case operation::SUB:
    return "SUB";
  case operation::SLL:
    return "SLL";
  case operation::SLT:
    return "SLT";
  case operation::SLTU:
    return "SLTU";
  case operation::XOR:
    return "XOR";
  case operation::SRL:
    return "SRL";
  case operation::SRA:
    return "SRA";
  case operation::OR:
    return "OR";
  case operation::AND:
    return "AND";
  default:
    return "UNKNOWN";
  }
}

constexpr std::uint32_t convert_op_to_alu_ops(operation op) {
  switch (op) {
    case operation::ADD:  return 0;
    case operation::SUB:  return 1;
    case operation::XOR:  return 2;
    case operation::OR:   return 3;
    case operation::AND:  return 4;
    case operation::SLL:  return 5;
    case operation::SRL:  return 6;
    case operation::SRA:  return 7;
    case operation::SLT:  return 8;
    case operation::SLTU: return 9;
  }
  return 0;
}

bool check_for_output(DUT<Valu, VerilatedVcdC> &dut, std::int32_t expected) {
  auto dut_ptr = dut.get_dut();
  dut_ptr->eval();

  const bool result = (expected == static_cast<std::int32_t>(dut_ptr->result_o));

  std::cout << (result ? "[OK] " : "[ERROR] ");
  std::cout << "Expecting: " << std::dec << expected;
  std::cout << " Got: " << static_cast<std::int32_t>(dut_ptr->result_o) << std::endl;

  dut.tick_comb();
  dut_ptr->eval();

  return result;
}

bool execute_op(DUT<Valu, VerilatedVcdC> &dut, operation op, std::uint32_t t1,
                std::uint32_t t2, std::int32_t expected) {
  auto dut_ptr = dut.get_dut();

  std::cout << "operand_1: 0x" << std::hex << t1
            << " operand_2: 0x" << t2 << std::dec << std::endl;

  dut_ptr->operand_1_i = t1;
  dut_ptr->operand_2_i = t2;
  dut_ptr->ops = convert_op_to_alu_ops(op);
  dut_ptr->eval();

  dut.tick_comb();

  std::cout << "Running " << op_to_string(op) << std::endl;
  return dut.execute(check_for_output, expected);
}

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  DUT<Valu, VerilatedVcdC> dut(
      [](auto &dut) {
        auto dut_ptr = dut.get_dut();
        dut_ptr->ops = 0;
        dut_ptr->operand_1_i = 0x0;
        dut_ptr->operand_2_i = 0x0;
      },
      "tb_alu"sv);

  // wait 2 clock cycles
  dut.tick_comb();
  dut.tick_comb();

  if (!dut.execute(check_for_output, 0)) {
    return 1;
  }

  dut.tick_comb();
  dut.tick_comb();

  auto passed = 0u;
  auto failed = 0u;

  auto run = [&](auto... args) {
    if (dut.execute(execute_op, args...)) {
      ++passed;
    } else {
      ++failed;
    }
  };

  run(operation::ADD, 5, 3, 8);
  run(operation::ADD, 0xffffffff, 1, 0);
  run(operation::ADD, 0x7fffffff, 1, 0x80000000);
  run(operation::ADD, 0x80000000, 0x80000000, 0);

  run(operation::SUB, 5, 3, 2);
  run(operation::SUB, 3, 5, 0xfffffffe);
  run(operation::SUB, 0, 1, 0xffffffff);
  run(operation::SUB, 0x80000000, 1, 0x7fffffff);

  run(operation::AND, 0xf0f0f0f0, 0x0ff00ff0, 0x00f000f0);
  run(operation::AND, 0xffffffff, 0, 0);
  run(operation::AND, 0x12345678, 0xffffffff, 0x12345678);

  run(operation::OR, 0xf0f0f0f0, 0x0ff00ff0, 0xfff0fff0);
  run(operation::OR, 0, 0, 0);
  run(operation::OR, 0x12340000, 0x00005678, 0x12345678);

  run(operation::XOR, 0xaaaaaaaa, 0x55555555, 0xffffffff);
  run(operation::XOR, 0xffffffff, 0xffffffff, 0);
  run(operation::XOR, 0x12345678, 0xffffffff, 0xedcba987);

  run(operation::SLL, 1, 1, 2);
  run(operation::SLL, 1, 31, 0x80000000);
  run(operation::SLL, 5, 3, 40);
  run(operation::SLL, 1, 32, 1); // shift_amt = operand_2[4:0] = 32 & 0x1F = 0, so 1 << 0 = 1

  run(operation::SRL, 0x80000000, 1, 0x40000000);
  run(operation::SRL, 0xffffffff, 4, 0x0fffffff);
  run(operation::SRL, 0x7fffffff, 1, 0x3fffffff);

  run(operation::SRA, 0x80000000, 1, 0xc0000000);
  run(operation::SRA, 0xffffffff, 4, 0xffffffff);
  run(operation::SRA, 0x7fffffff, 1, 0x3fffffff);

  run(operation::SLT, 5, 10, 1);
  run(operation::SLT, 10, 5, 0);
  run(operation::SLT, 0xffffffff, 1, 1); // -1 < 1
  run(operation::SLT, 0x80000000, 0, 1); // min < 0
  run(operation::SLT, 0x7fffffff, 0xffffffff, 0);

  run(operation::SLTU, 5, 10, 1);
  run(operation::SLTU, 10, 5, 0);
  run(operation::SLTU, 0xffffffff, 0, 0);
  run(operation::SLTU, 0, 0xffffffff, 1);

  run(operation::ADD, 0, 0, 0);
  run(operation::SUB, 123456, 123456, 0);
  run(operation::XOR, 0xdeadbeef, 0xdeadbeef, 0);

  std::cout << "\n--- Results: " << passed << " passed, " << failed
            << " failed ---\n";

  return failed > 0 ? 1 : 0;
}
