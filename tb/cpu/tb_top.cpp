// Include headers in decreasing order of specificity to avoid missing
// definitions
#include "Vtop.h"
#include <verilated.h>
#include <verilated_vcd_c.h>

#include "tb_boilerplate.hpp"
#include <bitset>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std::literals;

#include "Vtop___024root.h"

// ============================================================================
// RISC-V instruction encoding
// ============================================================================

constexpr std::uint32_t encode_r_type(std::uint32_t funct7, std::uint32_t rs2,
                                      std::uint32_t rs1, std::uint32_t funct3,
                                      std::uint32_t rd) {
  constexpr std::uint32_t OPCODE = 0b0110011;
  return (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) |
         (rd << 7) | OPCODE;
}

constexpr std::uint32_t encode_i_type(std::uint32_t imm12, std::uint32_t rs1,
                                      std::uint32_t funct3, std::uint32_t rd) {
  constexpr std::uint32_t OPCODE = 0b0010011;
  return ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) |
         OPCODE;
}

constexpr std::uint32_t encode_s_type(std::uint32_t imm12, std::uint32_t rs2,
                                      std::uint32_t rs1, std::uint32_t funct3) {
  constexpr std::uint32_t OPCODE = 0b0100011;
  const std::uint32_t imm_11_5 = (imm12 >> 5) & 0x7F;
  const std::uint32_t imm_4_0 = imm12 & 0x1F;
  return (imm_11_5 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) |
         (imm_4_0 << 7) | OPCODE;
}

constexpr std::uint32_t encode_b_type(std::uint32_t imm13, std::uint32_t rs2,
                                      std::uint32_t rs1, std::uint32_t funct3) {
  constexpr std::uint32_t OPCODE = 0b1100011;
  const std::uint32_t imm_12   = (imm13 >> 12) & 0x1;
  const std::uint32_t imm_11   = (imm13 >> 11) & 0x1;
  const std::uint32_t imm_10_5 = (imm13 >> 5)  & 0x3F;
  const std::uint32_t imm_4_1  = (imm13 >> 1)  & 0xF;
  return (imm_12 << 31) | (imm_10_5 << 25) | (rs2 << 20) | (rs1 << 15) |
         (funct3 << 12) | (imm_4_1 << 8) | (imm_11 << 7) | OPCODE;
}

constexpr std::uint32_t encode_load(std::uint32_t imm12, std::uint32_t rs1,
                                    std::uint32_t funct3, std::uint32_t rd) {
  constexpr std::uint32_t OPCODE = 0b0000011;
  return ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) |
         OPCODE;
}

// R-type instructions
constexpr std::uint32_t ADD(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x00, rs2, rs1, 0b000, rd);
}
constexpr std::uint32_t SUB(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x20, rs2, rs1, 0b000, rd);
}
constexpr std::uint32_t AND_inst(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x00, rs2, rs1, 0b111, rd);
}
constexpr std::uint32_t OR_inst(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x00, rs2, rs1, 0b110, rd);
}
constexpr std::uint32_t XOR_inst(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x00, rs2, rs1, 0b100, rd);
}
constexpr std::uint32_t SLL(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x00, rs2, rs1, 0b001, rd);
}
constexpr std::uint32_t SRL(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x00, rs2, rs1, 0b101, rd);
}
constexpr std::uint32_t SRA(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x20, rs2, rs1, 0b101, rd);
}
constexpr std::uint32_t SLT(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x00, rs2, rs1, 0b010, rd);
}
constexpr std::uint32_t SLTU(uint32_t rd, uint32_t rs1, uint32_t rs2) {
  return encode_r_type(0x00, rs2, rs1, 0b011, rd);
}

// S-type instructions
constexpr std::uint32_t SW(uint32_t rs2, uint32_t rs1, uint32_t imm) {
  return encode_s_type(imm & 0xFFF, rs2, rs1, 0b010);
}
constexpr std::uint32_t SH(uint32_t rs2, uint32_t rs1, uint32_t imm) {
  return encode_s_type(imm & 0xFFF, rs2, rs1, 0b001);
}
constexpr std::uint32_t SB(uint32_t rs2, uint32_t rs1, uint32_t imm) {
  return encode_s_type(imm & 0xFFF, rs2, rs1, 0b000);
}

