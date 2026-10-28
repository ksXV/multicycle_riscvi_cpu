# Multicycle RISC-V CPU (WIP)

A multicycle 32-bit RISC-V (RV32I subset) processor implemented in SystemVerilog, verified with Verilator and C++ testbenches.

## Features

- **Architecture**: 32-bit multicycle RISC-V CPU (RV32I core)
- **FSM Control Unit**: Multi-cycle instruction execution states (Fetch, Decode, Execute, Memory, Writeback)
- **ALU**: Arithmetic, logical, shift, and comparison operations (`ADD`, `SUB`, `AND`, `OR`, `XOR`, `SLL`, `SRL`, `SRA`, `SLT`, `SLTU`)
- **Register File**: 32 x 32-bit registers
- **Memory**: Separate instruction and data memories
- **Instruction Support**:
  - **R-type**: Register-register arithmetic and logical operations
  - **I-type**: Immediate arithmetic/logical operations and loads (`LW`)
  - **S-type**: Stores (`SW`)
  - **B-type**: Conditional branches (`BEQ`, etc.)

## To add:
- Make the processor pipelined.
- Add a UART based programmer for both the data memory and instruction memory
- Implement the design into a FPGA.
- Add a branch predictor based on the history of local branches and/or global taken branches.

## Prerequisites

- **CMake** (>= 3.30)
- **Verilator**
- **C++17/20 compiler** (e.g. GCC or Clang)
- **GTKWave** (optional, for viewing waveform dumps)

## Getting Started

### Build
Configure and build all simulation targets:
```bash
cmake -B build
cmake --build build
```

### Run Tests
Execute the test suite via CTest:
```bash
ctest --test-dir build --output-on-failure
```

Or run individual simulation binaries:
```bash
./build/Vtop        # Top-level CPU tests
./build/Valu        # ALU unit tests
./build/Vregister   # Register unit tests
```

### View Waveforms
Simulation traces are dumped as `.vcd` files under `build/trace/`. Use `wave.sh` to inspect them in GTKWave:
```bash
./wave.sh top       # Opens build/trace/tb_top.vcd
```
