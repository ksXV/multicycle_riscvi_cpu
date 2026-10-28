// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

void Valu___024root___eval_triggers_vec__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers_vec__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Valu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_anySet__ico\n"); );
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

void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_0 = VL_LTS_III(32, vlSelfRef.operand_1_i, vlSelfRef.operand_2_i);
    __VdfgRegularize_h6e95ff9d_0_1 = (vlSelfRef.operand_1_i 
                                      < vlSelfRef.operand_2_i);
    vlSelfRef.result_o = ((8U & (IData)(vlSelfRef.ops))
                           ? ((4U & (IData)(vlSelfRef.ops))
                               ? ((2U & (IData)(vlSelfRef.ops))
                                   ? ((1U & (IData)(vlSelfRef.ops))
                                       ? (vlSelfRef.operand_1_i 
                                          >= vlSelfRef.operand_2_i)
                                       : __VdfgRegularize_h6e95ff9d_0_1)
                                   : ((1U & (IData)(vlSelfRef.ops))
                                       ? VL_GTES_III(32, vlSelfRef.operand_1_i, vlSelfRef.operand_2_i)
                                       : __VdfgRegularize_h6e95ff9d_0_0))
                               : ((2U & (IData)(vlSelfRef.ops))
                                   ? ((1U & (IData)(vlSelfRef.ops))
                                       ? (vlSelfRef.operand_1_i 
                                          != vlSelfRef.operand_2_i)
                                       : (vlSelfRef.operand_1_i 
                                          == vlSelfRef.operand_2_i))
                                   : ((1U & (IData)(vlSelfRef.ops))
                                       ? __VdfgRegularize_h6e95ff9d_0_1
                                       : __VdfgRegularize_h6e95ff9d_0_0)))
                           : ((4U & (IData)(vlSelfRef.ops))
                               ? ((2U & (IData)(vlSelfRef.ops))
                                   ? ((1U & (IData)(vlSelfRef.ops))
                                       ? VL_SHIFTRS_III(32,32,5, vlSelfRef.operand_1_i, 
                                                        (0x0000001fU 
                                                         & vlSelfRef.operand_2_i))
                                       : (vlSelfRef.operand_1_i 
                                          >> (0x0000001fU 
                                              & vlSelfRef.operand_2_i)))
                                   : ((1U & (IData)(vlSelfRef.ops))
                                       ? (vlSelfRef.operand_1_i 
                                          << (0x0000001fU 
                                              & vlSelfRef.operand_2_i))
                                       : (vlSelfRef.operand_1_i 
                                          & vlSelfRef.operand_2_i)))
                               : ((2U & (IData)(vlSelfRef.ops))
                                   ? ((1U & (IData)(vlSelfRef.ops))
                                       ? (vlSelfRef.operand_1_i 
                                          | vlSelfRef.operand_2_i)
                                       : (vlSelfRef.operand_1_i 
                                          ^ vlSelfRef.operand_2_i))
                                   : ((1U & (IData)(vlSelfRef.ops))
                                       ? (vlSelfRef.operand_1_i 
                                          - vlSelfRef.operand_2_i)
                                       : (vlSelfRef.operand_1_i 
                                          + vlSelfRef.operand_2_i)))));
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Valu___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/cpu/alu.v", 3, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Valu___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.ops & 0xf0U)))) {
        Verilated::overWidthError("ops");
    }
}
#endif  // VL_DEBUG
