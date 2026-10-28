# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL, defaults to 'perl' if not set)")
set(PYTHON3 "python3" CACHE FILEPATH "Python3 executable (from $PYTHON3, defaults to 'python3' if not set)")
set(VERILATOR_ROOT "/usr/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")
set(VERILATOR_SOLVER "" CACHE STRING "Default SMT solver for constrained randomization (from $VERILATOR_SOLVER)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vtop_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vtop_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vtop_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vtop_COVERAGE 0)
# Timing mode?  0/1
set(Vtop_TIMING 0)
# Threaded output mode?  1/N threads (from --threads)
set(Vtop_THREADS 1)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vtop_TRACE_FST 0)

# SAIF Tracing output mode? 0/1 (from --trace-saif)
set(Vtop_TRACE_SAIF 0)

# VCD Tracing output mode?  0/1 (from --trace-vcd)
set(Vtop_TRACE_VCD 1)
### Sources...
# Global classes, need linked once per executable
set(Vtop_GLOBAL /usr/share/verilator/include/verilated.cpp /usr/share/verilator/include/verilated_vcd_c.cpp /usr/share/verilator/include/verilated_threads.cpp)
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vtop_CLASSES_SLOW /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop___024root__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop___024root__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop___024unit__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop___024unit__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03afunctions_3__Vclpkg__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03afunctions_3__Vclpkg__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03aalu_ops__Vclpkg__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03aalu_ops__Vclpkg__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03ainstruction_type__Vclpkg__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03ainstruction_type__Vclpkg__0__Slow.cpp)
# Generated module classes, fast-path, compile with highest optimization
set(Vtop_CLASSES_FAST /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop___024root__0.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03afunctions_3__Vclpkg__0.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03aalu_ops__Vclpkg__0.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop_types_pkg__03a__03ainstruction_type__Vclpkg__0.cpp)
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vtop_SUPPORT_SLOW /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop__Syms__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop__Trace__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop__TraceDecls__0__Slow.cpp)
# Generated support classes, fast-path, compile with highest optimization
set(Vtop_SUPPORT_FAST /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vtop.dir/Vtop.dir/Vtop__Trace__0.cpp)
# All dependencies
set(Vtop_DEPS /usr/share/verilator/include/verilated_std.sv /usr/share/verilator/include/verilated_std_waiver.vlt /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/cpu/alu.v /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/cpu/control_unit.v /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/cpu/register.v /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/cpu/register_file.v /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/memory/data_memory.v /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/memory/instruction_memory.v /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/top.v /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/utility/types_pkg.v)
# User .cpp files (from .cpp's on Verilator command line)
set(Vtop_USER_CLASSES )
