// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM_BCAM.h"
#include "VBCAM__Syms.h"

VL_ATTR_COLD void VBCAM_BCAM___settle__TOP__BCAM__6(VBCAM_BCAM* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBCAM_BCAM___settle__TOP__BCAM__6\n"); );
    // Init
    CData/*0:0*/ __PVT___zz_io_mAddrStream_payload_mAddr_1;
    CData/*1:0*/ __PVT___zz_MaskingControl;
    // Body
    vlSelf->__PVT___zz_SegRAM_port_2 = ((IData)(vlSelf->SegWr) 
                                        & (IData)(vlSelf->__PVT__continueWr));
    vlSelf->halfRateMPatt_payload_mPatt = vlSelf->__PVT__io_mPattStream_rData_mPatt;
    vlSelf->mIndcStream_payload = (((IData)(vlSelf->__PVT___zz_STiRAMsymbol_read_3) 
                                    << 3U) | (((IData)(vlSelf->__PVT___zz_STiRAMsymbol_read_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT___zz_STiRAMsymbol_read_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT___zz_STiRAMsymbol_read))));
    vlSelf->__PVT___zz_SegRAM_port0 = (((IData)(vlSelf->__PVT___zz_SegRAMsymbol_read_1) 
                                        << 2U) | (IData)(vlSelf->__PVT___zz_SegRAMsymbol_read));
    vlSelf->RDataForWrite = (((IData)(vlSelf->__PVT___zz_SegRAMsymbol_read_3) 
                              << 2U) | (IData)(vlSelf->__PVT___zz_SegRAMsymbol_read_2));
    vlSelf->mIndcStream_valid = vlSelf->__PVT___zz_mIndcStream_valid;
    vlSelf->halfRateMPatt_valid = vlSelf->__PVT__io_mPattStream_rValid;
    vlSelf->STiWMask = (0xfU & ((IData)(1U) << (3U 
                                                & ((IData)(vlSelf->__PVT__io_wStream_rData_wAddr) 
                                                   >> 1U))));
    vlSelf->mIndcStream_ready = vlSymsp->TOP.io_mAddrStream_ready;
    if ((1U & (~ (IData)(vlSelf->__PVT__mIndcStream_rValid)))) {
        vlSelf->mIndcStream_ready = 1U;
    }
    vlSelf->RegWMask = (3U & ((IData)(1U) << (1U & (IData)(vlSelf->__PVT__io_wStream_rData_wAddr))));
    vlSelf->__PVT__halfRateWStream_fire = vlSelf->__PVT__io_wStream_rValid;
    vlSelf->__PVT___zz_STiRAM_port_1 = (((IData)(vlSelf->STiWr) 
                                         & (IData)(vlSelf->__PVT__io_wStream_rData_wr)) 
                                        & (IData)(vlSelf->__PVT__io_wStream_rValid));
    vlSelf->__PVT___zz_RDataForWrite_1 = (((~ (IData)(vlSelf->SegWr)) 
                                           & (IData)(vlSelf->__PVT__io_wStream_rData_wr)) 
                                          & (IData)(vlSelf->__PVT__io_wStream_rValid));
    vlSelf->mPattTwoPipe_0 = vlSelf->halfRateMPatt_payload_mPatt;
    vlSelf->__PVT__mIndcStream_payload_ohFirst_masked 
        = ((IData)(vlSelf->mIndcStream_payload) & (~ 
                                                   ((IData)(vlSelf->mIndcStream_payload) 
                                                    - (IData)(1U))));
    vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr = 0U;
    if (((3U & (IData)(vlSelf->__PVT___zz_SegRAM_port0)) 
         == (IData)(vlSelf->mPattTwoPipe_2))) {
        vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr = 1U;
    }
    __PVT___zz_io_mAddrStream_payload_mAddr_1 = 0U;
    if (((3U & ((IData)(vlSelf->__PVT___zz_SegRAM_port0) 
                >> 2U)) == (IData)(vlSelf->mPattTwoPipe_2))) {
        __PVT___zz_io_mAddrStream_payload_mAddr_1 = 1U;
    }
    vlSelf->PattToRmMuxOutput = (3U & ((1U & (IData)(vlSelf->__PVT__io_wStream_rData_wAddr))
                                        ? ((IData)(vlSelf->RDataForWrite) 
                                           >> 2U) : (IData)(vlSelf->RDataForWrite)));
    vlSelf->__PVT__mIndcStream_fire_1 = ((IData)(vlSelf->mIndcStream_valid) 
                                         & (IData)(vlSelf->mIndcStream_ready));
    vlSelf->__PVT__mIndcStream_isFree = (1U & ((~ (IData)(vlSelf->mIndcStream_valid)) 
                                               | (IData)(vlSelf->mIndcStream_ready)));
    vlSelf->SegAddr = (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__mIndcStream_payload_ohFirst_masked)))) 
                        << 1U) | (IData)((0U != (0xaU 
                                                 & (IData)(vlSelf->__PVT__mIndcStream_payload_ohFirst_masked)))));
    vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr_2 
        = (((IData)(__PVT___zz_io_mAddrStream_payload_mAddr_1) 
            << 1U) | (IData)(vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr));
    vlSelf->STiWPatt = ((IData)(vlSelf->STiWr) ? (IData)(vlSelf->__PVT__io_wStream_rData_wPatt)
                         : (IData)(vlSelf->PattToRmMuxOutput));
    vlSelf->ocurrIndcResults_0 = 0U;
    if (((3U & (IData)(vlSelf->RDataForWrite)) == (IData)(vlSelf->PattToRmMuxOutput))) {
        vlSelf->ocurrIndcResults_0 = 1U;
    }
    vlSelf->ocurrIndcResults_1 = 0U;
    if (((3U & ((IData)(vlSelf->RDataForWrite) >> 2U)) 
         == (IData)(vlSelf->PattToRmMuxOutput))) {
        vlSelf->ocurrIndcResults_1 = 1U;
    }
    vlSelf->halfRateMPatt_ready = vlSelf->__PVT__mIndcStream_isFree;
    __PVT___zz_MaskingControl = ((((IData)(vlSelf->ocurrIndcResults_1) 
                                   << 1U) | (IData)(vlSelf->ocurrIndcResults_0)) 
                                 & (~ (IData)(vlSelf->RegWMask)));
    vlSelf->MaskingControl = (IData)((0U != (IData)(__PVT___zz_MaskingControl)));
    vlSelf->notErase = ((IData)(vlSelf->MaskingControl) 
                        | (IData)(vlSelf->STiWr));
    vlSelf->__PVT___zz_STiRAM_port_3 = ((~ (IData)(vlSelf->notErase)) 
                                        & (IData)(vlSelf->__PVT__continueWr));
}
