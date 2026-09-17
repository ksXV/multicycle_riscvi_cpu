cmake_minimum_required(VERSION 3.30)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(cmake_example)
find_package(verilator HINTS $ENV{VERILATOR_ROOT})

function(add_to_test name path)
    add_executable("V${name}" "tb/cpu/tb_${name}.cpp")

    verilate("V${name}" INCLUDE_DIRS "rtl/" "rtl/cpu/" SOURCES "${path}/${name}.v" "rtl/utility/types_pkg.v" VERILATOR_ARGS --trace -sv --timing)
endfunction()

add_to_test(register rtl/cpu)
add_to_test(alu rtl/cpu)

add_executable(Vtop tb/cpu/tb_top.cpp)
verilate(Vtop PREFIX Vtop INCLUDE_DIRS "rtl/" "rtl/cpu/" "rtl/memory/" "rtl/utility/"
    SOURCES
        rtl/utility/types_pkg.v
        rtl/top.v
        rtl/cpu/alu.v
        rtl/cpu/register.v
        rtl/cpu/register_file.v
        rtl/cpu/control_unit.v
        rtl/memory/data_memory.v
        rtl/memory/instruction_memory.v
    VERILATOR_ARGS --trace -sv --timing --top-module top)

enable_testing()
add_test(NAME register_test COMMAND Vregister)
add_test(NAME alu_test COMMAND Valu)
add_test(NAME top_test COMMAND Vtop)
