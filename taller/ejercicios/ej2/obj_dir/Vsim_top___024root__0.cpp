// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__0(Vsim_top___024root* vlSelf);
VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__1(Vsim_top___024root* vlSelf);
VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__2(Vsim_top___024root* vlSelf);

void Vsim_top___024root___eval_initial(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.sim_top__DOT__clk = 0U;
    }
    Vsim_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsim_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vsim_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vsim_top___024root____VbeforeTrig_hffd278f5__0(Vsim_top___024root* vlSelf, const char* __VeventDescription);
void Vsim_top___024root____VbeforeTrig_hde298250__0(Vsim_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__0(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0;
    sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1;
    sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("obj_dir/sim.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.sim_top__DOT__rst = 1U;
    sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                       "@(posedge sim_top.clk)");
        co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sim_top.clk)", 
                                                             "/workspaces/taller/ejercicios/lib/sim_top.sv", 
                                                             12);
        sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.sim_top__DOT__rst = 0U;
    while ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__done)))) {
        Vsim_top___024root____VbeforeTrig_hde298250__0(vlSelf, 
                                                       "@( sim_top.done)");
        co_await vlSelfRef.__VtrigSched_hde298250__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( sim_top.done)", 
                                                             "/workspaces/taller/ejercicios/lib/sim_top.sv", 
                                                             14);
    }
    sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                       "@(posedge sim_top.clk)");
        co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sim_top.clk)", 
                                                             "/workspaces/taller/ejercicios/lib/sim_top.sv", 
                                                             15);
        sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.sim_top__DOT__pass_all)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: sim_top.sv:16: Assertion failed in %m: Hubo tests que fallaron\n",3, 'M',vlSymsp->name(),"sim_top", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("/workspaces/taller/ejercicios/lib/sim_top.sv", 16, "", false);
    }
    VL_FINISH_MT("/workspaces/taller/ejercicios/lib/sim_top.sv", 17, "");
    co_return;
}

void Vsim_top___024root____VbeforeTrig_hcb33f8c5__0(Vsim_top___024root* vlSelf, const char* __VeventDescription);
void Vsim_top___024root____VbeforeTrig_hffd279b4__0(Vsim_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__1(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__0__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__0__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__0__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__0__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__12__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__12__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__12__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__12__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__19__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__19__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__19__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__19__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__23__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__23__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__23__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__23__exp = 0;
    // Body
    vlSelfRef.sim_top__DOT__done = 0U;
    vlSelfRef.sim_top__DOT__pass_all = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__nfail = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__button = 0U;
    while (vlSelfRef.sim_top__DOT__rst) {
        Vsim_top___024root____VbeforeTrig_hcb33f8c5__0(vlSelf, 
                                                       "@( (~ sim_top.rst))");
        co_await vlSelfRef.__VtrigSched_hcb33f8c5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ sim_top.rst))", 
                                                             "porton_ej2_tb.sv", 
                                                             10);
    }
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "porton_ej2_tb.sv", 
                                                         10);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__0__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__0__got 
        = (0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__0__tag = "cerrado al reset"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__0__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__0__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__0__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__0__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__0__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__0__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__0__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__0__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag = "posici\303\263n cero"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag));
    }
    vlSelfRef.sim_top__DOT__tb__DOT__button = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "porton_ej2_tb.sv", 
                                         7);
    vlSelfRef.sim_top__DOT__tb__DOT__button = 0U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got 
        = (1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag = "orden abrir"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag));
    }
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__tag = "posici\303\263n 1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__tag));
    }
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp = 2U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__tag = "posici\303\263n 2"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__tag));
    }
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp = 3U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__tag = "posici\303\263n 3"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__tag));
    }
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__12__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__12__got 
        = (2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__12__tag = "estado abierto"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__12__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__12__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__12__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__12__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__12__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__12__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__12__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__12__tag));
    }
    vlSelfRef.sim_top__DOT__tb__DOT__button = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "porton_ej2_tb.sv", 
                                         7);
    vlSelfRef.sim_top__DOT__tb__DOT__button = 0U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got 
        = (3U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag = "orden cerrar"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag));
    }
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp = 2U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__tag = "posici\303\263n 2 cerrando"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__tag));
    }
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__19__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__19__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__19__tag = "posici\303\263n 1 cerrando"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__19__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__19__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__19__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__19__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__19__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__19__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__19__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__19__tag));
    }
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__tag = "posici\303\263n 0"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__tag));
    }
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/taller/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__23__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__23__got 
        = (0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__23__tag = "estado cerrado"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__23__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__23__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__23__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__23__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__23__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__23__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__23__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__23__tag));
    }
    vlSelfRef.sim_top__DOT__pass_all = (0U == vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    vlSelfRef.sim_top__DOT__done = 1U;
    co_return;
}

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__2(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "/workspaces/taller/ejercicios/lib/sim_top.sv", 
                                             7);
        vlSelfRef.sim_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.sim_top__DOT__clk)));
    }
    co_return;
}

bool Vsim_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vsim_top___024root___timing_ready(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___timing_ready\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hffd278f5__0.ready("@(posedge sim_top.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hde298250__0.ready("@( sim_top.done)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcb33f8c5__0.ready("@( (~ sim_top.rst))");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hffd279b4__0.ready("@(negedge sim_top.clk)");
    }
}

