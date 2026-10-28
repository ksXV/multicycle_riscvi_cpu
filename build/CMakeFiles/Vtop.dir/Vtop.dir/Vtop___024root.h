// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_types_pkg;
class Vtop_types_pkg__03a__03aalu_ops__Vclpkg;
class Vtop_types_pkg__03a__03afunctions_3__Vclpkg;
class Vtop_types_pkg__03a__03ainstruction_type__Vclpkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_types_pkg* __PVT__types_pkg;
    Vtop_types_pkg__03a__03afunctions_3__Vclpkg* types_pkg__03a__03afunctions_3__Vclpkg;
    Vtop_types_pkg__03a__03aalu_ops__Vclpkg* types_pkg__03a__03aalu_ops__Vclpkg;
    Vtop_types_pkg__03a__03ainstruction_type__Vclpkg* types_pkg__03a__03ainstruction_type__Vclpkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_n_i,0,0);
        CData/*0:0*/ top__DOT__register_write_enable;
        CData/*0:0*/ top__DOT__register_read_enable;
        CData/*0:0*/ top__DOT__select_imm_alu;
        CData/*0:0*/ top__DOT__memory_read_enable;
        CData/*0:0*/ top__DOT__memory_write_enable;
        CData/*4:0*/ top__DOT__register_write;
        CData/*0:0*/ top__DOT__fetch_next_instruction;
        CData/*0:0*/ top__DOT__should_take_branch;
        CData/*3:0*/ top__DOT__alu_op_select;
        CData/*7:0*/ top__DOT__cu__DOT__state;
        CData/*7:0*/ top__DOT__cu__DOT__next_state;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        CData/*0:0*/ __VdlySet__top__DOT__data_mem__DOT__data__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n_i__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*11:0*/ __VdlyDim0__top__DOT__data_mem__DOT__data__v0;
        VL_OUT(output_o,31,0);
        IData/*31:0*/ top__DOT__register_data_write;
        IData/*31:0*/ top__DOT__register_read_2;
        IData/*31:0*/ top__DOT__operand_1;
        IData/*31:0*/ top__DOT__operand_2;
        IData/*31:0*/ top__DOT__alu_result;
        IData/*31:0*/ top__DOT__memory_write_data;
        IData/*31:0*/ top__DOT__memory_read_data;
        IData/*31:0*/ top__DOT__pc;
        IData/*31:0*/ top__DOT__instr;
        IData/*31:0*/ top__DOT__reg_file__DOT__reg_enable_read;
        IData/*31:0*/ top__DOT__reg_file__DOT__reg_enable_write;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__0__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__1__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__2__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__3__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__4__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__5__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__6__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__7__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__8__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__9__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__10__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__11__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__12__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__13__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__14__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__15__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__16__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__17__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__18__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__19__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__20__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__21__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__22__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__23__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__24__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__25__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__26__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__27__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__28__KET____DOT__r__DOT__data;
    };
    struct {
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__29__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__30__KET____DOT__r__DOT__data;
        IData/*31:0*/ top__DOT__reg_file__DOT__gen_registers__BRA__31__KET____DOT__r__DOT__data;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        IData/*31:0*/ __VdlyVal__top__DOT__data_mem__DOT__data__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 256> top__DOT__instr_mem__DOT__data;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__reg_file__DOT__output_data;
        VlUnpacked<IData/*31:0*/, 4096> top__DOT__data_mem__DOT__data;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