// B-type instructions
constexpr std::uint32_t BEQ(uint32_t rs1, uint32_t rs2, uint32_t imm) {
  return encode_b_type(imm, rs2, rs1, 0b000);
}
constexpr std::uint32_t BNE(uint32_t rs1, uint32_t rs2, uint32_t imm) {
  return encode_b_type(imm, rs2, rs1, 0b001);
}
constexpr std::uint32_t BLT(uint32_t rs1, uint32_t rs2, uint32_t imm) {
  return encode_b_type(imm, rs2, rs1, 0b100);
}
constexpr std::uint32_t BGE(uint32_t rs1, uint32_t rs2, uint32_t imm) {
  return encode_b_type(imm, rs2, rs1, 0b101);
}
constexpr std::uint32_t BLTU(uint32_t rs1, uint32_t rs2, uint32_t imm) {
  return encode_b_type(imm, rs2, rs1, 0b110);
}
constexpr std::uint32_t BGEU(uint32_t rs1, uint32_t rs2, uint32_t imm) {
  return encode_b_type(imm, rs2, rs1, 0b111);
}

// Load instructions
constexpr std::uint32_t LW(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_load(imm & 0xFFF, rs1, 0b010, rd);
}
constexpr std::uint32_t LH(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_load(imm & 0xFFF, rs1, 0b001, rd);
}
constexpr std::uint32_t LB(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_load(imm & 0xFFF, rs1, 0b000, rd);
}

// I-type instructions
constexpr std::uint32_t ADDI(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_i_type(imm, rs1, 0b000, rd);
}
constexpr std::uint32_t ANDI(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_i_type(imm, rs1, 0b111, rd);
}
constexpr std::uint32_t ORI(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_i_type(imm, rs1, 0b110, rd);
}
constexpr std::uint32_t XORI(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_i_type(imm, rs1, 0b100, rd);
}
constexpr std::uint32_t SLTI(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_i_type(imm, rs1, 0b010, rd);
}
constexpr std::uint32_t SLTIU(uint32_t rd, uint32_t rs1, uint32_t imm) {
  return encode_i_type(imm, rs1, 0b011, rd);
}
constexpr std::uint32_t SLLI(uint32_t rd, uint32_t rs1, uint32_t shamt) {
  return encode_i_type(shamt & 0x1F, rs1, 0b001, rd);
}
constexpr std::uint32_t SRLI(uint32_t rd, uint32_t rs1, uint32_t shamt) {
  return encode_i_type(shamt & 0x1F, rs1, 0b101, rd);
}
constexpr std::uint32_t SRAI(uint32_t rd, uint32_t rs1, uint32_t shamt) {
  return encode_i_type((0x20 << 5) | (shamt & 0x1F), rs1, 0b101, rd);
}

constexpr std::uint32_t NOP() { return ADDI(0, 0, 0); }

// ============================================================================
// Memory File Writer ($readmemb compatible)
//
// PC resets to 0x40 (word index 0x10).
// ============================================================================
static constexpr std::string_view MEM_FILE_PATH = "./build/instructions.mem";

void write_mem_file(std::string_view path,
                    const std::vector<std::uint32_t> &program) {
  std::ofstream ofs(path.data());
  ofs << "@00000010\n"; // Word index 0x10 = Byte address 0x40
  for (const auto instr : program) {
    ofs << std::bitset<32>(instr).to_string() << "\n";
  }
}

// Executes single instruction by stepping until fetch_next_instruction
bool step_instruction(DUT<Vtop, VerilatedVcdC> &dut,
                      std::size_t max_cycles = 16) {
  auto root_ptr = dut.get_dut()->rootp;
  std::size_t cycles = 0;

  while (cycles < max_cycles) {
    dut.tick();
    cycles++;
    if (root_ptr->top__DOT__fetch_next_instruction) {
      return true;
    }
  }
  return false;
}

// Runs execution for a set number of instructions or cycles
bool run_steps(DUT<Vtop, VerilatedVcdC> &dut, std::size_t count) {
  for (std::size_t i = 0; i < count; ++i) {
    if (!step_instruction(dut)) {
      std::cerr << "[TIMEOUT] Execution step " << i << " failed.\n";
      return false;
    }
  }
  return true;
}

