// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__register_write_enable));
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__register_read_enable));
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__register_data_write),32);
        bufp->chgIData(oldp+3,(((IData)(vlSelfRef.top__DOT__register_read_enable)
                                 ? vlSelfRef.top__DOT__reg_file__DOT__output_data
                                [(0x0000001fU & (vlSelfRef.top__DOT__instr 
                                                 >> 0x0000000fU))]
                                 : 0U)),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__register_read_2),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__operand_1),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__operand_2),32);
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__select_imm_alu));
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__memory_write_data),32);
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__register_write),5);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__pc),32);
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__fetch_next_instruction));
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__should_take_branch));
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__alu_op_select),4);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__instr),32);
        bufp->chgBit(oldp+15,(((0x00000040U & vlSelfRef.top__DOT__instr)
                                ? (IData)(((0x00000020U 
                                            == (0x00000030U 
                                                & vlSelfRef.top__DOT__instr)) 
                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                : ((0x00000020U & vlSelfRef.top__DOT__instr)
                                    ? ((0x00000010U 
                                        & vlSelfRef.top__DOT__instr)
                                        ? (IData)((
                                                   (3U 
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
        bufp->chgCData(oldp+16,((0x0000007fU & vlSelfRef.top__DOT__instr)),7);
        bufp->chgCData(oldp+17,(vlSelfRef.top__DOT__cu__DOT__state),8);
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__cu__DOT__next_state),8);
        bufp->chgCData(oldp+19,((0x0000001fU & (vlSelfRef.top__DOT__instr 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+20,((0x0000001fU & (vlSelfRef.top__DOT__instr 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+21,((0x0000001fU & (vlSelfRef.top__DOT__instr 
                                                >> 7U))),5);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__reg_file__DOT__output_data[0]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__reg_file__DOT__output_data[1]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__reg_file__DOT__output_data[2]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__reg_file__DOT__output_data[3]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__reg_file__DOT__output_data[4]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__reg_file__DOT__output_data[5]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__reg_file__DOT__output_data[6]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__reg_file__DOT__output_data[7]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__reg_file__DOT__output_data[8]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__reg_file__DOT__output_data[9]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__reg_file__DOT__output_data[10]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__reg_file__DOT__output_data[11]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__reg_file__DOT__output_data[12]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__reg_file__DOT__output_data[13]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__reg_file__DOT__output_data[14]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__reg_file__DOT__output_data[15]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__reg_file__DOT__output_data[16]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__reg_file__DOT__output_data[17]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__reg_file__DOT__output_data[18]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__reg_file__DOT__output_data[19]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__reg_file__DOT__output_data[20]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__reg_file__DOT__output_data[21]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__reg_file__DOT__output_data[22]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__reg_file__DOT__output_data[23]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__reg_file__DOT__output_data[24]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__reg_file__DOT__output_data[25]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__reg_file__DOT__output_data[26]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__reg_file__DOT__output_data[27]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__reg_file__DOT__output_data[28]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__reg_file__DOT__output_data[29]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__reg_file__DOT__output_data[30]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__reg_file__DOT__output_data[31]),32);
        bufp->chgBit(oldp+56,((1U & vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write)));
        bufp->chgBit(oldp+57,((1U & vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read)));
        bufp->chgIData(oldp+58,(((1U & ((~ vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write) 
                                        & vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x0000000aU))));
        bufp->chgBit(oldp+61,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x0000000aU))));
        bufp->chgIData(oldp+62,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x0000000aU)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x0000000aU)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x0000000bU))));
        bufp->chgBit(oldp+65,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x0000000bU))));
        bufp->chgIData(oldp+66,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x0000000bU)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x0000000bU)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x0000000cU))));
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x0000000cU))));
        bufp->chgIData(oldp+70,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x0000000cU)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x0000000cU)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x0000000dU))));
        bufp->chgIData(oldp+74,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x0000000dU)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x0000000dU)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x0000000eU))));
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x0000000eU))));
        bufp->chgIData(oldp+78,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x0000000eU)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x0000000eU)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x0000000fU))));
        bufp->chgBit(oldp+81,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x0000000fU))));
        bufp->chgIData(oldp+82,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x0000000fU)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x0000000fU)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x00000010U))));
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x00000010U))));
        bufp->chgIData(oldp+86,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x00000010U)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x00000010U)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+88,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x00000011U))));
        bufp->chgBit(oldp+89,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x00000011U))));
        bufp->chgIData(oldp+90,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x00000011U)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x00000011U)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x00000012U))));
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x00000012U))));
        bufp->chgIData(oldp+94,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x00000012U)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x00000012U)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+96,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                     >> 0x00000013U))));
        bufp->chgBit(oldp+97,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                     >> 0x00000013U))));
        bufp->chgIData(oldp+98,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                            >> 0x00000013U)) 
                                        & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                           >> 0x00000013U)))
                                  ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data
                                  : 0U)),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 1U))));
        bufp->chgBit(oldp+101,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 1U))));
        bufp->chgIData(oldp+102,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 1U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 1U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+104,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x00000014U))));
        bufp->chgIData(oldp+106,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x00000014U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x00000014U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+107,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+108,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+109,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x00000015U))));
        bufp->chgIData(oldp+110,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x00000015U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x00000015U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+112,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+113,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x00000016U))));
        bufp->chgIData(oldp+114,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x00000016U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x00000016U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+116,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+117,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x00000017U))));
        bufp->chgIData(oldp+118,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x00000017U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x00000017U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+121,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x00000018U))));
        bufp->chgIData(oldp+122,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x00000018U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x00000018U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+123,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+124,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+125,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x00000019U))));
        bufp->chgIData(oldp+126,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x00000019U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x00000019U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+127,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+128,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x0000001aU))));
        bufp->chgIData(oldp+130,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x0000001aU)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x0000001aU)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+131,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+133,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x0000001bU))));
        bufp->chgIData(oldp+134,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x0000001bU)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x0000001bU)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+135,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+136,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+137,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x0000001cU))));
        bufp->chgIData(oldp+138,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x0000001cU)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x0000001cU)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+139,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+141,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x0000001dU))));
        bufp->chgIData(oldp+142,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x0000001dU)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x0000001dU)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 2U))));
        bufp->chgBit(oldp+145,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 2U))));
        bufp->chgIData(oldp+146,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 2U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 2U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+147,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x0000001eU))));
        bufp->chgIData(oldp+150,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 0x0000001eU)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 0x0000001eU)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+151,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+152,((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+153,((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                >> 0x0000001fU)));
        bufp->chgIData(oldp+154,((((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                       >> 0x0000001fU)) 
                                   & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 0x0000001fU))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+156,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 3U))));
        bufp->chgBit(oldp+157,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 3U))));
        bufp->chgIData(oldp+158,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 3U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 3U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+159,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+160,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 4U))));
        bufp->chgBit(oldp+161,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 4U))));
        bufp->chgIData(oldp+162,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 4U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 4U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+163,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+164,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 5U))));
        bufp->chgBit(oldp+165,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 5U))));
        bufp->chgIData(oldp+166,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 5U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 5U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+167,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+168,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 6U))));
        bufp->chgBit(oldp+169,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 6U))));
        bufp->chgIData(oldp+170,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 6U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 6U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+171,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+172,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 7U))));
        bufp->chgBit(oldp+173,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 7U))));
        bufp->chgIData(oldp+174,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 7U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 7U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+175,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+176,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 8U))));
        bufp->chgBit(oldp+177,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 8U))));
        bufp->chgIData(oldp+178,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 8U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 8U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+179,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data),32);
        bufp->chgBit(oldp+180,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                      >> 9U))));
        bufp->chgBit(oldp+181,((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                      >> 9U))));
        bufp->chgIData(oldp+182,(((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                                             >> 9U)) 
                                         & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                            >> 9U)))
                                   ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data
                                   : 0U)),32);
        bufp->chgIData(oldp+183,(vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+184,(vlSelfRef.top__DOT__alu_result),32);
        bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__memory_read_enable));
        bufp->chgBit(oldp+186,(vlSelfRef.top__DOT__memory_write_enable));
        bufp->chgSData(oldp+187,((0x00000fffU & vlSelfRef.top__DOT__alu_result)),12);
    }
    bufp->chgBit(oldp+188,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+189,(vlSelfRef.rst_n_i));
    bufp->chgIData(oldp+190,(vlSelfRef.output_o),32);
    bufp->chgIData(oldp+191,(vlSelfRef.top__DOT__memory_read_data),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
