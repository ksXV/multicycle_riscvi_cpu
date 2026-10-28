// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__types_pkg__03a__03ainstruction_type__Vclpkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+192,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+193,0,"REGISTER_SELECT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+0,0,"register_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"register_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"register_data_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"register_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"register_read_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"operand_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"operand_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"select_imm_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"memory_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"register_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"fetch_next_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"should_take_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"alu_op_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"data_memory_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"halt_decode_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+13,0,"ops",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"operand_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"operand_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+195,0,"OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+11,0,"fetch_next_instruction_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"select_imm_alu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"register_read_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"register_write_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"memory_read_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"memory_write_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+192,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+196,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"address_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"read_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"MEMORY_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+187,0,"internal_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("hazard_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+198,0,"REGISTER_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"OPCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"reg_src_1_d_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"reg_src_2_d_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+21,0,"reg_dst_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+15,0,"halt_decode_stage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("instr_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+200,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+202,0,"REGISTER_SELECT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"register_select_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"register_select_2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+0,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"register_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"register_data_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"register_read_1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"register_read_2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"REGISTER_SELECT_MAX_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+22,0,"reg_enable_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"reg_enable_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("output_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+24+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_registers[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"DATA_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+188,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"write_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"read_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("types_pkg::instruction_type__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__types_pkg__03a__03ainstruction_type__Vclpkg__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__types_pkg__03a__03ainstruction_type__Vclpkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__types_pkg__03a__03ainstruction_type__Vclpkg__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+199,0,"OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+192,(0x00000020U),32);
    bufp->fullIData(oldp+193,(5U),32);
    bufp->fullIData(oldp+194,(0x00000020U),32);
    bufp->fullIData(oldp+195,(7U),32);
    bufp->fullIData(oldp+196,(0x0000000cU),32);
    bufp->fullIData(oldp+197,(0x00001000U),32);
    bufp->fullIData(oldp+198,(5U),32);
    bufp->fullIData(oldp+199,(7U),32);
    bufp->fullIData(oldp+200,(0x00000020U),32);
    bufp->fullIData(oldp+201,(0x00000100U),32);
    bufp->fullIData(oldp+202,(5U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.top__DOT__register_write_enable));
    bufp->fullBit(oldp+1,(vlSelfRef.top__DOT__register_read_enable));
    bufp->fullIData(oldp+2,(vlSelfRef.top__DOT__register_data_write),32);
    bufp->fullIData(oldp+3,(((IData)(vlSelfRef.top__DOT__register_read_enable)
                              ? vlSelfRef.top__DOT__reg_file__DOT__output_data
                             [(0x0000001fU & (vlSelfRef.top__DOT__instr 
                                              >> 0x0000000fU))]
                              : 0U)),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top__DOT__register_read_2),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top__DOT__operand_1),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top__DOT__operand_2),32);
    bufp->fullBit(oldp+7,(vlSelfRef.top__DOT__select_imm_alu));
    bufp->fullIData(oldp+8,(vlSelfRef.top__DOT__memory_write_data),32);
    bufp->fullCData(oldp+9,(vlSelfRef.top__DOT__register_write),5);
    bufp->fullIData(oldp+10,(vlSelfRef.top__DOT__pc),32);
    bufp->fullBit(oldp+11,(vlSelfRef.top__DOT__fetch_next_instruction));
    bufp->fullBit(oldp+12,(vlSelfRef.top__DOT__should_take_branch));
    bufp->fullCData(oldp+13,(vlSelfRef.top__DOT__alu_op_select),4);
    bufp->fullIData(oldp+14,(vlSelfRef.top__DOT__instr),32);
    bufp->fullBit(oldp+15,(((0x00000040U & vlSelfRef.top__DOT__instr)
                             ? (IData)(((0x00000020U 
                                         == (0x00000030U 
                                             & vlSelfRef.top__DOT__instr)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                             : ((0x00000020U & vlSelfRef.top__DOT__instr)
                                 ? ((0x00000010U & vlSelfRef.top__DOT__instr)
                                     ? (IData)(((3U 
                                                 == 
                                                 (0x0000000fU 
                                                  & vlSelfRef.top__DOT__instr)) 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                   | ((0x0000001fU 
                                                       & (vlSelfRef.top__DOT__instr 
                                                          >> 0x00000014U)) 
                                                      == 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.top__DOT__instr 
                                                          >> 7U))))))
                                     : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))
                                 : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))));
    bufp->fullCData(oldp+16,((0x0000007fU & vlSelfRef.top__DOT__instr)),7);
    bufp->fullCData(oldp+17,(vlSelfRef.top__DOT__cu__DOT__state),8);
    bufp->fullCData(oldp+18,(vlSelfRef.top__DOT__cu__DOT__next_state),8);
    bufp->fullCData(oldp+19,((0x0000001fU & (vlSelfRef.top__DOT__instr 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+20,((0x0000001fU & (vlSelfRef.top__DOT__instr 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+21,((0x0000001fU & (vlSelfRef.top__DOT__instr 
                                             >> 7U))),5);
    bufp->fullIData(oldp+22,(vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write),32);
    bufp->fullIData(oldp+24,(vlSelfRef.top__DOT__reg_file__DOT__output_data[0]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top__DOT__reg_file__DOT__output_data[1]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top__DOT__reg_file__DOT__output_data[2]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top__DOT__reg_file__DOT__output_data[3]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top__DOT__reg_file__DOT__output_data[4]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top__DOT__reg_file__DOT__output_data[5]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top__DOT__reg_file__DOT__output_data[6]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__reg_file__DOT__output_data[7]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__reg_file__DOT__output_data[8]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top__DOT__reg_file__DOT__output_data[9]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top__DOT__reg_file__DOT__output_data[10]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top__DOT__reg_file__DOT__output_data[11]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top__DOT__reg_file__DOT__output_data[12]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top__DOT__reg_file__DOT__output_data[13]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__reg_file__DOT__output_data[14]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__reg_file__DOT__output_data[15]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__reg_file__DOT__output_data[16]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__reg_file__DOT__output_data[17]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__reg_file__DOT__output_data[18]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__reg_file__DOT__output_data[19]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__reg_file__DOT__output_data[20]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__reg_file__DOT__output_data[21]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__reg_file__DOT__output_data[22]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__reg_file__DOT__output_data[23]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__reg_file__DOT__output_data[24]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__reg_file__DOT__output_data[25]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__reg_file__DOT__output_data[26]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__reg_file__DOT__output_data[27]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__reg_file__DOT__output_data[28]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__reg_file__DOT__output_data[29]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__reg_file__DOT__output_data[30]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__reg_file__DOT__output_data[31]),32);
    bufp->fullBit(oldp+56,((1U & vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write)));
    bufp->fullBit(oldp+57,((1U & vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read)));
    bufp->fullIData(oldp+58,(((1U & ((~ vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write) 
                                     & vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+60,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x0000000aU))));
    bufp->fullBit(oldp+61,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x0000000aU))));
    bufp->fullIData(oldp+62,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x0000000aU)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x0000000aU)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+64,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x0000000bU))));
    bufp->fullBit(oldp+65,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x0000000bU))));
    bufp->fullIData(oldp+66,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x0000000bU)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x0000000bU)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+68,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x0000000cU))));
    bufp->fullIData(oldp+70,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x0000000cU)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x0000000cU)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+71,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+72,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x0000000dU))));
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x0000000dU))));
    bufp->fullIData(oldp+74,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x0000000dU)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x0000000dU)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x0000000eU))));
    bufp->fullBit(oldp+77,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x0000000eU))));
    bufp->fullIData(oldp+78,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x0000000eU)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x0000000eU)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+80,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x0000000fU))));
    bufp->fullBit(oldp+81,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x0000000fU))));
    bufp->fullIData(oldp+82,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x0000000fU)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x0000000fU)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+84,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x00000010U))));
    bufp->fullBit(oldp+85,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x00000010U))));
    bufp->fullIData(oldp+86,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x00000010U)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x00000010U)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+88,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x00000011U))));
    bufp->fullBit(oldp+89,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x00000011U))));
    bufp->fullIData(oldp+90,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x00000011U)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x00000011U)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x00000012U))));
    bufp->fullBit(oldp+93,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x00000012U))));
    bufp->fullIData(oldp+94,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x00000012U)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x00000012U)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+96,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                  >> 0x00000013U))));
    bufp->fullBit(oldp+97,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                  >> 0x00000013U))));
    bufp->fullIData(oldp+98,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                         >> 0x00000013U)) 
                                     & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                        >> 0x00000013U)))
                               ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data
                               : 0U)),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+100,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 1U))));
    bufp->fullBit(oldp+101,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 1U))));
    bufp->fullIData(oldp+102,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 1U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 1U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+103,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+104,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x00000014U))));
    bufp->fullBit(oldp+105,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x00000014U))));
    bufp->fullIData(oldp+106,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x00000014U)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x00000014U)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+107,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+108,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x00000015U))));
    bufp->fullBit(oldp+109,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x00000015U))));
    bufp->fullIData(oldp+110,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x00000015U)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x00000015U)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+111,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+112,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x00000016U))));
    bufp->fullBit(oldp+113,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x00000016U))));
    bufp->fullIData(oldp+114,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x00000016U)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x00000016U)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+115,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+116,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x00000017U))));
    bufp->fullBit(oldp+117,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x00000017U))));
    bufp->fullIData(oldp+118,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x00000017U)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x00000017U)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+120,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x00000018U))));
    bufp->fullBit(oldp+121,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x00000018U))));
    bufp->fullIData(oldp+122,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x00000018U)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x00000018U)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+123,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+124,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x00000019U))));
    bufp->fullBit(oldp+125,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x00000019U))));
    bufp->fullIData(oldp+126,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x00000019U)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x00000019U)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+127,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+128,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x0000001aU))));
    bufp->fullBit(oldp+129,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x0000001aU))));
    bufp->fullIData(oldp+130,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x0000001aU)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x0000001aU)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+131,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+132,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x0000001bU))));
    bufp->fullBit(oldp+133,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x0000001bU))));
    bufp->fullIData(oldp+134,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x0000001bU)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x0000001bU)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+135,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+136,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x0000001cU))));
    bufp->fullBit(oldp+137,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x0000001cU))));
    bufp->fullIData(oldp+138,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x0000001cU)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x0000001cU)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+139,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x0000001dU))));
    bufp->fullBit(oldp+141,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x0000001dU))));
    bufp->fullIData(oldp+142,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x0000001dU)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x0000001dU)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+143,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+144,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 2U))));
    bufp->fullBit(oldp+145,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 2U))));
    bufp->fullIData(oldp+146,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 2U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 2U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+147,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+148,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 0x0000001eU))));
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x0000001eU))));
    bufp->fullIData(oldp+150,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 0x0000001eU)) 
                                      & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                         >> 0x0000001eU)))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+151,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+152,((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                             >> 0x0000001fU)));
    bufp->fullBit(oldp+153,((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                             >> 0x0000001fU)));
    bufp->fullIData(oldp+154,((((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                    >> 0x0000001fU)) 
                                & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 0x0000001fU))
                                ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+155,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+156,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 3U))));
    bufp->fullBit(oldp+157,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 3U))));
    bufp->fullIData(oldp+158,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 3U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 3U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+159,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+160,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 4U))));
    bufp->fullBit(oldp+161,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 4U))));
    bufp->fullIData(oldp+162,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 4U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 4U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+163,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+164,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 5U))));
    bufp->fullBit(oldp+165,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 5U))));
    bufp->fullIData(oldp+166,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 5U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 5U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+167,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+168,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 6U))));
    bufp->fullBit(oldp+169,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 6U))));
    bufp->fullIData(oldp+170,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 6U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 6U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+171,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+172,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 7U))));
    bufp->fullBit(oldp+173,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 7U))));
    bufp->fullIData(oldp+174,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 7U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 7U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+175,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+176,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 8U))));
    bufp->fullBit(oldp+177,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 8U))));
    bufp->fullIData(oldp+178,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 8U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 8U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+179,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data),32);
    bufp->fullBit(oldp+180,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                   >> 9U))));
    bufp->fullBit(oldp+181,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                   >> 9U))));
    bufp->fullIData(oldp+182,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                          >> 9U)) & 
                                      (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                       >> 9U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data
                                : 0U)),32);
    bufp->fullIData(oldp+183,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data),32);
    bufp->fullIData(oldp+184,(vlSelfRef.top__DOT__alu_result),32);
    bufp->fullBit(oldp+185,(vlSelfRef.top__DOT__memory_read_enable));
    bufp->fullBit(oldp+186,(vlSelfRef.top__DOT__memory_write_enable));
    bufp->fullSData(oldp+187,((0x00000fffU & vlSelfRef.top__DOT__alu_result)),12);
    bufp->fullBit(oldp+188,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+189,(vlSelfRef.rst_n_i));
    bufp->fullIData(oldp+190,(vlSelfRef.output_o),32);
    bufp->fullIData(oldp+191,(vlSelfRef.top__DOT__memory_read_data),32);
}