struct TestCase {
  std::string name;
  std::vector<std::uint32_t> code;
  std::uint32_t check_addr;
  std::uint32_t expected;
};

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);


  std::vector<TestCase> test_cases;
  std::uint32_t addr = 0;

  auto add_reg_test = [&](const std::string &name,
                          std::vector<std::uint32_t> code,
                          std::uint32_t check_reg,
                          std::uint32_t expected) {
    const std::uint32_t target_addr = addr++;
    code.push_back(SW(check_reg, 0, target_addr));
    test_cases.push_back({name, std::move(code), target_addr, expected});
  };

  auto add_mem_test = [&](const std::string &name,
                          std::vector<std::uint32_t> code,
                          std::uint32_t check_addr,
                          std::uint32_t expected) {
    test_cases.push_back({name, std::move(code), check_addr, expected});
  };

  // --- Register / ALU / Immediate Tests ---
  add_reg_test("ADDI x1, x0, 42", {ADDI(1, 0, 42)}, 1, 42);
  add_reg_test("ADD x3 = x1(10) + x2(20)", {ADDI(1, 0, 10), ADDI(2, 0, 20), ADD(3, 1, 2)}, 3, 30);
  add_reg_test("SUB x3 = x1(50) - x2(20)", {ADDI(1, 0, 50), ADDI(2, 0, 20), SUB(3, 1, 2)}, 3, 30);
  add_reg_test("AND x3 = 0xFF & 0x0F", {ADDI(1, 0, 0xFF), ADDI(2, 0, 0x0F), AND_inst(3, 1, 2)}, 3, 0x0F);
  add_reg_test("OR x3 = 0xF0 | 0x0F", {ADDI(1, 0, 0xF0), ADDI(2, 0, 0x0F), OR_inst(3, 1, 2)}, 3, 0xFF);
  add_reg_test("XOR x3 = 0xFF ^ 0x0F", {ADDI(1, 0, 0xFF), ADDI(2, 0, 0x0F), XOR_inst(3, 1, 2)}, 3, 0xF0);
  add_reg_test("SLL x3 = 1 << 4", {ADDI(1, 0, 1), ADDI(2, 0, 4), SLL(3, 1, 2)}, 3, 16);
  add_reg_test("SLT 5 < 10 = 1", {ADDI(1, 0, 5), ADDI(2, 0, 10), SLT(3, 1, 2)}, 3, 1);
  add_reg_test("SLT 10 < 5 = 0", {ADDI(1, 0, 10), ADDI(2, 0, 5), SLT(3, 1, 2)}, 3, 0);
  add_reg_test("ANDI x2 = x1(0xFF) & imm(0x0F)", {ADDI(1, 0, 0xFF), ANDI(2, 1, 0x0F)}, 2, 0x0F);
  add_reg_test("ORI x2 = x1(0xF0) | imm(0x0F)", {ADDI(1, 0, 0xF0), ORI(2, 1, 0x0F)}, 2, 0xFF);
  add_reg_test("XORI x2 = x1(0xFF) ^ imm(0xFF)", {ADDI(1, 0, 0xFF), XORI(2, 1, 0xFF)}, 2, 0x00);
  add_reg_test("SLLI x2 = x1(1) << 8", {ADDI(1, 0, 1), SLLI(2, 1, 8)}, 2, 256);
  add_reg_test("Chained: ((3+7)+5)-3 = 12", {ADDI(1, 0, 3), ADDI(2, 0, 7), ADD(3, 1, 2), ADDI(4, 3, 5), SUB(5, 4, 1)}, 5, 12);
  add_reg_test("x0 hardwired to zero", {ADDI(0, 0, 99)}, 0, 0);

  // --- Load / Store Tests ---
  const std::uint32_t mem_test_base = 50;
  add_mem_test("SW: store word 0x7F to mem[50]", {ADDI(1, 0, 0x7F), SW(1, 0, mem_test_base)}, mem_test_base, 0x7F);
  add_mem_test("SB: store byte, top bits stripped to mem[51]", {ADDI(1, 0, 0x1FF), SB(1, 0, mem_test_base + 1)}, mem_test_base + 1, 0xFF);
  add_mem_test("SH: store halfword 0x0BEF to mem[52]", {ADDI(1, 0, 0x0B), SLLI(1, 1, 8), ORI(1, 1, 0xEF), SH(1, 0, mem_test_base + 2)}, mem_test_base + 2, 0x0BEF);
  add_mem_test("LW: store 0x234, load, store to mem[53]", {ADDI(1, 0, 0x234), SW(1, 0, mem_test_base + 3), LW(2, 0, mem_test_base + 3), SW(2, 0, mem_test_base + 3)}, mem_test_base + 3, 0x234);
  add_mem_test("LB: load byte 0xAB and store to mem[54]", {ADDI(1, 0, 0xAB), SW(1, 0, mem_test_base + 4), LB(2, 0, mem_test_base + 4), SW(2, 0, mem_test_base + 4)}, mem_test_base + 4, 0xAB);
  add_mem_test("SW: overwrite mem[55]", {ADDI(1, 0, 0x11), SW(1, 0, mem_test_base + 5), ADDI(2, 0, 0x22), SW(2, 0, mem_test_base + 5)}, mem_test_base + 5, 0x22);
  add_mem_test("SW x0: storing x0 writes zero to mem[56]", {ADDI(1, 0, 0xFF), SW(1, 0, mem_test_base + 6), SW(0, 0, mem_test_base + 6)}, mem_test_base + 6, 0);
  add_mem_test("LH: load halfword 0x0BEF and store to mem[57]", {ADDI(1, 0, 0x0B), SLLI(1, 1, 8), ORI(1, 1, 0xEF), SW(1, 0, mem_test_base + 7), LH(2, 0, mem_test_base + 7), SW(2, 0, mem_test_base + 7)}, mem_test_base + 7, 0x0BEF);
  add_mem_test("SW: store built value 0xCAFE to mem[58]", {ADDI(1, 0, 0xCA), SLLI(1, 1, 8), ORI(1, 1, 0xFE), SW(1, 0, mem_test_base + 8)}, mem_test_base + 8, 0xCAFE);

  // --- Branch Tests ---
  // BEQ taken: x1 == x2 -> skip intermediate store of 0xBAD, store 0x600D
  const std::uint32_t branch_test_base = 60;
  add_mem_test("BEQ taken (forward jump)",
               {ADDI(1, 0, 5), ADDI(2, 0, 5),
                BEQ(1, 2, 8), // jump past next SW
                SW(1, 0, branch_test_base), // skipped if taken
                ADDI(3, 0, 0x60),
                SW(3, 0, branch_test_base)},
               branch_test_base, 0x60);

  // BEQ not taken: x1 != x2 -> execute sequential store of 0x42
  add_mem_test("BEQ not taken (fall-through)",
               {ADDI(1, 0, 5), ADDI(2, 0, 9),
                BEQ(1, 2, 8), // not taken
                ADDI(3, 0, 0x42),
                SW(3, 0, branch_test_base + 1),
                ADDI(3, 0, 0x99), // overwrite prevention
                BEQ(0, 0, 8),     // jump over final store
                SW(3, 0, branch_test_base + 1)},
               branch_test_base + 1, 0x42);

  // BNE taken: x1 != x2 -> jump over trap
  add_mem_test("BNE taken",
               {ADDI(1, 0, 5), ADDI(2, 0, 9),
                BNE(1, 2, 8),
                SW(0, 0, branch_test_base + 2),
                ADDI(3, 0, 0x77),
                SW(3, 0, branch_test_base + 2)},
               branch_test_base + 2, 0x77);

  // BLT taken: -5 < 2
  add_mem_test("BLT taken",
               {ADDI(1, 0, -5), ADDI(2, 0, 2),
                BLT(1, 2, 8),
                SW(0, 0, branch_test_base + 3),
                ADDI(3, 0, 0x88),
                SW(3, 0, branch_test_base + 3)},
               branch_test_base + 3, 0x88);

  // 1. Assemble the entire test program
  std::vector<std::uint32_t> full_program;
  for (const auto &tc : test_cases) {
    full_program.insert(full_program.end(), tc.code.begin(), tc.code.end());
  }

  // 2. Dump all instructions into the binary file BEFORE DUT creation & reset
  write_mem_file(MEM_FILE_PATH, full_program);

  // 3. Create DUT ($readmemb loads MEM_FILE_PATH during initial block)
  DUT<Vtop, VerilatedVcdC> dut(
      [](auto &dut) {
        auto p = dut.get_dut();
        p->clk_i   = 0;
        p->rst_n_i = 0; // active-low reset asserted
      },
      "tb_top"sv);

  auto dut_ptr  = dut.get_dut();
  auto root_ptr = dut_ptr->rootp;

  // 4. Perform initial reset
  dut.tick();
  dut.tick();
  dut_ptr->rst_n_i = 1;
  dut_ptr->eval();
  dut.tick();
  dut.tick();

  // 5. Execute instructions dynamically
  std::size_t total_instructions = full_program.size();
  if (!run_steps(dut, total_instructions)) {
    std::cerr << "[FATAL] Program execution timed out!\n";
  }

  // 6. Verify all test case outputs in memory
  auto passed = 0u, failed = 0u;
  const auto peek_mem = [&](std::uint32_t mem_addr) -> std::uint32_t {
    return root_ptr->top__DOT__data_mem__DOT__data[mem_addr];
  };

  std::cout << "\n================ Running Test Verification ================\n";
  for (const auto &tc : test_cases) {
    const std::uint32_t got = peek_mem(tc.check_addr);
    const bool ok = (got == tc.expected);
    std::cout << (ok ? "[OK] " : "[ERROR] ") << tc.name
              << " | mem[" << tc.check_addr << "] expected=0x" << std::hex
              << tc.expected << " got=0x" << got << std::dec << "\n";
    if (ok) ++passed; else ++failed;
  }

  std::cout << "\n========================================" << std::endl;
  std::cout << "RESULTS: " << passed << " passed, " << failed << " failed"
            << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "\nVCD trace: trace/tb_top.vcd" << std::endl;

  return failed > 0 ? 1 : 0;
}
