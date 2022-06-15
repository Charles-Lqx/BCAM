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

  reg        [7:0]    _zz_STiRAM_port0;
  reg        [1:0]    _zz_SegRAM_port0;
  wire       [7:0]    _zz__zz_SegAddr_2;
  wire       [7:0]    _zz_STiRAM_port;
  wire                _zz_STiRAM_port_1;
  wire       [0:0]    _zz_MaskingControl;
  wire       [7:0]    _zz_STiRAM_port_2;
  wire                _zz_STiRAM_port_3;
  wire       [2:0]    _zz_SegRAM_port;
  wire       [1:0]    _zz_SegRAM_port_1;
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
  reg                 SegWr;
  reg                 STiWr;
  wire                io_mPattStream_halfPipe_valid;
  wire                io_mPattStream_halfPipe_ready;
  wire       [1:0]    io_mPattStream_halfPipe_payload_mPatt;
  reg                 io_mPattStream_rValid;
  wire                io_mPattStream_halfPipe_fire;
  reg        [1:0]    io_mPattStream_rData_mPatt;
  wire                io_mPattStream_halfPipe_translated_valid;
  wire                io_mPattStream_halfPipe_translated_ready;
  wire       [1:0]    io_mPattStream_halfPipe_translated_payload;
  wire                _zz_io_mAddrStream_valid;
  reg                 _zz_io_mPattStream_halfPipe_translated_ready;
  wire       [7:0]    _zz_SegAddr;
  reg                 _zz_io_mAddrStream_valid_1;
  wire       [7:0]    _zz_SegAddr_1;
  wire       [7:0]    _zz_SegAddr_2;
  wire                _zz_SegAddr_3;
  wire                _zz_SegAddr_4;
  wire                _zz_SegAddr_5;
  wire                _zz_SegAddr_6;
  wire                _zz_SegAddr_7;
  wire                _zz_SegAddr_8;
  wire                _zz_SegAddr_9;
  wire       [2:0]    SegAddr;
  reg        [2:0]    SegAddr_regNext;
  reg                 rMatch;
  wire                io_mAddrStream_fire;
  wire                _zz_io_mAddrStream_valid_2;
  reg                 _zz_io_mAddrStream_valid_3;
  wire                when_Stream_l368;
  wire       [7:0]    STiWMask;
  wire       [0:0]    RegWMask;
  wire       [2:0]    _zz_RDataForWrite;
  wire                halfRateWStream_fire_3;
  wire                _zz_RDataForWrite_1;
  wire       [1:0]    RDataForWrite;
  wire       [1:0]    PattToRmMuxOutput;
  wire       [1:0]    _zz_1;
  wire                halfRateWStream_fire_4;
  reg                 ocurrIndcResults_0;
  wire                when_BCAM_l159;
  wire                MaskingControl;
  wire                notErase;
  wire                halfRateWStream_fire_5;
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol0 [0:3];
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol1 [0:3];
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol2 [0:3];
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol3 [0:3];
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol4 [0:3];
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol5 [0:3];
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol6 [0:3];
  (* ram_style = "block" *) reg [0:0] STiRAM_symbol7 [0:3];
  reg [0:0] _zz_STiRAMsymbol_read;
  reg [0:0] _zz_STiRAMsymbol_read_1;
  reg [0:0] _zz_STiRAMsymbol_read_2;
  reg [0:0] _zz_STiRAMsymbol_read_3;
  reg [0:0] _zz_STiRAMsymbol_read_4;
  reg [0:0] _zz_STiRAMsymbol_read_5;
  reg [0:0] _zz_STiRAMsymbol_read_6;
  reg [0:0] _zz_STiRAMsymbol_read_7;
  (* ram_style = "block" *) reg [1:0] SegRAM [0:7];

  assign _zz__zz_SegAddr_2 = (_zz_SegAddr_1 - 8'h01);
  assign _zz_MaskingControl = (ocurrIndcResults_0 & (~ RegWMask));
  assign _zz_STiRAM_port = 8'hff;
  assign _zz_STiRAM_port_1 = ((STiWr && halfRateWStream_payload_wr) && halfRateWStream_fire_4);
  assign _zz_STiRAM_port_2 = 8'h0;
  assign _zz_STiRAM_port_3 = ((! notErase) && continueWr);
  assign _zz_SegRAM_port = halfRateWStream_payload_wAddr[2 : 0];
  assign _zz_SegRAM_port_1 = halfRateWStream_payload_wPatt;
  assign _zz_SegRAM_port_2 = (SegWr && continueWr);
  initial begin
    $readmemb("BCAM.v_toplevel_STiRAM_symbol0.bin",STiRAM_symbol0);
    $readmemb("BCAM.v_toplevel_STiRAM_symbol1.bin",STiRAM_symbol1);
    $readmemb("BCAM.v_toplevel_STiRAM_symbol2.bin",STiRAM_symbol2);
    $readmemb("BCAM.v_toplevel_STiRAM_symbol3.bin",STiRAM_symbol3);
    $readmemb("BCAM.v_toplevel_STiRAM_symbol4.bin",STiRAM_symbol4);
    $readmemb("BCAM.v_toplevel_STiRAM_symbol5.bin",STiRAM_symbol5);
    $readmemb("BCAM.v_toplevel_STiRAM_symbol6.bin",STiRAM_symbol6);
    $readmemb("BCAM.v_toplevel_STiRAM_symbol7.bin",STiRAM_symbol7);
  end
  always @(*) begin
    _zz_STiRAM_port0 = {_zz_STiRAMsymbol_read_7, _zz_STiRAMsymbol_read_6, _zz_STiRAMsymbol_read_5, _zz_STiRAMsymbol_read_4, _zz_STiRAMsymbol_read_3, _zz_STiRAMsymbol_read_2, _zz_STiRAMsymbol_read_1, _zz_STiRAMsymbol_read};
  end
  always @(posedge clk) begin
    if(io_mPattStream_halfPipe_translated_ready) begin
      _zz_STiRAMsymbol_read <= STiRAM_symbol0[io_mPattStream_halfPipe_translated_payload];
      _zz_STiRAMsymbol_read_1 <= STiRAM_symbol1[io_mPattStream_halfPipe_translated_payload];
      _zz_STiRAMsymbol_read_2 <= STiRAM_symbol2[io_mPattStream_halfPipe_translated_payload];
      _zz_STiRAMsymbol_read_3 <= STiRAM_symbol3[io_mPattStream_halfPipe_translated_payload];
      _zz_STiRAMsymbol_read_4 <= STiRAM_symbol4[io_mPattStream_halfPipe_translated_payload];
      _zz_STiRAMsymbol_read_5 <= STiRAM_symbol5[io_mPattStream_halfPipe_translated_payload];
      _zz_STiRAMsymbol_read_6 <= STiRAM_symbol6[io_mPattStream_halfPipe_translated_payload];
      _zz_STiRAMsymbol_read_7 <= STiRAM_symbol7[io_mPattStream_halfPipe_translated_payload];
    end
  end

  always @(posedge clk) begin
    if(STiWMask[0] && _zz_STiRAM_port_1) begin
      STiRAM_symbol0[_zz_1] <= _zz_STiRAM_port[0 : 0];
    end
    if(STiWMask[1] && _zz_STiRAM_port_1) begin
      STiRAM_symbol1[_zz_1] <= _zz_STiRAM_port[1 : 1];
    end
    if(STiWMask[2] && _zz_STiRAM_port_1) begin
      STiRAM_symbol2[_zz_1] <= _zz_STiRAM_port[2 : 2];
    end
    if(STiWMask[3] && _zz_STiRAM_port_1) begin
      STiRAM_symbol3[_zz_1] <= _zz_STiRAM_port[3 : 3];
    end
    if(STiWMask[4] && _zz_STiRAM_port_1) begin
      STiRAM_symbol4[_zz_1] <= _zz_STiRAM_port[4 : 4];
    end
    if(STiWMask[5] && _zz_STiRAM_port_1) begin
      STiRAM_symbol5[_zz_1] <= _zz_STiRAM_port[5 : 5];
    end
    if(STiWMask[6] && _zz_STiRAM_port_1) begin
      STiRAM_symbol6[_zz_1] <= _zz_STiRAM_port[6 : 6];
    end
    if(STiWMask[7] && _zz_STiRAM_port_1) begin
      STiRAM_symbol7[_zz_1] <= _zz_STiRAM_port[7 : 7];
    end
  end

  always @(posedge clk) begin
    if(STiWMask[0] && _zz_STiRAM_port_3) begin
      STiRAM_symbol0[_zz_1] <= _zz_STiRAM_port_2[0 : 0];
    end
    if(STiWMask[1] && _zz_STiRAM_port_3) begin
      STiRAM_symbol1[_zz_1] <= _zz_STiRAM_port_2[1 : 1];
    end
    if(STiWMask[2] && _zz_STiRAM_port_3) begin
      STiRAM_symbol2[_zz_1] <= _zz_STiRAM_port_2[2 : 2];
    end
    if(STiWMask[3] && _zz_STiRAM_port_3) begin
      STiRAM_symbol3[_zz_1] <= _zz_STiRAM_port_2[3 : 3];
    end
    if(STiWMask[4] && _zz_STiRAM_port_3) begin
      STiRAM_symbol4[_zz_1] <= _zz_STiRAM_port_2[4 : 4];
    end
    if(STiWMask[5] && _zz_STiRAM_port_3) begin
      STiRAM_symbol5[_zz_1] <= _zz_STiRAM_port_2[5 : 5];
    end
    if(STiWMask[6] && _zz_STiRAM_port_3) begin
      STiRAM_symbol6[_zz_1] <= _zz_STiRAM_port_2[6 : 6];
    end
    if(STiWMask[7] && _zz_STiRAM_port_3) begin
      STiRAM_symbol7[_zz_1] <= _zz_STiRAM_port_2[7 : 7];
    end
  end

  initial begin
    $readmemb("BCAM.v_toplevel_SegRAM.bin",SegRAM);
  end
  always @(posedge clk) begin
    if(_zz_RDataForWrite_1) begin
      _zz_SegRAM_port0 <= SegRAM[_zz_RDataForWrite];
    end
  end

  always @(posedge clk) begin
    if(_zz_SegRAM_port_2) begin
      SegRAM[_zz_SegRAM_port] <= _zz_SegRAM_port_1;
    end
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
  assign io_mPattStream_halfPipe_fire = (io_mPattStream_halfPipe_valid && io_mPattStream_halfPipe_ready);
  assign io_mPattStream_ready = (! io_mPattStream_rValid);
  assign io_mPattStream_halfPipe_valid = io_mPattStream_rValid;
  assign io_mPattStream_halfPipe_payload_mPatt = io_mPattStream_rData_mPatt;
  assign io_mPattStream_halfPipe_translated_valid = io_mPattStream_halfPipe_valid;
  assign io_mPattStream_halfPipe_ready = io_mPattStream_halfPipe_translated_ready;
  assign io_mPattStream_halfPipe_translated_payload = io_mPattStream_payload_mPatt;
  assign io_mPattStream_halfPipe_translated_ready = ((! _zz_io_mAddrStream_valid) || _zz_io_mPattStream_halfPipe_translated_ready);
  assign _zz_io_mAddrStream_valid = _zz_io_mAddrStream_valid_1;
  assign _zz_SegAddr = _zz_STiRAM_port0;
  assign _zz_SegAddr_1 = _zz_SegAddr;
  assign _zz_SegAddr_2 = (_zz_SegAddr_1 & (~ _zz__zz_SegAddr_2));
  assign _zz_SegAddr_3 = _zz_SegAddr_2[3];
  assign _zz_SegAddr_4 = _zz_SegAddr_2[5];
  assign _zz_SegAddr_5 = _zz_SegAddr_2[6];
  assign _zz_SegAddr_6 = _zz_SegAddr_2[7];
  assign _zz_SegAddr_7 = (((_zz_SegAddr_2[1] || _zz_SegAddr_3) || _zz_SegAddr_4) || _zz_SegAddr_6);
  assign _zz_SegAddr_8 = (((_zz_SegAddr_2[2] || _zz_SegAddr_3) || _zz_SegAddr_5) || _zz_SegAddr_6);
  assign _zz_SegAddr_9 = (((_zz_SegAddr_2[4] || _zz_SegAddr_4) || _zz_SegAddr_5) || _zz_SegAddr_6);
  assign SegAddr = {_zz_SegAddr_9,{_zz_SegAddr_8,_zz_SegAddr_7}};
  assign io_mAddrStream_fire = (io_mAddrStream_valid && io_mAddrStream_ready);
  assign io_mAddrStream_payload_matchFlag = rMatch;
  always @(*) begin
    _zz_io_mPattStream_halfPipe_translated_ready = io_mAddrStream_ready;
    if(when_Stream_l368) begin
      _zz_io_mPattStream_halfPipe_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! _zz_io_mAddrStream_valid_2);
  assign _zz_io_mAddrStream_valid_2 = _zz_io_mAddrStream_valid_3;
  assign io_mAddrStream_valid = _zz_io_mAddrStream_valid_2;
  assign io_mAddrStream_payload_mAddr = SegAddr_regNext;
  assign STiWMask = ({7'd0,1'b1} <<< halfRateWStream_payload_wAddr[2 : 0]);
  assign RegWMask = 1'b1;
  assign _zz_RDataForWrite = halfRateWStream_payload_wAddr[2 : 0];
  assign halfRateWStream_fire_3 = (halfRateWStream_valid && halfRateWStream_ready);
  assign _zz_RDataForWrite_1 = (((! SegWr) && halfRateWStream_payload_wr) && halfRateWStream_fire_3);
  assign RDataForWrite = _zz_SegRAM_port0;
  assign PattToRmMuxOutput = RDataForWrite[2'b00 +: 2];
  assign _zz_1 = (STiWr ? io_mPattStream_halfPipe_payload_mPatt : PattToRmMuxOutput);
  assign halfRateWStream_fire_4 = (halfRateWStream_valid && halfRateWStream_ready);
  always @(*) begin
    ocurrIndcResults_0 = 1'b0;
    if(when_BCAM_l159) begin
      ocurrIndcResults_0 = 1'b1;
    end
  end

  assign when_BCAM_l159 = (RDataForWrite[1 : 0] == PattToRmMuxOutput);
  assign MaskingControl = _zz_MaskingControl[0];
  assign notErase = (MaskingControl ? 1'b1 : STiWr);
  assign halfRateWStream_fire_5 = (halfRateWStream_valid && halfRateWStream_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      io_wStream_rValid <= 1'b0;
      continueWr <= 1'b0;
      SegWr <= 1'b0;
      STiWr <= 1'b1;
      io_mPattStream_rValid <= 1'b0;
      _zz_io_mAddrStream_valid_1 <= 1'b0;
      SegAddr_regNext <= 3'b000;
      _zz_io_mAddrStream_valid_3 <= 1'b0;
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
      if(io_mPattStream_halfPipe_fire) begin
        io_mPattStream_rValid <= 1'b0;
      end
      if(_zz_io_mPattStream_halfPipe_translated_ready) begin
        _zz_io_mAddrStream_valid_1 <= 1'b0;
      end
      if(io_mPattStream_halfPipe_translated_ready) begin
        _zz_io_mAddrStream_valid_1 <= io_mPattStream_halfPipe_translated_valid;
      end
      SegAddr_regNext <= SegAddr;
      if(_zz_io_mPattStream_halfPipe_translated_ready) begin
        _zz_io_mAddrStream_valid_3 <= _zz_io_mAddrStream_valid;
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
    if((_zz_io_mAddrStream_valid && _zz_io_mPattStream_halfPipe_translated_ready)) begin
      rMatch <= (((_zz_SegAddr[0] || _zz_SegAddr[1]) || (_zz_SegAddr[2] || _zz_SegAddr[3])) || ((_zz_SegAddr[4] || _zz_SegAddr[5]) || (_zz_SegAddr[6] || _zz_SegAddr[7])));
    end
    if(io_mAddrStream_fire) begin
      rMatch <= 1'b0;
    end
  end


endmodule
