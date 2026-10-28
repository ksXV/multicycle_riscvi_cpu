// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n_i)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n_i__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk_i) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n_i__0 = vlSelfRef.rst_n_i;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__top__DOT__data_mem__DOT__data__v0 = 0U;
    if (((IData)(vlSelfRef.top__DOT__memory_write_enable) 
         & (~ (IData)(vlSelfRef.top__DOT__memory_read_enable)))) {
        vlSelfRef.__VdlyVal__top__DOT__data_mem__DOT__data__v0 
            = vlSelfRef.top__DOT__memory_write_data;
        vlSelfRef.__VdlyDim0__top__DOT__data_mem__DOT__data__v0 
            = (0x00000fffU & vlSelfRef.top__DOT__alu_result);
        vlSelfRef.__VdlySet__top__DOT__data_mem__DOT__data__v0 = 1U;
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n_i) {
        if (vlSelfRef.top__DOT__fetch_next_instruction) {
            vlSelfRef.top__DOT__pc = (((IData)(vlSelfRef.top__DOT__should_take_branch) 
                                       & (0x63U == 
                                          (0x0000007fU 
                                           & vlSelfRef.top__DOT__instr)))
                                       ? (vlSelfRef.top__DOT__pc 
                                          + (((- (IData)(
                                                         (vlSelfRef.top__DOT__instr 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | ((0x00000800U 
                                                 & (vlSelfRef.top__DOT__instr 
                                                    << 4U)) 
                                                | ((0x000007e0U 
                                                    & (vlSelfRef.top__DOT__instr 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001eU 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 7U))))))
                                       : ((IData)(4U) 
                                          + vlSelfRef.top__DOT__pc));
        }
        vlSelfRef.top__DOT__operand_2 = ((IData)(vlSelfRef.top__DOT__select_imm_alu)
                                          ? ((0x23U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.top__DOT__instr))
                                              ? (((- (IData)(
                                                             (vlSelfRef.top__DOT__instr 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000fe0U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.top__DOT__instr 
                                                          >> 7U))))
                                              : (((- (IData)(
                                                             (vlSelfRef.top__DOT__instr 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | (vlSelfRef.top__DOT__instr 
                                                    >> 0x00000014U)))
                                          : vlSelfRef.top__DOT__register_read_2);
        vlSelfRef.top__DOT__register_write = (0x0000001fU 
                                              & (vlSelfRef.top__DOT__instr 
                                                 >> 7U));
        if ((1U & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                   & (~ vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read)))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 1U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 1U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 2U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 2U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 3U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 3U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 4U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 4U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 5U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 5U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 6U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 6U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 7U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 7U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 8U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 8U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 9U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 9U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000000aU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000aU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000000bU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000bU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000000cU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000cU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000000dU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000dU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000000eU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000eU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000000fU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000fU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000010U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000010U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000011U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000011U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000012U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000012U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000013U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000013U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000014U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000014U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000015U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000015U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000016U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000016U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000017U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000017U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000018U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000018U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x00000019U) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000019U))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000001aU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001aU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000001bU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001bU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000001cU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001cU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000001dU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001dU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if ((1U & ((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    >> 0x0000001eU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001eU))))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        if (((vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
              >> 0x0000001fU) & (~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                    >> 0x0000001fU)))) {
            vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data 
                = vlSelfRef.top__DOT__register_data_write;
        }
        vlSelfRef.top__DOT__operand_1 = ((IData)(vlSelfRef.top__DOT__register_read_enable)
                                          ? vlSelfRef.top__DOT__reg_file__DOT__output_data
                                         [(0x0000001fU 
                                           & (vlSelfRef.top__DOT__instr 
                                              >> 0x0000000fU))]
                                          : 0U);
        vlSelfRef.top__DOT__cu__DOT__state = vlSelfRef.top__DOT__cu__DOT__next_state;
        vlSelfRef.top__DOT__memory_write_data = ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__instr 
                                                      >> 0x0000000cU)))
                                                  ? 
                                                 (0x000000ffU 
                                                  & vlSelfRef.top__DOT__register_read_2)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.top__DOT__instr 
                                                       >> 0x0000000cU)))
                                                   ? 
                                                  (0x0000ffffU 
                                                   & vlSelfRef.top__DOT__register_read_2)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 0x0000000cU)))
                                                    ? vlSelfRef.top__DOT__register_read_2
                                                    : 0U)));
        vlSelfRef.top__DOT__register_data_write = (
                                                   (3U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.top__DOT__instr))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 0x0000000cU)))
                                                     ? 
                                                    (0x000000ffU 
                                                     & vlSelfRef.top__DOT__memory_read_data)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.top__DOT__instr 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     (0x0000ffffU 
                                                      & vlSelfRef.top__DOT__memory_read_data)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.top__DOT__instr 
                                                           >> 0x0000000cU)))
                                                       ? vlSelfRef.top__DOT__memory_read_data
                                                       : 0U)))
                                                    : vlSelfRef.top__DOT__alu_result);
    } else {
        vlSelfRef.top__DOT__pc = 0x00000040U;
        vlSelfRef.top__DOT__operand_2 = 0U;
        vlSelfRef.top__DOT__register_write = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data = 0U;
        vlSelfRef.top__DOT__operand_1 = 0U;
        vlSelfRef.top__DOT__cu__DOT__state = 1U;
        vlSelfRef.top__DOT__memory_write_data = 0U;
        vlSelfRef.top__DOT__register_data_write = 0U;
    }
    vlSelfRef.top__DOT__should_take_branch = ((IData)(vlSelfRef.rst_n_i) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__alu_result));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = VL_LTS_III(32, vlSelfRef.top__DOT__operand_1, vlSelfRef.top__DOT__operand_2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (vlSelfRef.top__DOT__operand_1 
                                                < vlSelfRef.top__DOT__operand_2);
    vlSelfRef.top__DOT__fetch_next_instruction = 0U;
    vlSelfRef.top__DOT__select_imm_alu = 0U;
    vlSelfRef.top__DOT__register_write_enable = 0U;
    vlSelfRef.top__DOT__register_read_enable = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.top__DOT__cu__DOT__state)))) {
                                    vlSelfRef.top__DOT__fetch_next_instruction = 1U;
                                }
                            }
                        }
                    }
                    if ((8U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                    vlSelfRef.top__DOT__select_imm_alu = 1U;
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cu__DOT__state)))) {
                                vlSelfRef.top__DOT__select_imm_alu = 1U;
                            }
                        }
                        if ((4U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                if ((1U & (~ (IData)(vlSelfRef.top__DOT__cu__DOT__state)))) {
                                    vlSelfRef.top__DOT__register_write_enable = 1U;
                                }
                                if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                    vlSelfRef.top__DOT__register_read_enable = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                vlSelfRef.top__DOT__register_read_enable = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__register_read_enable = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                vlSelfRef.top__DOT__select_imm_alu = 1U;
                                vlSelfRef.top__DOT__register_read_enable = 1U;
                            }
                        }
                        if ((2U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                vlSelfRef.top__DOT__register_write_enable = 1U;
                            }
                        } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cu__DOT__state)))) {
                            vlSelfRef.top__DOT__register_write_enable = 1U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cu__DOT__state)))) {
                            vlSelfRef.top__DOT__register_read_enable = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__instr = vlSelfRef.top__DOT__instr_mem__DOT__data
        [(0x000000ffU & (vlSelfRef.top__DOT__pc >> 2U))];
    vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__register_read_enable) 
                  & (~ (IData)(vlSelfRef.top__DOT__register_write_enable)))))) {
        if (((~ (IData)(vlSelfRef.top__DOT__register_read_enable)) 
             & (IData)(vlSelfRef.top__DOT__register_write_enable))) {
            if ((0U != (IData)(vlSelfRef.top__DOT__register_write))) {
                vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                    = (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                       | (0x00000000ffffffffULL & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.top__DOT__register_write))));
            }
        }
    }
    vlSelfRef.top__DOT__cu__DOT__next_state = 1U;
    if ((0x00000080U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
        vlSelfRef.top__DOT__cu__DOT__next_state = 0U;
    } else if ((0x00000040U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
        vlSelfRef.top__DOT__cu__DOT__next_state = 0U;
    } else if ((0x00000020U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
        vlSelfRef.top__DOT__cu__DOT__next_state = 0U;
    } else if ((0x00000010U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
        vlSelfRef.top__DOT__cu__DOT__next_state = 0U;
    } else if ((8U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
        vlSelfRef.top__DOT__cu__DOT__next_state = (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                      ? 0x10U
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                      ? 0x0eU
                                                      : 0x0dU))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                      ? 0x0cU
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                      ? 0x0aU
                                                      : 9U)));
    } else if ((4U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
        vlSelfRef.top__DOT__cu__DOT__next_state = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                     ? 6U
                                                     : 0U));
    } else if ((2U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
        vlSelfRef.top__DOT__cu__DOT__next_state = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__cu__DOT__state))
                                                    ? 4U
                                                    : 3U);
    } else if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
        if ((0x33U == (0x0000007fU & vlSelfRef.top__DOT__instr))) {
            vlSelfRef.top__DOT__cu__DOT__next_state = 2U;
        } else if ((0x13U == (0x0000007fU & vlSelfRef.top__DOT__instr))) {
            vlSelfRef.top__DOT__cu__DOT__next_state = 5U;
        } else if ((0x23U == (0x0000007fU & vlSelfRef.top__DOT__instr))) {
            vlSelfRef.top__DOT__cu__DOT__next_state = 8U;
        } else if ((3U == (0x0000007fU & vlSelfRef.top__DOT__instr))) {
            vlSelfRef.top__DOT__cu__DOT__next_state = 0x0bU;
        } else if ((0x63U == (0x0000007fU & vlSelfRef.top__DOT__instr))) {
            vlSelfRef.top__DOT__cu__DOT__next_state = 0x0fU;
        }
    } else {
        vlSelfRef.top__DOT__cu__DOT__next_state = 1U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((0x0000001fU 
                                                 & (vlSelfRef.top__DOT__instr 
                                                    >> 0x0000000fU)) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.top__DOT__instr 
                                                    >> 7U)));
    vlSelfRef.top__DOT__alu_op_select = (((3U == (0x0000007fU 
                                                  & vlSelfRef.top__DOT__instr)) 
                                          | (0x23U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__instr)))
                                          ? 0U : ((0x13U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.top__DOT__instr))
                                                   ? 
                                                  ((0x00004000U 
                                                    & vlSelfRef.top__DOT__instr)
                                                    ? 
                                                   ((0x00002000U 
                                                     & vlSelfRef.top__DOT__instr)
                                                     ? 
                                                    ((0x00001000U 
                                                      & vlSelfRef.top__DOT__instr)
                                                      ? 4U
                                                      : 3U)
                                                     : 
                                                    ((0x00001000U 
                                                      & vlSelfRef.top__DOT__instr)
                                                      ? 
                                                     ((0x20U 
                                                       == 
                                                       (vlSelfRef.top__DOT__instr 
                                                        >> 0x00000019U))
                                                       ? 7U
                                                       : 6U)
                                                      : 2U))
                                                    : 
                                                   ((0x00002000U 
                                                     & vlSelfRef.top__DOT__instr)
                                                     ? 
                                                    ((0x00001000U 
                                                      & vlSelfRef.top__DOT__instr)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((0x00001000U 
                                                      & vlSelfRef.top__DOT__instr)
                                                      ? 5U
                                                      : 0U)))
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.top__DOT__instr))
                                                    ? 
                                                   ((0x00004000U 
                                                     & vlSelfRef.top__DOT__instr)
                                                     ? 
                                                    ((0x00002000U 
                                                      & vlSelfRef.top__DOT__instr)
                                                      ? 
                                                     ((0x00001000U 
                                                       & vlSelfRef.top__DOT__instr)
                                                       ? 4U
                                                       : 3U)
                                                      : 
                                                     ((0x00001000U 
                                                       & vlSelfRef.top__DOT__instr)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelfRef.top__DOT__instr)
                                                        ? 7U
                                                        : 6U)
                                                       : 2U))
                                                     : 
                                                    ((0x00002000U 
                                                      & vlSelfRef.top__DOT__instr)
                                                      ? 
                                                     ((0x00001000U 
                                                       & vlSelfRef.top__DOT__instr)
                                                       ? 9U
                                                       : 8U)
                                                      : 
                                                     ((0x00001000U 
                                                       & vlSelfRef.top__DOT__instr)
                                                       ? 5U
                                                       : 
                                                      ((0x40000000U 
                                                        & vlSelfRef.top__DOT__instr)
                                                        ? 1U
                                                        : 0U))))
                                                    : 
                                                   ((0x00004000U 
                                                     & vlSelfRef.top__DOT__instr)
                                                     ? 
                                                    ((0x00002000U 
                                                      & vlSelfRef.top__DOT__instr)
                                                      ? 
                                                     ((0x00001000U 
                                                       & vlSelfRef.top__DOT__instr)
                                                       ? 0x0fU
                                                       : 0x0eU)
                                                      : 
                                                     ((0x00001000U 
                                                       & vlSelfRef.top__DOT__instr)
                                                       ? 0x0dU
                                                       : 0x0cU))
                                                     : 
                                                    ((0x00002000U 
                                                      & vlSelfRef.top__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((0x00001000U 
                                                       & vlSelfRef.top__DOT__instr)
                                                       ? 0x0bU
                                                       : 0x0aU))))));
    vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read = 0U;
    if (((IData)(vlSelfRef.top__DOT__register_read_enable) 
         & (~ (IData)(vlSelfRef.top__DOT__register_write_enable)))) {
        vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
            = (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
               | (0x00000000ffffffffULL & ((IData)(1U) 
                                           << (0x0000001fU 
                                               & (vlSelfRef.top__DOT__instr 
                                                  >> 0x0000000fU)))));
        vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
            = (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
               | (0x00000000ffffffffULL & ((IData)(1U) 
                                           << (0x0000001fU 
                                               & (vlSelfRef.top__DOT__instr 
                                                  >> 0x00000014U)))));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (IData)(
                                                       ((3U 
                                                         == 
                                                         (0x0000000fU 
                                                          & vlSelfRef.top__DOT__instr)) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
    vlSelfRef.top__DOT__reg_file__DOT__output_data[0U] 
        = ((1U & ((~ vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write) 
                  & vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[1U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 1U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 1U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[2U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 2U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 2U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[3U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 3U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 3U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[4U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 4U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 4U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[5U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 5U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 5U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[6U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 6U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 6U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[7U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 7U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 7U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[8U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 8U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 8U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[9U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 9U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                 >> 9U))) ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[10U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000000aU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000aU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[11U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000000bU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000bU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[12U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000000cU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000cU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[13U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000000dU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000dU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[14U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000000eU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000eU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[15U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000000fU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000000fU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[16U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000010U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000010U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[17U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000011U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000011U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[18U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000012U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000012U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[19U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000013U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000013U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[20U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000014U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000014U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[21U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000015U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000015U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[22U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000016U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000016U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[23U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000017U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000017U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[24U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000018U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000018U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[25U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x00000019U)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x00000019U)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[26U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000001aU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001aU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[27U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000001bU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001bU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[28U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000001cU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001cU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[29U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000001dU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001dU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[30U] 
        = ((1U & ((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                      >> 0x0000001eU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                          >> 0x0000001eU)))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__reg_file__DOT__output_data[31U] 
        = (((~ (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_write 
                >> 0x0000001fU)) & (vlSelfRef.top__DOT__reg_file__DOT__reg_enable_read 
                                    >> 0x0000001fU))
            ? vlSelfRef.top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data
            : 0U);
    vlSelfRef.top__DOT__register_read_2 = ((IData)(vlSelfRef.top__DOT__register_read_enable)
                                            ? vlSelfRef.top__DOT__reg_file__DOT__output_data
                                           [(0x0000001fU 
                                             & (vlSelfRef.top__DOT__instr 
                                                >> 0x00000014U))]
                                            : 0U);
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.top__DOT__memory_read_enable) 
         & (~ (IData)(vlSelfRef.top__DOT__memory_write_enable)))) {
        vlSelfRef.top__DOT__memory_read_data = vlSelfRef.top__DOT__data_mem__DOT__data
            [(0x00000fffU & vlSelfRef.top__DOT__alu_result)];
    }
    if (vlSelfRef.__VdlySet__top__DOT__data_mem__DOT__data__v0) {
        vlSelfRef.top__DOT__data_mem__DOT__data[vlSelfRef.__VdlyDim0__top__DOT__data_mem__DOT__data__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__data_mem__DOT__data__v0;
    }
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__memory_read_enable = 0U;
    vlSelfRef.top__DOT__memory_write_enable = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                      >> 6U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                        if ((4U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.top__DOT__cu__DOT__state)))) {
                                    vlSelfRef.top__DOT__memory_read_enable = 1U;
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                    vlSelfRef.top__DOT__memory_write_enable = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__alu_result = ((8U & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                       ? ((4U & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                                   ? 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   >= vlSelfRef.top__DOT__operand_2)
                                                   : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                                   ? 
                                                  VL_GTES_III(32, vlSelfRef.top__DOT__operand_1, vlSelfRef.top__DOT__operand_2)
                                                   : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))
                                           : ((2U & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                                   ? 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   != vlSelfRef.top__DOT__operand_2)
                                                   : 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   == vlSelfRef.top__DOT__operand_2))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7
                                                   : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)))
                                       : ((4U & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__operand_1, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.top__DOT__operand_2))
                                                   : 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   >> 
                                                   (0x0000001fU 
                                                    & vlSelfRef.top__DOT__operand_2)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                                   ? 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   << 
                                                   (0x0000001fU 
                                                    & vlSelfRef.top__DOT__operand_2))
                                                   : 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   & vlSelfRef.top__DOT__operand_2)))
                                           : ((2U & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                                   ? 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   | vlSelfRef.top__DOT__operand_2)
                                                   : 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   ^ vlSelfRef.top__DOT__operand_2))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op_select))
                                                   ? 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   - vlSelfRef.top__DOT__operand_2)
                                                   : 
                                                  (vlSelfRef.top__DOT__operand_1 
                                                   + vlSelfRef.top__DOT__operand_2)))));
    vlSelfRef.output_o = ((IData)(vlSelfRef.top__DOT__register_write_enable)
                           ? 0U : vlSelfRef.top__DOT__alu_result);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/top.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/top.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n_i & 0xfeU)))) {
        Verilated::overWidthError("rst_n_i");
    }
}
#endif  // VL_DEBUG
