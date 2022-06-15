// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM_BCAM.h"

extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h0e59c6ce_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h22010237_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_hd8ffe9c2_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_hf5e2c6a3_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h19849693_0;
extern const VlWide<18>/*575:0*/ VBCAM__ConstPool__CONST_h568fb5a7_0;

VL_ATTR_COLD void VBCAM_BCAM___initial__TOP__BCAM__5(VBCAM_BCAM* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBCAM_BCAM___initial__TOP__BCAM__5\n"); );
    // Body
    VL_READMEM_N(false, 2, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h0e59c6ce_0)
                 ,  &(vlSelf->SegRAM_symbol0), 0, ~0ULL);
    VL_READMEM_N(false, 2, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h22010237_0)
                 ,  &(vlSelf->SegRAM_symbol1), 0, ~0ULL);
    VL_READMEM_N(false, 1, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_hd8ffe9c2_0)
                 ,  &(vlSelf->STiRAM_symbol0), 0, ~0ULL);
    VL_READMEM_N(false, 1, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_hf5e2c6a3_0)
                 ,  &(vlSelf->STiRAM_symbol1), 0, ~0ULL);
    VL_READMEM_N(false, 1, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h19849693_0)
                 ,  &(vlSelf->STiRAM_symbol2), 0, ~0ULL);
    VL_READMEM_N(false, 1, 4, 0, VL_CVT_PACK_STR_NW(18, VBCAM__ConstPool__CONST_h568fb5a7_0)
                 ,  &(vlSelf->STiRAM_symbol3), 0, ~0ULL);
}

VL_ATTR_COLD void VBCAM_BCAM___ctor_var_reset(VBCAM_BCAM* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBCAM_BCAM___ctor_var_reset\n"); );
    // Body
    vlSelf->io_wStream_valid = VL_RAND_RESET_I(1);
    vlSelf->io_wStream_ready = VL_RAND_RESET_I(1);
    vlSelf->io_wStream_payload_wAddr = VL_RAND_RESET_I(3);
    vlSelf->io_wStream_payload_wPatt = VL_RAND_RESET_I(2);
    vlSelf->io_wStream_payload_wr = VL_RAND_RESET_I(1);
    vlSelf->io_mPattStream_valid = VL_RAND_RESET_I(1);
    vlSelf->io_mPattStream_ready = VL_RAND_RESET_I(1);
    vlSelf->io_mPattStream_payload_mPatt = VL_RAND_RESET_I(2);
    vlSelf->io_mAddrStream_valid = VL_RAND_RESET_I(1);
    vlSelf->io_mAddrStream_ready = VL_RAND_RESET_I(1);
    vlSelf->io_mAddrStream_payload_mAddr = VL_RAND_RESET_I(3);
    vlSelf->io_mAddrStream_payload_matchFlag = VL_RAND_RESET_I(1);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->__PVT___zz_SegRAM_port0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___zz_STiRAM_port_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_STiRAM_port_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_SegRAM_port_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_wStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__halfRateWStream_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_wStream_rData_wAddr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_wStream_rData_wPatt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_wStream_rData_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__continueWr = VL_RAND_RESET_I(1);
    vlSelf->SegWr = VL_RAND_RESET_I(1);
    vlSelf->STiWr = VL_RAND_RESET_I(1);
    vlSelf->halfRateMPatt_valid = VL_RAND_RESET_I(1);
    vlSelf->halfRateMPatt_ready = VL_RAND_RESET_I(1);
    vlSelf->halfRateMPatt_payload_mPatt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_mPattStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_mPattStream_rData_mPatt = VL_RAND_RESET_I(2);
    vlSelf->mPattTwoPipe_0 = VL_RAND_RESET_I(2);
    vlSelf->mPattTwoPipe_1 = VL_RAND_RESET_I(2);
    vlSelf->mPattTwoPipe_2 = VL_RAND_RESET_I(2);
    vlSelf->mIndcStream_valid = VL_RAND_RESET_I(1);
    vlSelf->mIndcStream_ready = VL_RAND_RESET_I(1);
    vlSelf->mIndcStream_payload = VL_RAND_RESET_I(4);
    vlSelf->__PVT___zz_mIndcStream_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mIndcStream_isFree = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mIndcStream_payload_ohFirst_masked = VL_RAND_RESET_I(4);
    vlSelf->SegAddr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__SegAddr_regNext = VL_RAND_RESET_I(2);
    vlSelf->rMatch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mIndcStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mIndcStream_rData = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mIndcStream_fire_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr_2 = VL_RAND_RESET_I(2);
    vlSelf->STiWMask = VL_RAND_RESET_I(4);
    vlSelf->RegWMask = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_RDataForWrite_1 = VL_RAND_RESET_I(1);
    vlSelf->RDataForWrite = VL_RAND_RESET_I(4);
    vlSelf->PattToRmMuxOutput = VL_RAND_RESET_I(2);
    vlSelf->STiWPatt = VL_RAND_RESET_I(2);
    vlSelf->ocurrIndcResults_0 = VL_RAND_RESET_I(1);
    vlSelf->ocurrIndcResults_1 = VL_RAND_RESET_I(1);
    vlSelf->MaskingControl = VL_RAND_RESET_I(1);
    vlSelf->notErase = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->STiRAM_symbol0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->STiRAM_symbol1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->STiRAM_symbol2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->STiRAM_symbol3[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT___zz_STiRAMsymbol_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_STiRAMsymbol_read_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_STiRAMsymbol_read_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_STiRAMsymbol_read_3 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SegRAM_symbol0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SegRAM_symbol1[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT___zz_SegRAMsymbol_read = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_SegRAMsymbol_read_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_SegRAMsymbol_read_2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_SegRAMsymbol_read_3 = VL_RAND_RESET_I(2);
}
