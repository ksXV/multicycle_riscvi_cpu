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
set(Vregister_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vregister_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vregister_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vregister_COVERAGE 0)
# Timing mode?  0/1
set(Vregister_TIMING 0)
# Threaded output mode?  1/N threads (from --threads)
set(Vregister_THREADS 1)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vregister_TRACE_FST 0)

# SAIF Tracing output mode? 0/1 (from --trace-saif)
set(Vregister_TRACE_SAIF 0)

# VCD Tracing output mode?  0/1 (from --trace-vcd)
set(Vregister_TRACE_VCD 1)
### Sources...
# Global classes, need linked once per executable
set(Vregister_GLOBAL /usr/share/verilator/include/verilated.cpp /usr/share/verilator/include/verilated_vcd_c.cpp /usr/share/verilator/include/verilated_threads.cpp)
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vregister_CLASSES_SLOW /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister___024root__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister___024root__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03afunctions_3__Vclpkg__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03afunctions_3__Vclpkg__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03aalu_ops__Vclpkg__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03aalu_ops__Vclpkg__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03ainstruction_type__Vclpkg__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03ainstruction_type__Vclpkg__0__Slow.cpp)
# Generated module classes, fast-path, compile with highest optimization
set(Vregister_CLASSES_FAST /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister___024root__0.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03afunctions_3__Vclpkg__0.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03aalu_ops__Vclpkg__0.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister_types_pkg__03a__03ainstruction_type__Vclpkg__0.cpp)
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vregister_SUPPORT_SLOW /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister__Syms__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister__Trace__0__Slow.cpp /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister__TraceDecls__0__Slow.cpp)
# Generated support classes, fast-path, compile with highest optimization
set(Vregister_SUPPORT_FAST /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/CMakeFiles/Vregister.dir/Vregister.dir/Vregister__Trace__0.cpp)
# All dependencies
set(Vregister_DEPS /usr/share/verilator/include/verilated_std.sv /usr/share/verilator/include/verilated_std_waiver.vlt /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/cpu/register.v /home/ksxv/personal/verilog/multicycle_riscvi_cpu/rtl/utility/types_pkg.v)
# User .cpp files (from .cpp's on Verilator command line)
set(Vregister_USER_CLASSES )
