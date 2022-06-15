// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPixelSolverMultiCore.h for the primary calling header

#include "verilated.h"

#include "VPixelSolverMultiCore___024root.h"

VL_INLINE_OPT void VPixelSolverMultiCore___024root___sequent__TOP__1(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rData_iteration 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rData_iteration 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rData_iteration 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rData_iteration 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rData_iteration 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rData_iteration 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rData_iteration 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rData_iteration 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration;
    }
}

VL_INLINE_OPT void VPixelSolverMultiCore___024root___sequent__TOP__3(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration;
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration;
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration;
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration;
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration;
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration;
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration;
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration;
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid = 0U;
        vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration = 0U;
        vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration = 0U;
        vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration = 0U;
        vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration = 0U;
        vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration = 0U;
        vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration = 0U;
        vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration = 0U;
        vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y = 0U;
    } else {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_valid;
        }
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_valid;
        }
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_valid;
        }
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_valid;
        }
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_valid;
        }
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_valid;
        }
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_valid;
        }
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_valid;
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready) {
                    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration = 0U;
                }
            } else {
                vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration)));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready) {
                    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration = 0U;
                }
            } else {
                vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration)));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready) {
                    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration = 0U;
                }
            } else {
                vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration)));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready) {
                    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration = 0U;
                }
            } else {
                vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration)));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready) {
                    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration = 0U;
                }
            } else {
                vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration)));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready) {
                    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration = 0U;
                }
            } else {
                vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration)));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready) {
                    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration = 0U;
                }
            } else {
                vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration)));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready) {
                    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration = 0U;
                }
            } else {
                vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration)));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y 
                    = (0xfffffffU & (IData)((0x1fffffffffULL 
                                             & ((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__xy 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_y)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_y)) 
                                                        << 0x13U)))) 
                                                >> 0x13U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y 
                    = (0xfffffffU & (IData)((0x1fffffffffULL 
                                             & ((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__xy 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_y)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_y)) 
                                                        << 0x13U)))) 
                                                >> 0x13U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y 
                    = (0xfffffffU & (IData)((0x1fffffffffULL 
                                             & ((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__xy 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_y)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_y)) 
                                                        << 0x13U)))) 
                                                >> 0x13U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y 
                    = (0xfffffffU & (IData)((0x1fffffffffULL 
                                             & ((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__xy 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_y)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_y)) 
                                                        << 0x13U)))) 
                                                >> 0x13U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y 
                    = (0xfffffffU & (IData)((0x1fffffffffULL 
                                             & ((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__xy 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_y)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_y)) 
                                                        << 0x13U)))) 
                                                >> 0x13U))));
            }
        }
    }
}

VL_INLINE_OPT void VPixelSolverMultiCore___024root___sequent__TOP__4(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x = 0U;
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x = 0U;
        vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5 = 0U;
    } else {
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y 
                    = (0xfffffffU & (IData)((0x1fffffffffULL 
                                             & ((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__xy 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_y)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_y)) 
                                                        << 0x13U)))) 
                                                >> 0x13U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y 
                    = (0xfffffffU & (IData)((0x1fffffffffULL 
                                             & ((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__xy 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_y)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_y)) 
                                                        << 0x13U)))) 
                                                >> 0x13U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y 
                    = (0xfffffffU & (IData)((0x1fffffffffULL 
                                             & ((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__xy 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0x1ffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_y)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x2fU) 
                                                  | (0x7fffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_y)) 
                                                        << 0x13U)))) 
                                                >> 0x13U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x 
                    = (0xfffffffU & (IData)((0xfffffffffULL 
                                             & (((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__xx 
                                                  - vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__yy) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_x)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_x)) 
                                                        << 0x14U)))) 
                                                >> 0x14U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x 
                    = (0xfffffffU & (IData)((0xfffffffffULL 
                                             & (((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__xx 
                                                  - vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__yy) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_x)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_x)) 
                                                        << 0x14U)))) 
                                                >> 0x14U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x 
                    = (0xfffffffU & (IData)((0xfffffffffULL 
                                             & (((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__xx 
                                                  - vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__yy) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_x)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_x)) 
                                                        << 0x14U)))) 
                                                >> 0x14U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x 
                    = (0xfffffffU & (IData)((0xfffffffffULL 
                                             & (((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__xx 
                                                  - vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__yy) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_x)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_x)) 
                                                        << 0x14U)))) 
                                                >> 0x14U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x 
                    = (0xfffffffU & (IData)((0xfffffffffULL 
                                             & (((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__xx 
                                                  - vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__yy) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_x)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_x)) 
                                                        << 0x14U)))) 
                                                >> 0x14U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x 
                    = (0xfffffffU & (IData)((0xfffffffffULL 
                                             & (((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__xx 
                                                  - vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__yy) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_x)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_x)) 
                                                        << 0x14U)))) 
                                                >> 0x14U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x 
                    = (0xfffffffU & (IData)((0xfffffffffULL 
                                             & (((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__xx 
                                                  - vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__yy) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_x)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_x)) 
                                                        << 0x14U)))) 
                                                >> 0x14U))));
            }
        }
        if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__when_PixelSolver_l46) {
                if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready) {
                    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x = 0U;
                }
            } else {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x 
                    = (0xfffffffU & (IData)((0xfffffffffULL 
                                             & (((vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__xx 
                                                  - vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__yy) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_x)) 
                                                                                >> 0x1bU))))))))) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & ((QData)((IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_x)) 
                                                        << 0x14U)))) 
                                                >> 0x14U))));
            }
        }
        vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5 
            = vlSelf->PixelSolverMultiCore__DOT___zz_io_select_4;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration 
        = vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration;
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration 
        = vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration;
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration 
        = vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration;
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration 
        = vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration;
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration 
        = vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration;
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration 
        = vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration;
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration 
        = vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration;
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration 
        = vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration;
}

