// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPixelSolver.h for the primary calling header

#include "verilated.h"

#include "VPixelSolver___024root.h"

VL_ATTR_COLD void VPixelSolver___024root___settle__TOP__2(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolver__DOT__iteration;
    vlSelf->PixelSolver__DOT__xy = (0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__y))));
    vlSelf->PixelSolver__DOT__xx = (0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__x))));
    vlSelf->PixelSolver__DOT__yy = (0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__y)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__y))));
    vlSelf->PixelSolver__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolver__DOT__xx 
                                                 + vlSelf->PixelSolver__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolver__DOT__iteration)));
    vlSelf->io_rsp_valid = 0U;
    if (vlSelf->io_cmd_valid) {
        if (vlSelf->PixelSolver__DOT__when_PixelSolver_l46) {
            vlSelf->io_rsp_valid = 1U;
            vlSelf->io_cmd_ready = 0U;
            if (vlSelf->io_rsp_ready) {
                vlSelf->io_cmd_ready = 1U;
            }
        } else {
            vlSelf->io_cmd_ready = 0U;
        }
    } else {
        vlSelf->io_cmd_ready = 0U;
    }
}

VL_ATTR_COLD void VPixelSolver___024root___eval_initial(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
}

VL_ATTR_COLD void VPixelSolver___024root___eval_settle(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___eval_settle\n"); );
    // Body
    VPixelSolver___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VPixelSolver___024root___final(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___final\n"); );
}

VL_ATTR_COLD void VPixelSolver___024root___ctor_var_reset(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->io_cmd_payload_x = VL_RAND_RESET_I(28);
    vlSelf->io_cmd_payload_y = VL_RAND_RESET_I(28);
    vlSelf->io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_payload_iteration = VL_RAND_RESET_I(4);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->PixelSolver__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolver__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolver__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolver__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolver__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolver__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolver__DOT__when_PixelSolver_l46 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
