// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPixelSolver.h for the primary calling header

#include "verilated.h"

#include "VPixelSolver___024root.h"

VL_INLINE_OPT void VPixelSolver___024root___sequent__TOP__1(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdly__PixelSolver__DOT__iteration;
    // Body
    __Vdly__PixelSolver__DOT__iteration = vlSelf->PixelSolver__DOT__iteration;
    if (vlSelf->reset) {
        __Vdly__PixelSolver__DOT__iteration = 0U;
        vlSelf->PixelSolver__DOT__y = 0U;
        vlSelf->PixelSolver__DOT__x = 0U;
    } else if (vlSelf->io_cmd_valid) {
        if (vlSelf->PixelSolver__DOT__when_PixelSolver_l46) {
            if (vlSelf->io_rsp_ready) {
                __Vdly__PixelSolver__DOT__iteration = 0U;
                vlSelf->PixelSolver__DOT__y = 0U;
                vlSelf->PixelSolver__DOT__x = 0U;
            }
        } else {
            __Vdly__PixelSolver__DOT__iteration = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->PixelSolver__DOT__iteration)));
            vlSelf->PixelSolver__DOT__y = (0xfffffffU 
                                           & (IData)(
                                                     (0x1fffffffffULL 
                                                      & ((vlSelf->PixelSolver__DOT__xy 
                                                          + 
                                                          (((QData)((IData)(
                                                                            (0x1ffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->io_cmd_payload_y)) 
                                                                                >> 0x1bU))))))))) 
                                                            << 0x2fU) 
                                                           | (0x7fffffffffffULL 
                                                              & ((QData)((IData)(vlSelf->io_cmd_payload_y)) 
                                                                 << 0x13U)))) 
                                                         >> 0x13U))));
            vlSelf->PixelSolver__DOT__x = (0xfffffffU 
                                           & (IData)(
                                                     (0xfffffffffULL 
                                                      & (((vlSelf->PixelSolver__DOT__xx 
                                                           - vlSelf->PixelSolver__DOT__yy) 
                                                          + 
                                                          (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->io_cmd_payload_x)) 
                                                                                >> 0x1bU))))))))) 
                                                            << 0x30U) 
                                                           | (0xffffffffffffULL 
                                                              & ((QData)((IData)(vlSelf->io_cmd_payload_x)) 
                                                                 << 0x14U)))) 
                                                         >> 0x14U))));
        }
    }
    vlSelf->PixelSolver__DOT__iteration = __Vdly__PixelSolver__DOT__iteration;
    vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolver__DOT__iteration;
    vlSelf->PixelSolver__DOT__yy = (0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__y)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolver__DOT__y))));
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
    vlSelf->PixelSolver__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolver__DOT__xx 
                                                 + vlSelf->PixelSolver__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolver__DOT__iteration)));
}

VL_INLINE_OPT void VPixelSolver___024root___combo__TOP__3(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___combo__TOP__3\n"); );
    // Body
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

void VPixelSolver___024root___eval(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VPixelSolver___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VPixelSolver___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void VPixelSolver___024root___eval_debug_assertions(VPixelSolver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolver___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_cmd_valid & 0xfeU))) {
        Verilated::overWidthError("io_cmd_valid");}
    if (VL_UNLIKELY((vlSelf->io_cmd_payload_x & 0xf0000000U))) {
        Verilated::overWidthError("io_cmd_payload_x");}
    if (VL_UNLIKELY((vlSelf->io_cmd_payload_y & 0xf0000000U))) {
        Verilated::overWidthError("io_cmd_payload_y");}
    if (VL_UNLIKELY((vlSelf->io_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("io_rsp_ready");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
