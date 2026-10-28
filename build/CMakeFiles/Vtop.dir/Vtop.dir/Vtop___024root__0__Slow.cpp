// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n_i__0 = vlSelfRef.rst_n_i;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(false, 32, 256, 0, "./build/instructions.mem"s
                 ,  &(vlSelfRef.top__DOT__instr_mem__DOT__data)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/top.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__fetch_next_instruction = 0U;
    vlSelfRef.top__DOT__memory_write_enable = 0U;
    vlSelfRef.top__DOT__select_imm_alu = 0U;
    vlSelfRef.top__DOT__memory_read_enable = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = VL_LTS_III(32, vlSelfRef.top__DOT__operand_1, vlSelfRef.top__DOT__operand_2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (vlSelfRef.top__DOT__operand_1 
                                                < vlSelfRef.top__DOT__operand_2);
    vlSelfRef.top__DOT__instr = vlSelfRef.top__DOT__instr_mem__DOT__data
        [(0x000000ffU & (vlSelfRef.top__DOT__pc >> 2U))];
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
                            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                    vlSelfRef.top__DOT__memory_write_enable = 1U;
                                }
                            }
                            if ((2U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                                    vlSelfRef.top__DOT__select_imm_alu = 1U;
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cu__DOT__state)))) {
                                vlSelfRef.top__DOT__select_imm_alu = 1U;
                            }
                        }
                        if ((4U & (IData)(vlSelfRef.top__DOT__cu__DOT__state))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cu__DOT__state) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.top__DOT__cu__DOT__state)))) {
                                    vlSelfRef.top__DOT__memory_read_enable = 1U;
                                }
                            }
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
    vlSelfRef.output_o = ((IData)(vlSelfRef.top__DOT__register_write_enable)
                           ? 0U : vlSelfRef.top__DOT__alu_result);
    vlSelfRef.top__DOT__register_read_2 = ((IData)(vlSelfRef.top__DOT__register_read_enable)
                                            ? vlSelfRef.top__DOT__reg_file__DOT__output_data
                                           [(0x0000001fU 
                                             & (vlSelfRef.top__DOT__instr 
                                                >> 0x00000014U))]
                                            : 0U);
}

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_n_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16109589058913104882ull);
    vlSelf->output_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9936714544909124739ull);
    vlSelf->top__DOT__register_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8678452750493365774ull);
    vlSelf->top__DOT__register_read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13160333731673307396ull);
    vlSelf->top__DOT__register_data_write = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1223895928624111140ull);
    vlSelf->top__DOT__register_read_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12421879028878892563ull);
    vlSelf->top__DOT__operand_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14406279093722321611ull);
    vlSelf->top__DOT__operand_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17862736441469486039ull);
    vlSelf->top__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1414706314101411564ull);
    vlSelf->top__DOT__select_imm_alu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8135011273122895832ull);
    vlSelf->top__DOT__memory_read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3400952244941940420ull);
    vlSelf->top__DOT__memory_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17634255943205086291ull);
    vlSelf->top__DOT__memory_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 377366931294556919ull);
    vlSelf->top__DOT__memory_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11883604837660984035ull);
    vlSelf->top__DOT__register_write = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13222074299516331948ull);
    vlSelf->top__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8764853023528993103ull);
    vlSelf->top__DOT__fetch_next_instruction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6035595764884347616ull);
    vlSelf->top__DOT__should_take_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8332180971349601803ull);
    vlSelf->top__DOT__alu_op_select = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17221035965197043158ull);
    vlSelf->top__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3126867797622976717ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__instr_mem__DOT__data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16782526579255508118ull);
    }
    vlSelf->top__DOT__reg_file__DOT__reg_enable_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11452327610635903904ull);
    vlSelf->top__DOT__reg_file__DOT__reg_enable_write = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6827439381317140852ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__reg_file__DOT__output_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9745118204537988352ull);
    }
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7957421630335331497ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18396310890874709436ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16401912496097657717ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13374875344061556560ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12383251197358100203ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3642152765128465961ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7413249123327602212ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 426010428946906170ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17874518572193168827ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14758392456204714777ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3841898980621818018ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17226994498876395725ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16660449789660937194ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5073900315652383954ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5935894981001105457ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17117023588602849149ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4336417221469305682ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8647673507553343801ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4014413987224330866ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1893280756640790577ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13308875946694572677ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14499663433823839054ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2807924902162911829ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 51821448447375322ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16809855364940592727ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13266622172890171060ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1925914270380590809ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5339037754019707820ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17079462547506861001ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4111010016249676297ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12474923212863869916ull);
    vlSelf->top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5648376456208272920ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__data_mem__DOT__data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9805422334817376294ull);
    }
    vlSelf->top__DOT__cu__DOT__state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5701167909340745992ull);
    vlSelf->top__DOT__cu__DOT__next_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14837768187453698068ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdlyVal__top__DOT__data_mem__DOT__data__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__data_mem__DOT__data__v0 = 0;
    vlSelf->__VdlySet__top__DOT__data_mem__DOT__data__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n_i__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
