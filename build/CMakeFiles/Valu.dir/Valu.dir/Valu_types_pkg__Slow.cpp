// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

void Valu_types_pkg___ctor_var_reset(Valu_types_pkg* vlSelf);

Valu_types_pkg::Valu_types_pkg() = default;
Valu_types_pkg::~Valu_types_pkg() = default;

void Valu_types_pkg::ctor(Valu__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Valu_types_pkg___ctor_var_reset(this);
}

void Valu_types_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Valu_types_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