void Vsim_top___024root___timing_resume(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___timing_resume\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hffd278f5__0.moveToResumeQueue(
                                                          "@(posedge sim_top.clk)");
    vlSelfRef.__VtrigSched_hde298250__0.moveToResumeQueue(
                                                          "@( sim_top.done)");
    vlSelfRef.__VtrigSched_hcb33f8c5__0.moveToResumeQueue(
                                                          "@( (~ sim_top.rst))");
    vlSelfRef.__VtrigSched_hffd279b4__0.moveToResumeQueue(
                                                          "@(negedge sim_top.clk)");
    vlSelfRef.__VtrigSched_hffd278f5__0.resume("@(posedge sim_top.clk)");
    vlSelfRef.__VtrigSched_hde298250__0.resume("@( sim_top.done)");
    vlSelfRef.__VtrigSched_hcb33f8c5__0.resume("@( (~ sim_top.rst))");
    vlSelfRef.__VtrigSched_hffd279b4__0.resume("@(negedge sim_top.clk)");
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsim_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vsim_top___024root___eval_phase__act(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__act\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0 
            = (1U & (~ (IData)(vlSelfRef.sim_top__DOT__rst)));
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 6U) 
                                                          | ((((~ (IData)(vlSelfRef.sim_top__DOT__clk)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0)) 
                                                              << 5U) 
                                                             | ((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1)) 
                                                                << 4U))) 
                                                         | (((((IData)(vlSelfRef.sim_top__DOT__done) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__button) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__tb__DOT__button__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.sim_top__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__rst__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.sim_top__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
            = vlSelfRef.sim_top__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__rst__0 
            = vlSelfRef.sim_top__DOT__rst;
        vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__tb__DOT__button__0 
            = vlSelfRef.sim_top__DOT__tb__DOT__button;
        vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
            = vlSelfRef.sim_top__DOT__done;
        vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0;
    }
    Vsim_top___024root___timing_ready(vlSelf);
    Vsim_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsim_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsim_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vsim_top___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vsim_top___024root___eval_phase__inact(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__inact\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/workspaces/taller/ejercicios/lib/sim_top.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vsim_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

extern const VlUnpacked<CData/*1:0*/, 32> Vsim_top__ConstPool__TABLE_h7a1c620d_0;

bool Vsim_top___024root___eval_phase__nba(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__nba\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsim_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*1:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__sim_top__DOT__tb__DOT__dut__DOT__posicion;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__sim_top__DOT__tb__DOT__dut__DOT__posicion = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__sim_top__DOT__tb__DOT__dut__DOT__posicion 
                        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion;
                    if (vlSelfRef.sim_top__DOT__rst) {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__sim_top__DOT__tb__DOT__dut__DOT__posicion = 0U;
                        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state = 0U;
                    } else {
                        if (((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state)) 
                             & (3U > (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion)))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__sim_top__DOT__tb__DOT__dut__DOT__posicion 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion)));
                        } else if (((3U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state)) 
                                    & (0U < (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion)))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__sim_top__DOT__tb__DOT__dut__DOT__posicion 
                                = (3U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion) 
                                         - (IData)(1U)));
                        }
                        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state 
                            = Vsim_top__ConstPool__TABLE_h7a1c620d_0
                            [(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__button_q) 
                               << 4U) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion) 
                                          << 2U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__controlador__DOT__current_state)))];
                    }
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__posicion 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__sim_top__DOT__tb__DOT__dut__DOT__posicion;
                }
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
            if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__button_q 
                        = vlSelfRef.sim_top__DOT__tb__DOT__button;
                }
            }
        }
        Vsim_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsim_top___024root___eval(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsim_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/workspaces/taller/ejercicios/lib/sim_top.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/workspaces/taller/ejercicios/lib/sim_top.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vsim_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/workspaces/taller/ejercicios/lib/sim_top.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vsim_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vsim_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vsim_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vsim_top___024root____VbeforeTrig_hffd278f5__0(Vsim_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root____VbeforeTrig_hffd278f5__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.sim_top__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0)) 
                                   << 5U) | ((IData)(vlSelfRef.sim_top__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
    }
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vsim_top___024root____VbeforeTrig_hde298250__0(Vsim_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root____VbeforeTrig_hde298250__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.sim_top__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0)) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
        = vlSelfRef.sim_top__DOT__done;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hde298250__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vsim_top___024root____VbeforeTrig_hcb33f8c5__0(Vsim_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root____VbeforeTrig_hcb33f8c5__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h5b83a2b0__0;
    __Vtrigprevexpr_h5b83a2b0__0 = 0;
    // Body
    __Vtrigprevexpr_h5b83a2b0__0 = (1U & (~ (IData)(vlSelfRef.sim_top__DOT__rst)));
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h5b83a2b0__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1 = __Vtrigprevexpr_h5b83a2b0__0;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcb33f8c5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vsim_top___024root____VbeforeTrig_hffd279b4__0(Vsim_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root____VbeforeTrig_hffd279b4__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.sim_top__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0)) 
                                   << 5U) | ((IData)(vlSelfRef.sim_top__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
    }
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vsim_top___024root___eval_debug_assertions(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_debug_assertions\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
