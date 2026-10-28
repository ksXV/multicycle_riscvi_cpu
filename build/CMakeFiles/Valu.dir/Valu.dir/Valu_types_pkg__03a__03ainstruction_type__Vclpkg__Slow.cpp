// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

void Valu_types_pkg__03a__03ainstruction_type__Vclpkg___ctor_var_reset(Valu_types_pkg__03a__03ainstruction_type__Vclpkg* vlSelf);

Valu_types_pkg__03a__03ainstruction_type__Vclpkg::Valu_types_pkg__03a__03ainstruction_type__Vclpkg() = default;
Valu_types_pkg__03a__03ainstruction_type__Vclpkg::~Valu_types_pkg__03a__03ainstruction_type__Vclpkg() = default;

void Valu_types_pkg__03a__03ainstruction_type__Vclpkg::ctor(Valu__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Valu_types_pkg__03a__03ainstruction_type__Vclpkg___ctor_var_reset(this);
}

void Valu_types_pkg__03a__03ainstruction_type__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Valu_types_pkg__03a__03ainstruction_type__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
