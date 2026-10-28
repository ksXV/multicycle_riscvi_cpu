// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "Vregister__pch.h"

void Vregister_types_pkg__03a__03afunctions_3__Vclpkg___ctor_var_reset(Vregister_types_pkg__03a__03afunctions_3__Vclpkg* vlSelf);

Vregister_types_pkg__03a__03afunctions_3__Vclpkg::Vregister_types_pkg__03a__03afunctions_3__Vclpkg() = default;
Vregister_types_pkg__03a__03afunctions_3__Vclpkg::~Vregister_types_pkg__03a__03afunctions_3__Vclpkg() = default;

void Vregister_types_pkg__03a__03afunctions_3__Vclpkg::ctor(Vregister__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vregister_types_pkg__03a__03afunctions_3__Vclpkg___ctor_var_reset(this);
}

void Vregister_types_pkg__03a__03afunctions_3__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vregister_types_pkg__03a__03afunctions_3__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
