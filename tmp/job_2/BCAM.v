// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : BCAM
// Git hash  : 5877b7d3b2efe562a8be9ec1a5d1d250c31f7010

`timescale 1ns/1ps

module BCAM (
  input               io_wStream_valid,
  output              io_wStream_ready,
  input      [2:0]    io_wStream_payload_wAddr,
  input      [1:0]    io_wStream_payload_wPatt,
  input               io_wStream_payload_wr,
  input               io_mPattStream_valid,
  output              io_mPattStream_ready,
  input      [1:0]    io_mPattStream_payload_mPatt,
  output              io_mAddrStream_valid,
  input               io_mAddrStream_ready,
  output     [2:0]    io_mAddrStream_payload_mAddr,
  output              io_mAddrStream_payload_matchFlag,
  input               clk,
  input               reset
);

  reg        [3:0]    _zz_STiRAM_port0;
  reg        [3:0]    _zz_SegRAM_port0;
  reg        [3:0]    _zz_SegRAM_port1;
  wire       [3:0]    _zz_mIndcStream_payload_ohFirst_masked;
  reg        [1:0]    _zz_when_BCAM_l125_1;
  wire       [1:0]    _zz_when_BCAM_l125_2;
  reg        [1:0]    _zz_when_BCAM_l125_1_1;
  wire       [1:0]    _zz_when_BCAM_l125_1_2;
  wire       [1:0]    _zz__zz_io_mAddrStream_payload_mAddr_3;
  wire       [1:0]    _zz__zz_io_mAddrStream_payload_mAddr_3_1;
  wire       [2:0]    _zz_PattToRmMuxOutput;
  wire       [3:0]    _zz_STiRAM_port;
  wire                _zz_STiRAM_port_1;
  wire       [3:0]    _zz_STiRAM_port_2;
  wire                _zz_STiRAM_port_3;
  wire       [1:0]    _zz_SegRAM_port;
  wire       [3:0]    _zz_SegRAM_port_1;
  wire                _zz_SegRAM_port_2;
  wire                halfRateWStream_valid;
  wire                halfRateWStream_ready;
  wire       [2:0]    halfRateWStream_payload_wAddr;
  wire       [1:0]    halfRateWStream_payload_wPatt;
  wire                halfRateWStream_payload_wr;
  reg                 io_wStream_rValid;
  wire                halfRateWStream_fire;
  reg        [2:0]    io_wStream_rData_wAddr;
  reg        [1:0]    io_wStream_rData_wPatt;
  reg                 io_wStream_rData_wr;
  reg                 continueWr;
  wire                halfRateWStream_fire_1;
  wire                halfRateWStream_fire_2;
  wire                when_BCAM_l57;
  reg                 SegWr /* verilator public */ ;
  reg                 STiWr /* verilator public */ ;
  wire                halfRateMPatt_valid /* verilator public */ ;
  wire                halfRateMPatt_ready /* verilator public */ ;
  wire       [1:0]    halfRateMPatt_payload_mPatt /* verilator public */ ;
  reg                 io_mPattStream_rValid;
  wire                halfRateMPatt_fire;
  reg        [1:0]    io_mPattStream_rData_mPatt;
  wire       [1:0]    mPattTwoPipe_0 /* verilator public */ ;
  reg        [1:0]    mPattTwoPipe_1 /* verilator public */ ;
  reg        [1:0]    mPattTwoPipe_2 /* verilator public */ ;
  wire                halfRateMPatt_translated_valid;
  wire                halfRateMPatt_translated_ready;
  wire       [1:0]    halfRateMPatt_translated_payload;
  wire                mIndcStream_valid /* verilator public */ ;
  reg                 mIndcStream_ready /* verilator public */ ;
  wire       [3:0]    mIndcStream_payload /* verilator public */ ;
  reg                 _zz_mIndcStream_valid;
  wire                mIndcStream_isFree;
  wire       [3:0]    mIndcStream_payload_ohFirst_input;
  wire       [3:0]    mIndcStream_payload_ohFirst_masked;
  wire       [3:0]    mIndcStream_payload_ohFirst_value;
  wire                _zz_SegAddr;
  wire                _zz_SegAddr_1;
  wire                _zz_SegAddr_2;
  wire       [1:0]    SegAddr /* verilator public */ ;
  reg        [1:0]    SegAddr_regNext;
  wire                mIndcStream_fire;
  reg                 rMatch /* verilator public */ ;
  wire                io_mAddrStream_fire;
  wire                mIndcStream_m2sPipe_valid;
  wire                mIndcStream_m2sPipe_ready;
  wire       [3:0]    mIndcStream_m2sPipe_payload;
  reg                 mIndcStream_rValid;
  reg        [3:0]    mIndcStream_rData;
  wire                when_Stream_l368;
  wire                mIndcStream_fire_1;
  wire       [3:0]    _zz_when_BCAM_l125;
  reg                 _zz_io_mAddrStream_payload_mAddr;
  reg                 _zz_io_mAddrStream_payload_mAddr_1;
  wire                when_BCAM_l125;
  wire                when_BCAM_l125_1;
  wire       [1:0]    _zz_io_mAddrStream_payload_mAddr_2;
  wire                _zz_io_mAddrStream_payload_mAddr_3;
  wire       [3:0]    STiWMask /* verilator public */ ;
  wire       [1:0]    RegWMask /* verilator public */ ;
  wire       [1:0]    _zz_RDataForWrite;
  wire                halfRateWStream_fire_3;
  wire                _zz_RDataForWrite_1;
  wire       [3:0]    RDataForWrite /* verilator public */ ;
  wire       [0:0]    switch_Misc_l211;
  reg        [1:0]    PattToRmMuxOutput /* verilator public */ ;
  wire       [1:0]    STiWPatt /* verilator public */ ;
  wire                halfRateWStream_fire_4;
  reg                 ocurrIndcResults_0 /* verilator public */ ;
  reg                 ocurrIndcResults_1 /* verilator public */ ;
  wire                when_BCAM_l159;
  wire                when_BCAM_l159_1;
  wire       [1:0]    _zz_MaskingControl;
  wire                MaskingControl /* verilator public */ ;
  wire                notErase /* verilator public */ ;
  wire                halfRateWStream_fire_5;
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol0 [0:3] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol1 [0:3] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol2 [0:3] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol3 [0:3] /* verilator public */ ;
  reg [0:0] _zz_STiRAMsymbol_read;
  reg [0:0] _zz_STiRAMsymbol_read_1;
  reg [0:0] _zz_STiRAMsymbol_read_2;
  reg [0:0] _zz_STiRAMsymbol_read_3;
  (* ram_style = "block" *) reg [1:0] SegRAM_symbol0 [0:3] /* verilator public */ ;
  (* ram_style = "block" *) reg [1:0] SegRAM_symbol1 [0:3] /* verilator public */ ;
  reg [1:0] _zz_SegRAMsymbol_read;
  reg [1:0] _zz_SegRAMsymbol_read_1;
  reg [1:0] _zz_SegRAMsymbol_read_2;
  reg [1:0] _zz_SegRAMsymbol_read_3;

  assign _zz_mIndcStream_payload_ohFirst_masked = (mIndcStream_payload_ohFirst_input - 4'b0001);
  assign _zz__zz_io_mAddrStream_payload_mAddr_3 = (_zz_io_mAddrStream_payload_mAddr_2 & (~ _zz__zz_io_mAddrStream_payload_mAddr_3_1));
  assign _zz__zz_io_mAddrStream_payload_mAddr_3_1 = (_zz_io_mAddrStream_payload_mAddr_2 - 2'b01);
  assign _zz_PattToRmMuxOutput = (1'b1 * 2'b10);
  assign _zz_STiRAM_port = 4'b1111;
  assign _zz_STiRAM_port_1 = ((STiWr && halfRateWStream_payload_wr) && halfRateWStream_fire_4);
  assign _zz_STiRAM_port_2 = 4'b0000;
  assign _zz_STiRAM_port_3 = ((! notErase) && continueWr);
  assign _zz_SegRAM_port = halfRateWStream_payload_wAddr[1'b1 +: 2];
  assign _zz_SegRAM_port_1 = {halfRateWStream_payload_wPatt,halfRateWStream_payload_wPatt};
  assign _zz_SegRAM_port_2 = (SegWr && continueWr);
  assign _zz_when_BCAM_l125_2 = 2'b10;
  assign _zz_when_BCAM_l125_1_2 = 2'b10;
  initial begin
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_2/BCAM.v_toplevel_STiRAM_symbol0.bin",STiRAM_symbol0);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_2/BCAM.v_toplevel_STiRAM_symbol1.bin",STiRAM_symbol1);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_2/BCAM.v_toplevel_STiRAM_symbol2.bin",STiRAM_symbol2);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_2/BCAM.v_toplevel_STiRAM_symbol3.bin",STiRAM_symbol3);
  end
  always @(*) begin
    _zz_STiRAM_port0 = {_zz_STiRAMsymbol_read_3, _zz_STiRAMsymbol_read_2, _zz_STiRAMsymbol_read_1, _zz_STiRAMsymbol_read};
  end
  always @(posedge clk) begin
    if(halfRateMPatt_translated_ready) begin
      _zz_STiRAMsymbol_read <= STiRAM_symbol0[halfRateMPatt_translated_payload];
      _zz_STiRAMsymbol_read_1 <= STiRAM_symbol1[halfRateMPatt_translated_payload];
      _zz_STiRAMsymbol_read_2 <= STiRAM_symbol2[halfRateMPatt_translated_payload];
      _zz_STiRAMsymbol_read_3 <= STiRAM_symbol3[halfRateMPatt_translated_payload];
    end
  end

  always @(posedge clk) begin
    if(STiWMask[0] && _zz_STiRAM_port_1) begin
      STiRAM_symbol0[STiWPatt] <= _zz_STiRAM_port[0 : 0];
    end
    if(STiWMask[1] && _zz_STiRAM_port_1) begin
      STiRAM_symbol1[STiWPatt] <= _zz_STiRAM_port[1 : 1];
    end
    if(STiWMask[2] && _zz_STiRAM_port_1) begin
      STiRAM_symbol2[STiWPatt] <= _zz_STiRAM_port[2 : 2];
    end
    if(STiWMask[3] && _zz_STiRAM_port_1) begin
      STiRAM_symbol3[STiWPatt] <= _zz_STiRAM_port[3 : 3];
    end
  end

  always @(posedge clk) begin
    if(STiWMask[0] && _zz_STiRAM_port_3) begin
      STiRAM_symbol0[STiWPatt] <= _zz_STiRAM_port_2[0 : 0];
    end
    if(STiWMask[1] && _zz_STiRAM_port_3) begin
      STiRAM_symbol1[STiWPatt] <= _zz_STiRAM_port_2[1 : 1];
    end
    if(STiWMask[2] && _zz_STiRAM_port_3) begin
      STiRAM_symbol2[STiWPatt] <= _zz_STiRAM_port_2[2 : 2];
    end
    if(STiWMask[3] && _zz_STiRAM_port_3) begin
      STiRAM_symbol3[STiWPatt] <= _zz_STiRAM_port_2[3 : 3];
    end
  end

  initial begin
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_2/BCAM.v_toplevel_SegRAM_symbol0.bin",SegRAM_symbol0);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_2/BCAM.v_toplevel_SegRAM_symbol1.bin",SegRAM_symbol1);
  end
  always @(*) begin
    _zz_SegRAM_port0 = {_zz_SegRAMsymbol_read_1, _zz_SegRAMsymbol_read};
  end
  always @(*) begin
    _zz_SegRAM_port1 = {_zz_SegRAMsymbol_read_3, _zz_SegRAMsymbol_read_2};
  end
  always @(posedge clk) begin
    if(mIndcStream_fire_1) begin
      _zz_SegRAMsymbol_read <= SegRAM_symbol0[SegAddr];
      _zz_SegRAMsymbol_read_1 <= SegRAM_symbol1[SegAddr];
    end
  end

  always @(posedge clk) begin
    if(_zz_RDataForWrite_1) begin
      _zz_SegRAMsymbol_read_2 <= SegRAM_symbol0[_zz_RDataForWrite];
      _zz_SegRAMsymbol_read_3 <= SegRAM_symbol1[_zz_RDataForWrite];
    end
  end

  always @(posedge clk) begin
    if(RegWMask[0] && _zz_SegRAM_port_2) begin
      SegRAM_symbol0[_zz_SegRAM_port] <= _zz_SegRAM_port_1[1 : 0];
    end
    if(RegWMask[1] && _zz_SegRAM_port_2) begin
      SegRAM_symbol1[_zz_SegRAM_port] <= _zz_SegRAM_port_1[3 : 2];
    end
  end

  always @(*) begin
    case(_zz_when_BCAM_l125_2)
      2'b00 : _zz_when_BCAM_l125_1 = mPattTwoPipe_0;
      2'b01 : _zz_when_BCAM_l125_1 = mPattTwoPipe_1;
      default : _zz_when_BCAM_l125_1 = mPattTwoPipe_2;
    endcase
  end

  always @(*) begin
    case(_zz_when_BCAM_l125_1_2)
      2'b00 : _zz_when_BCAM_l125_1_1 = mPattTwoPipe_0;
      2'b01 : _zz_when_BCAM_l125_1_1 = mPattTwoPipe_1;
      default : _zz_when_BCAM_l125_1_1 = mPattTwoPipe_2;
    endcase
  end

  assign halfRateWStream_fire = (halfRateWStream_valid && halfRateWStream_ready);
  assign io_wStream_ready = (! io_wStream_rValid);
  assign halfRateWStream_valid = io_wStream_rValid;
  assign halfRateWStream_payload_wAddr = io_wStream_rData_wAddr;
  assign halfRateWStream_payload_wPatt = io_wStream_rData_wPatt;
  assign halfRateWStream_payload_wr = io_wStream_rData_wr;
  assign halfRateWStream_ready = 1'b1;
  assign halfRateWStream_fire_1 = (halfRateWStream_valid && halfRateWStream_ready);
  assign halfRateWStream_fire_2 = (halfRateWStream_valid && halfRateWStream_ready);
  assign when_BCAM_l57 = (! halfRateWStream_fire_2);
  assign halfRateMPatt_fire = (halfRateMPatt_valid && halfRateMPatt_ready);
  assign io_mPattStream_ready = (! io_mPattStream_rValid);
  assign halfRateMPatt_valid = io_mPattStream_rValid;
  assign halfRateMPatt_payload_mPatt = io_mPattStream_rData_mPatt;
  assign mPattTwoPipe_0 = halfRateMPatt_payload_mPatt;
  assign halfRateMPatt_translated_valid = halfRateMPatt_valid;
  assign halfRateMPatt_ready = halfRateMPatt_translated_ready;
  assign halfRateMPatt_translated_payload = halfRateMPatt_payload_mPatt;
  assign mIndcStream_isFree = ((! mIndcStream_valid) || mIndcStream_ready);
  assign halfRateMPatt_translated_ready = mIndcStream_isFree;
  assign mIndcStream_valid = _zz_mIndcStream_valid;
  assign mIndcStream_payload = _zz_STiRAM_port0;
  assign mIndcStream_payload_ohFirst_input = mIndcStream_payload;
  assign mIndcStream_payload_ohFirst_masked = (mIndcStream_payload_ohFirst_input & (~ _zz_mIndcStream_payload_ohFirst_masked));
  assign mIndcStream_payload_ohFirst_value = mIndcStream_payload_ohFirst_masked;
  assign _zz_SegAddr = mIndcStream_payload_ohFirst_value[3];
  assign _zz_SegAddr_1 = (mIndcStream_payload_ohFirst_value[1] || _zz_SegAddr);
  assign _zz_SegAddr_2 = (mIndcStream_payload_ohFirst_value[2] || _zz_SegAddr);
  assign SegAddr = {_zz_SegAddr_2,_zz_SegAddr_1};
  assign mIndcStream_fire = (mIndcStream_valid && mIndcStream_ready);
  assign io_mAddrStream_fire = (io_mAddrStream_valid && io_mAddrStream_ready);
  assign io_mAddrStream_payload_matchFlag = rMatch;
  always @(*) begin
    mIndcStream_ready = mIndcStream_m2sPipe_ready;
    if(when_Stream_l368) begin
      mIndcStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! mIndcStream_m2sPipe_valid);
  assign mIndcStream_m2sPipe_valid = mIndcStream_rValid;
  assign mIndcStream_m2sPipe_payload = mIndcStream_rData;
  assign io_mAddrStream_valid = mIndcStream_m2sPipe_valid;
  assign mIndcStream_m2sPipe_ready = io_mAddrStream_ready;
  assign mIndcStream_fire_1 = (mIndcStream_valid && mIndcStream_ready);
  assign _zz_when_BCAM_l125 = _zz_SegRAM_port0;
  always @(*) begin
    _zz_io_mAddrStream_payload_mAddr = 1'b0;
    if(when_BCAM_l125) begin
      _zz_io_mAddrStream_payload_mAddr = 1'b1;
    end
  end

  always @(*) begin
    _zz_io_mAddrStream_payload_mAddr_1 = 1'b0;
    if(when_BCAM_l125_1) begin
      _zz_io_mAddrStream_payload_mAddr_1 = 1'b1;
    end
  end

  assign when_BCAM_l125 = (_zz_when_BCAM_l125[1 : 0] == _zz_when_BCAM_l125_1);
  assign when_BCAM_l125_1 = (_zz_when_BCAM_l125[2'b10 +: 2] == _zz_when_BCAM_l125_1_1);
  assign _zz_io_mAddrStream_payload_mAddr_2 = {_zz_io_mAddrStream_payload_mAddr_1,_zz_io_mAddrStream_payload_mAddr};
  assign _zz_io_mAddrStream_payload_mAddr_3 = _zz__zz_io_mAddrStream_payload_mAddr_3[1];
  assign io_mAddrStream_payload_mAddr = {SegAddr_regNext,_zz_io_mAddrStream_payload_mAddr_3};
  assign STiWMask = ({3'd0,1'b1} <<< halfRateWStream_payload_wAddr[1'b1 +: 2]);
  assign RegWMask = ({1'd0,1'b1} <<< halfRateWStream_payload_wAddr[0 : 0]);
  assign _zz_RDataForWrite = halfRateWStream_payload_wAddr[2 : 1];
  assign halfRateWStream_fire_3 = (halfRateWStream_valid && halfRateWStream_ready);
  assign _zz_RDataForWrite_1 = (((! SegWr) && halfRateWStream_payload_wr) && halfRateWStream_fire_3);
  assign RDataForWrite = _zz_SegRAM_port1;
  assign switch_Misc_l211 = halfRateWStream_payload_wAddr[0 : 0];
  always @(*) begin
    case(switch_Misc_l211)
      1'b0 : begin
        PattToRmMuxOutput = RDataForWrite[2'b00 +: 2];
      end
      default : begin
        PattToRmMuxOutput = RDataForWrite[_zz_PattToRmMuxOutput +: 2];
      end
    endcase
  end

  assign STiWPatt = (STiWr ? halfRateWStream_payload_wPatt : PattToRmMuxOutput);
  assign halfRateWStream_fire_4 = (halfRateWStream_valid && halfRateWStream_ready);
  always @(*) begin
    ocurrIndcResults_0 = 1'b0;
    if(when_BCAM_l159) begin
      ocurrIndcResults_0 = 1'b1;
    end
  end

  always @(*) begin
    ocurrIndcResults_1 = 1'b0;
    if(when_BCAM_l159_1) begin
      ocurrIndcResults_1 = 1'b1;
    end
  end

  assign when_BCAM_l159 = (RDataForWrite[1 : 0] == PattToRmMuxOutput);
  assign when_BCAM_l159_1 = (RDataForWrite[2'b10 +: 2] == PattToRmMuxOutput);
  assign _zz_MaskingControl = ({ocurrIndcResults_1,ocurrIndcResults_0} & (~ RegWMask));
  assign MaskingControl = (_zz_MaskingControl[0] || _zz_MaskingControl[1]);
  assign notErase = (MaskingControl ? 1'b1 : STiWr);
  assign halfRateWStream_fire_5 = (halfRateWStream_valid && halfRateWStream_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      io_wStream_rValid <= 1'b0;
      continueWr <= 1'b0;
      SegWr <= 1'b0;
      STiWr <= 1'b1;
      io_mPattStream_rValid <= 1'b0;
      _zz_mIndcStream_valid <= 1'b0;
      SegAddr_regNext <= 2'b00;
      mIndcStream_rValid <= 1'b0;
    end else begin
      if(io_wStream_valid) begin
        io_wStream_rValid <= 1'b1;
      end
      if(halfRateWStream_fire) begin
        io_wStream_rValid <= 1'b0;
      end
      if(halfRateWStream_fire_1) begin
        continueWr <= 1'b1;
      end
      if(when_BCAM_l57) begin
        continueWr <= 1'b0;
      end
      if(io_mPattStream_valid) begin
        io_mPattStream_rValid <= 1'b1;
      end
      if(halfRateMPatt_fire) begin
        io_mPattStream_rValid <= 1'b0;
      end
      if(mIndcStream_ready) begin
        _zz_mIndcStream_valid <= 1'b0;
      end
      if(halfRateMPatt_translated_ready) begin
        _zz_mIndcStream_valid <= halfRateMPatt_translated_valid;
      end
      SegAddr_regNext <= SegAddr;
      if(mIndcStream_ready) begin
        mIndcStream_rValid <= mIndcStream_valid;
      end
      if(halfRateWStream_fire_5) begin
        SegWr <= 1'b1;
        STiWr <= 1'b0;
      end else begin
        SegWr <= 1'b0;
        STiWr <= 1'b1;
      end
    end
  end

  always @(posedge clk) begin
    if(io_wStream_ready) begin
      io_wStream_rData_wAddr <= io_wStream_payload_wAddr;
      io_wStream_rData_wPatt <= io_wStream_payload_wPatt;
      io_wStream_rData_wr <= io_wStream_payload_wr;
    end
    if(io_mPattStream_ready) begin
      io_mPattStream_rData_mPatt <= io_mPattStream_payload_mPatt;
    end
    mPattTwoPipe_1 <= mPattTwoPipe_0;
    mPattTwoPipe_2 <= mPattTwoPipe_1;
    if(mIndcStream_fire) begin
      rMatch <= ((mIndcStream_payload[0] || mIndcStream_payload[1]) || (mIndcStream_payload[2] || mIndcStream_payload[3]));
    end
    if(io_mAddrStream_fire) begin
      rMatch <= 1'b0;
    end
    if(mIndcStream_ready) begin
      mIndcStream_rData <= mIndcStream_payload;
    end
  end


endmodule