VL_INLINE_OPT void VPixelSolverMultiCore___024root___sequent__TOP__5(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__x))));
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid = 0U;
    } else if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid 
            = ((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
               & (IData)(vlSelf->io_cmd_valid));
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__x))));
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid = 0U;
    } else if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid 
            = ((6U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
               & (IData)(vlSelf->io_cmd_valid));
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__x))));
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid = 0U;
    } else if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid 
            = ((5U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
               & (IData)(vlSelf->io_cmd_valid));
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__x))));
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid = 0U;
    } else if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid 
            = ((4U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
               & (IData)(vlSelf->io_cmd_valid));
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__x))));
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid = 0U;
    } else if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid 
            = ((3U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
               & (IData)(vlSelf->io_cmd_valid));
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__x))));
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid = 0U;
    } else if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid 
            = ((2U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
               & (IData)(vlSelf->io_cmd_valid));
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__x))));
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid = 0U;
    } else if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid 
            = ((1U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
               & (IData)(vlSelf->io_cmd_valid));
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__x))));
    if (vlSelf->reset) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid = 0U;
    } else if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid 
            = ((0U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2)) 
               & (IData)(vlSelf->io_cmd_valid));
    }
    if ((4U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))) {
        if ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))) {
            if ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))) {
                vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rData_iteration;
                vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid 
                    = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid;
            } else {
                vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rData_iteration;
                vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid 
                    = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid;
            }
        } else if ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))) {
            vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rData_iteration;
            vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid;
        } else {
            vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rData_iteration;
            vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid;
        }
    } else if ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))) {
        if ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))) {
            vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rData_iteration;
            vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid;
        } else {
            vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rData_iteration;
            vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid;
        }
    } else if ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5))) {
        vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rData_iteration;
        vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid;
    } else {
        vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rData_iteration;
        vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid 
            = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__xx 
                                                 + vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__xx 
                                                 + vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__xx 
                                                 + vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__xx 
                                                 + vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__xx 
                                                 + vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__xx 
                                                 + vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__xx 
                                                 + vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__when_PixelSolver_l46 
        = (VL_LTES_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                              & (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__xx 
                                                 + vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__yy))) 
           | (0xfU == (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__iteration)));
}

VL_INLINE_OPT void VPixelSolverMultiCore___024root___sequent__TOP__6(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->io_rsp_valid = vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid;
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__when_PixelSolver_l46) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_valid = 1U;
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__when_PixelSolver_l46) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_valid = 1U;
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__when_PixelSolver_l46) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_valid = 1U;
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__when_PixelSolver_l46) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_valid = 1U;
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__when_PixelSolver_l46) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_valid = 1U;
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__when_PixelSolver_l46) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_valid = 1U;
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__when_PixelSolver_l46) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_valid = 1U;
        }
    }
    vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_1));
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__when_PixelSolver_l46) {
            vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_valid = 1U;
        }
    }
}

VL_INLINE_OPT void VPixelSolverMultiCore___024root___sequent__TOP__9(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___sequent__TOP__9\n"); );
    // Body
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_y 
            = vlSelf->io_cmd_payload_y;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_y 
            = vlSelf->io_cmd_payload_y;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_y 
            = vlSelf->io_cmd_payload_y;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_y 
            = vlSelf->io_cmd_payload_y;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_y 
            = vlSelf->io_cmd_payload_y;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_y 
            = vlSelf->io_cmd_payload_y;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_y 
            = vlSelf->io_cmd_payload_y;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_y 
            = vlSelf->io_cmd_payload_y;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rData_x 
            = vlSelf->io_cmd_payload_x;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rData_x 
            = vlSelf->io_cmd_payload_x;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rData_x 
            = vlSelf->io_cmd_payload_x;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rData_x 
            = vlSelf->io_cmd_payload_x;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rData_x 
            = vlSelf->io_cmd_payload_x;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rData_x 
            = vlSelf->io_cmd_payload_x;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rData_x 
            = vlSelf->io_cmd_payload_x;
    }
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_ready) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rData_x 
            = vlSelf->io_cmd_payload_x;
    }
}

