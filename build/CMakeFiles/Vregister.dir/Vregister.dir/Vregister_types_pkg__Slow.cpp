// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "Vregister__pch.h"

void Vregister_types_pkg___ctor_var_reset(Vregister_types_pkg* vlSelf);

Vregister_types_pkg::Vregister_types_pkg() = default;
Vregister_types_pkg::~Vregister_types_pkg() = default;

void Vregister_types_pkg::ctor(Vregister__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vregister_types_pkg___ctor_var_reset(this);
}

void Vregister_types_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vregister_types_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
