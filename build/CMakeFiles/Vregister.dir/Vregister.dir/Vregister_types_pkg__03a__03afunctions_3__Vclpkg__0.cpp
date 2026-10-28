// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "Vregister__pch.h"

Vregister_types_pkg__03a__03afunctions_3::Vregister_types_pkg__03a__03afunctions_3(Vregister__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_types_pkg__03a__03afunctions_3::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vregister_types_pkg__03a__03afunctions_3::_ctor_var_reset(Vregister__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_types_pkg__03a__03afunctions_3::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vregister_types_pkg__03a__03afunctions_3::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_types_pkg__03a__03afunctions_3::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vregister_types_pkg__03a__03afunctions_3::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_types_pkg__03a__03afunctions_3::to_string_middle\n"); );
    // Body
    return (""s);
}