VL_INLINE_OPT void VPixelSolverMultiCore___024root___combo__TOP__10(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___combo__TOP__10\n"); );
    // Init
    CData/*0:0*/ PixelSolverMultiCore__DOT___zz_io_select;
    CData/*0:0*/ PixelSolverMultiCore__DOT___zz_io_select_3;
    // Body
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready 
        = ((0U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
           & (IData)(vlSelf->io_rsp_ready));
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready 
        = ((1U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
           & (IData)(vlSelf->io_rsp_ready));
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready 
        = ((2U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
           & (IData)(vlSelf->io_rsp_ready));
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready 
        = ((3U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
           & (IData)(vlSelf->io_rsp_ready));
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready 
        = ((4U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
           & (IData)(vlSelf->io_rsp_ready));
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready 
        = ((5U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
           & (IData)(vlSelf->io_rsp_ready));
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready 
        = ((6U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
           & (IData)(vlSelf->io_rsp_ready));
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready 
        = ((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5)) 
           & (IData)(vlSelf->io_rsp_ready));
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready = 1U;
    }
    PixelSolverMultiCore__DOT___zz_io_select_3 = 0U;
    if (((IData)(vlSelf->PixelSolverMultiCore__DOT__streamMux_1__DOT___zz_io_output_valid) 
         & (IData)(vlSelf->io_rsp_ready))) {
        PixelSolverMultiCore__DOT___zz_io_select_3 = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_cmd_ready = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__when_PixelSolver_l46) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_cmd_ready = 1U;
            }
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_cmd_ready = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__when_PixelSolver_l46) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_cmd_ready = 1U;
            }
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_cmd_ready = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__when_PixelSolver_l46) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_cmd_ready = 1U;
            }
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_cmd_ready = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__when_PixelSolver_l46) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_cmd_ready = 1U;
            }
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_cmd_ready = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__when_PixelSolver_l46) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_cmd_ready = 1U;
            }
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_cmd_ready = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__when_PixelSolver_l46) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_cmd_ready = 1U;
            }
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_cmd_ready = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__when_PixelSolver_l46) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_cmd_ready = 1U;
            }
        }
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_cmd_ready = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid) {
        if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__when_PixelSolver_l46) {
            if (vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_cmd_ready = 1U;
            }
        }
    }
    vlSelf->PixelSolverMultiCore__DOT___zz_io_select_4 
        = (7U & ((IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_5) 
                 + (IData)(PixelSolverMultiCore__DOT___zz_io_select_3)));
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready = 0U;
    if ((0U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready 
            = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_0_ready;
    }
    if ((1U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready 
            = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_1_ready;
    }
    if ((2U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready 
            = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_2_ready;
    }
    if ((3U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready 
            = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_3_ready;
    }
    if ((4U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready 
            = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_4_ready;
    }
    if ((5U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready 
            = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_5_ready;
    }
    if ((6U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready 
            = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_6_ready;
    }
    if ((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2))) {
        vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready 
            = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_outputs_7_ready;
    }
    vlSelf->io_cmd_ready = vlSelf->PixelSolverMultiCore__DOT__streamDemux_1_io_input_ready;
    PixelSolverMultiCore__DOT___zz_io_select = 0U;
    if (((IData)(vlSelf->io_cmd_valid) & (IData)(vlSelf->io_cmd_ready))) {
        PixelSolverMultiCore__DOT___zz_io_select = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT___zz_io_select_1 
        = (7U & ((IData)(vlSelf->PixelSolverMultiCore__DOT___zz_io_select_2) 
                 + (IData)(PixelSolverMultiCore__DOT___zz_io_select)));
}

void VPixelSolverMultiCore___024root___eval(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VPixelSolverMultiCore___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VPixelSolverMultiCore___024root___sequent__TOP__3(vlSelf);
        VPixelSolverMultiCore___024root___sequent__TOP__4(vlSelf);
        VPixelSolverMultiCore___024root___sequent__TOP__5(vlSelf);
        VPixelSolverMultiCore___024root___sequent__TOP__6(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VPixelSolverMultiCore___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    VPixelSolverMultiCore___024root___combo__TOP__10(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void VPixelSolverMultiCore___024root___eval_debug_assertions(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___eval_debug_assertions\n"); );
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
