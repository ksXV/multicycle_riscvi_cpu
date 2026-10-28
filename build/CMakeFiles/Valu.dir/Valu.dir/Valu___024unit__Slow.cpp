// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

void Valu___024unit___ctor_var_reset(Valu___024unit* vlSelf);

Valu___024unit::Valu___024unit() = default;
Valu___024unit::~Valu___024unit() = default;

void Valu___024unit::ctor(Valu__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Valu___024unit___ctor_var_reset(this);
}

void Valu___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Valu___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
