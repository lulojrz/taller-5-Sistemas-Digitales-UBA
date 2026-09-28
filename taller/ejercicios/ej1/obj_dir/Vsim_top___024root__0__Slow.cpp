// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"

void Vsim_top___024root___timing_ready(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_static(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_static\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__rst__0 
        = vlSelfRef.sim_top__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__tb__DOT__button__0 
        = vlSelfRef.sim_top__DOT__tb__DOT__button;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
        = vlSelfRef.sim_top__DOT__done;
    vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1 = (1U & 
                                              (~ (IData)(vlSelfRef.sim_top__DOT__rst)));
    Vsim_top___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vsim_top___024root___eval_final(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_final\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsim_top___024root___eval_settle(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_settle\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vsim_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sim_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge sim_top.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge sim_top.tb.button)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( sim_top.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( (~ sim_top.rst))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge sim_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_top___024root___ctor_var_reset(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___ctor_var_reset\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->sim_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3530725056373553288ull);
    vlSelf->sim_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11400418036824371223ull);
    vlSelf->sim_top__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3402611505963488124ull);
    vlSelf->sim_top__DOT__pass_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 753177774469670543ull);
    vlSelf->sim_top__DOT__tb__DOT__button = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2965417670415025678ull);
    vlSelf->sim_top__DOT__tb__DOT__nfail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3770900744349794232ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__button_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9991086737278683136ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9537637209420585906ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__tb__DOT__button__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__done__0 = 0;
    vlSelf->__Vtrigprevexpr_h5b83a2b0__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
