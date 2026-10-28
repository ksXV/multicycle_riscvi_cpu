// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

Valu_types_pkg__03a__03ainstruction_type::Valu_types_pkg__03a__03ainstruction_type(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_types_pkg__03a__03ainstruction_type::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Valu_types_pkg__03a__03ainstruction_type::_ctor_var_reset(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_types_pkg__03a__03ainstruction_type::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Valu_types_pkg__03a__03ainstruction_type::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_types_pkg__03a__03ainstruction_type::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Valu_types_pkg__03a__03ainstruction_type::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Valu_types_pkg__03a__03ainstruction_type::to_string_middle\n"); );
    // Body
    return (""s);
}
