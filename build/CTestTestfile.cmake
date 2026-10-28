# CMake generated Testfile for 
# Source directory: /home/ksxv/personal/verilog/multicycle_riscvi_cpu
# Build directory: /home/ksxv/personal/verilog/multicycle_riscvi_cpu/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[register_test]=] "/home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/Vregister")
set_tests_properties([=[register_test]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/ksxv/personal/verilog/multicycle_riscvi_cpu/CMakeLists.txt;30;add_test;/home/ksxv/personal/verilog/multicycle_riscvi_cpu/CMakeLists.txt;0;")
add_test([=[alu_test]=] "/home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/Valu")
set_tests_properties([=[alu_test]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/ksxv/personal/verilog/multicycle_riscvi_cpu/CMakeLists.txt;31;add_test;/home/ksxv/personal/verilog/multicycle_riscvi_cpu/CMakeLists.txt;0;")
add_test([=[top_test]=] "/home/ksxv/personal/verilog/multicycle_riscvi_cpu/build/Vtop")
set_tests_properties([=[top_test]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/ksxv/personal/verilog/multicycle_riscvi_cpu/CMakeLists.txt;32;add_test;/home/ksxv/personal/verilog/multicycle_riscvi_cpu/CMakeLists.txt;0;")
