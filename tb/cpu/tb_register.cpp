#include "Vregister.h"
#include <verilated.h>
#include <verilated_vcd_c.h>

#include "tb_boilerplate.hpp"
#include <cstdint>
#include <iostream>

using namespace std::literals;

// verify function
bool verify_output(DUT<Vregister, VerilatedVcdC> &dut, uint32_t desired) {
  auto dut_ptr = dut.get_dut();
  dut_ptr->read_enable_i = 1;
  dut_ptr->eval();

  const uint32_t out = dut_ptr->data_o;
  const bool result = (out == desired);

  std::cout << (result ? "[OK] " : "[ERROR] ");
  std::cout << "Wanted: 0x" << std::hex << desired << " Got: 0x" << out
            << std::dec << "\n";

  dut.tick();
  dut_ptr->read_enable_i = 0;
  dut_ptr->eval();

  return result;
}

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  DUT<Vregister, VerilatedVcdC> dut(
      [](auto &dut) {
        auto dut_ptr = dut.get_dut();
        dut_ptr->clk_i = 0;
        dut_ptr->reset_i = 1;
        dut_ptr->write_enable_i = 0;
        dut_ptr->read_enable_i = 0;
        dut_ptr->data_i = 0;
      },
      "tb_register"sv);

  // input_data = 0xDEAD
  dut.get_dut()->data_i = 0xDEAD;

  // wait 2 clocks
  dut.tick();
  dut.tick();

  // after reset expect undefined -> we skip strict check
  std::cout << "Checking after reset (may be undefined)\n";
  dut.get_dut()->read_enable_i = 1;
  dut.get_dut()->eval();
  std::cout << "Output: 0x" << std::hex << dut.get_dut()->data_o << std::dec
            << "\n";
  dut.get_dut()->read_enable_i = 0;

  // wait 2 clocks
  dut.tick();
  dut.tick();

  // enable write
  dut.get_dut()->write_enable_i = 1;
  dut.tick();
  dut.get_dut()->write_enable_i = 0;

  // verify stored value
  if (!dut.execute(verify_output, 0xDEAD)) {
    return 1;
  }

  std::cout << "Simulation finished\n";

  return 0;
}
