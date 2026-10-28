// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_types_pkg__03a__03aalu_ops__Vclpkg___ctor_var_reset(Vtop_types_pkg__03a__03aalu_ops__Vclpkg* vlSelf);

Vtop_types_pkg__03a__03aalu_ops__Vclpkg::Vtop_types_pkg__03a__03aalu_ops__Vclpkg() = default;
Vtop_types_pkg__03a__03aalu_ops__Vclpkg::~Vtop_types_pkg__03a__03aalu_ops__Vclpkg() = default;

void Vtop_types_pkg__03a__03aalu_ops__Vclpkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_types_pkg__03a__03aalu_ops__Vclpkg___ctor_var_reset(this);
}

void Vtop_types_pkg__03a__03aalu_ops__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_types_pkg__03a__03aalu_ops__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
