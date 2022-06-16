// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : BCAM
// Git hash  : df6046da4b6642a1ff6669071797a7f31a3f9ae8

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

  reg        [7:0]    _zz__zz_1_port0;
  reg        [1:0]    _zz__zz_2_port0;
  wire       [7:0]    _zz__zz_io_mAddrStream_payload_mAddr_2;
  wire       [7:0]    _zz__zz_1_port;
  wire                _zz__zz_1_port_1;
  wire       [7:0]    _zz__zz_1_port_2;
  wire                _zz__zz_1_port_3;
  wire       [0:0]    _zz__zz_1_port_4;
  wire       [2:0]    _zz__zz_2_port;
  wire       [1:0]    _zz__zz_2_port_1;
  wire       [0:0]    _zz__zz_2_port_2;
  wire                _zz__zz_2_port_3;
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
  reg                 _zz_when_BCAM_l163;
  reg                 _zz_3;
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
  wire                _zz_io_mPattStream_halfPipe_translated_ready;
  wire       [7:0]    _zz_io_mAddrStream_payload_mAddr;
  reg                 _zz_io_mAddrStream_valid_1;
  wire       [7:0]    _zz_io_mAddrStream_payload_mAddr_1;
  wire       [7:0]    _zz_io_mAddrStream_payload_mAddr_2;
  wire                _zz_io_mAddrStream_payload_mAddr_3;
  wire                _zz_io_mAddrStream_payload_mAddr_4;
  wire                _zz_io_mAddrStream_payload_mAddr_5;
  wire                _zz_io_mAddrStream_payload_mAddr_6;
  wire                _zz_io_mAddrStream_payload_mAddr_7;
  wire                _zz_io_mAddrStream_payload_mAddr_8;
  wire                _zz_io_mAddrStream_payload_mAddr_9;
  reg        [2:0]    _zz_io_mAddrStream_payload_mAddr_10;
  reg                 _zz_io_mAddrStream_payload_matchFlag;
  wire                io_mAddrStream_fire;
  wire                _zz_io_mPattStream_halfPipe_translated_ready_1;
  wire                _zz_io_mAddrStream_valid_2;
  wire                _zz_io_mPattStream_halfPipe_translated_ready_2;
  reg                 _zz_io_mAddrStream_valid_3;
  reg                 _zz_io_mPattStream_halfPipe_translated_ready_3;
  wire                _zz_io_mAddrStream_valid_4;
  reg                 _zz_io_mAddrStream_valid_5;
  reg        [2:0]    _zz_io_mAddrStream_payload_mAddr_11;
  reg                 _zz_io_mAddrStream_payload_matchFlag_1;
  wire                when_Stream_l368;
  wire       [7:0]    _zz_4;
  wire       [2:0]    _zz_when_BCAM_l163_1;
  wire                halfRateWStream_fire_3;
  wire                _zz_when_BCAM_l163_2;
  wire       [1:0]    _zz_when_BCAM_l163_3;
  wire       [1:0]    _zz_when_BCAM_l163_4;
  wire       [1:0]    _zz_5;
  wire                halfRateWStream_fire_4;
  reg                 _zz_6;
  wire                when_BCAM_l163;
  wire                halfRateWStream_fire_5;
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol0 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol1 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol2 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol3 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol4 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol5 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol6 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol7 [0:3];
  reg [0:0] _zz__zz_1symbol_read;
  reg [0:0] _zz__zz_1symbol_read_1;
  reg [0:0] _zz__zz_1symbol_read_2;
  reg [0:0] _zz__zz_1symbol_read_3;
  reg [0:0] _zz__zz_1symbol_read_4;
  reg [0:0] _zz__zz_1symbol_read_5;
  reg [0:0] _zz__zz_1symbol_read_6;
  reg [0:0] _zz__zz_1symbol_read_7;
  (* ram_style = "block" *) reg [1:0] _zz_2 [0:7];

  assign _zz__zz_io_mAddrStream_payload_mAddr_2 = (_zz_io_mAddrStream_payload_mAddr_1 - 8'h01);
  assign _zz__zz_1_port_4 = (_zz_6 & (~ 1'b1));
  assign _zz__zz_1_port = 8'hff;
  assign _zz__zz_1_port_1 = ((_zz_3 && halfRateWStream_payload_wr) && halfRateWStream_fire_4);
  assign _zz__zz_1_port_2 = 8'h0;
  assign _zz__zz_1_port_3 = ((! (_zz__zz_1_port_4[0] ? 1'b1 : _zz_3)) && continueWr);
  assign _zz__zz_2_port = halfRateWStream_payload_wAddr[2 : 0];
  assign _zz__zz_2_port_1 = halfRateWStream_payload_wPatt;
  assign _zz__zz_2_port_2 = 1'b1;
  assign _zz__zz_2_port_3 = (_zz_when_BCAM_l163 && continueWr);
  initial begin
    $readmemb("BCAM.v_toplevel__zz_1_symbol0.bin",_zz_1_symbol0);
    $readmemb("BCAM.v_toplevel__zz_1_symbol1.bin",_zz_1_symbol1);
    $readmemb("BCAM.v_toplevel__zz_1_symbol2.bin",_zz_1_symbol2);
    $readmemb("BCAM.v_toplevel__zz_1_symbol3.bin",_zz_1_symbol3);
    $readmemb("BCAM.v_toplevel__zz_1_symbol4.bin",_zz_1_symbol4);
    $readmemb("BCAM.v_toplevel__zz_1_symbol5.bin",_zz_1_symbol5);
    $readmemb("BCAM.v_toplevel__zz_1_symbol6.bin",_zz_1_symbol6);
    $readmemb("BCAM.v_toplevel__zz_1_symbol7.bin",_zz_1_symbol7);
  end
  always @(*) begin
    _zz__zz_1_port0 = {_zz__zz_1symbol_read_7, _zz__zz_1symbol_read_6, _zz__zz_1symbol_read_5, _zz__zz_1symbol_read_4, _zz__zz_1symbol_read_3, _zz__zz_1symbol_read_2, _zz__zz_1symbol_read_1, _zz__zz_1symbol_read};
  end
  always @(posedge clk) begin
    if(io_mPattStream_halfPipe_translated_ready) begin
      _zz__zz_1symbol_read <= _zz_1_symbol0[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_1 <= _zz_1_symbol1[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_2 <= _zz_1_symbol2[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_3 <= _zz_1_symbol3[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_4 <= _zz_1_symbol4[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_5 <= _zz_1_symbol5[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_6 <= _zz_1_symbol6[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_7 <= _zz_1_symbol7[io_mPattStream_halfPipe_translated_payload];
    end
  end

  always @(posedge clk) begin
    if(_zz_4[0] && _zz__zz_1_port_1) begin
      _zz_1_symbol0[_zz_5] <= _zz__zz_1_port[0 : 0];
    end
    if(_zz_4[1] && _zz__zz_1_port_1) begin
      _zz_1_symbol1[_zz_5] <= _zz__zz_1_port[1 : 1];
    end
    if(_zz_4[2] && _zz__zz_1_port_1) begin
      _zz_1_symbol2[_zz_5] <= _zz__zz_1_port[2 : 2];
    end
    if(_zz_4[3] && _zz__zz_1_port_1) begin
      _zz_1_symbol3[_zz_5] <= _zz__zz_1_port[3 : 3];
    end
    if(_zz_4[4] && _zz__zz_1_port_1) begin
      _zz_1_symbol4[_zz_5] <= _zz__zz_1_port[4 : 4];
    end
    if(_zz_4[5] && _zz__zz_1_port_1) begin
      _zz_1_symbol5[_zz_5] <= _zz__zz_1_port[5 : 5];
    end
    if(_zz_4[6] && _zz__zz_1_port_1) begin
      _zz_1_symbol6[_zz_5] <= _zz__zz_1_port[6 : 6];
    end
    if(_zz_4[7] && _zz__zz_1_port_1) begin
      _zz_1_symbol7[_zz_5] <= _zz__zz_1_port[7 : 7];
    end
  end

  always @(posedge clk) begin
    if(_zz_4[0] && _zz__zz_1_port_3) begin
      _zz_1_symbol0[_zz_5] <= _zz__zz_1_port_2[0 : 0];
    end
    if(_zz_4[1] && _zz__zz_1_port_3) begin
      _zz_1_symbol1[_zz_5] <= _zz__zz_1_port_2[1 : 1];
    end
    if(_zz_4[2] && _zz__zz_1_port_3) begin
      _zz_1_symbol2[_zz_5] <= _zz__zz_1_port_2[2 : 2];
    end
    if(_zz_4[3] && _zz__zz_1_port_3) begin
      _zz_1_symbol3[_zz_5] <= _zz__zz_1_port_2[3 : 3];
    end
    if(_zz_4[4] && _zz__zz_1_port_3) begin
      _zz_1_symbol4[_zz_5] <= _zz__zz_1_port_2[4 : 4];
    end
    if(_zz_4[5] && _zz__zz_1_port_3) begin
      _zz_1_symbol5[_zz_5] <= _zz__zz_1_port_2[5 : 5];
    end
    if(_zz_4[6] && _zz__zz_1_port_3) begin
      _zz_1_symbol6[_zz_5] <= _zz__zz_1_port_2[6 : 6];
    end
    if(_zz_4[7] && _zz__zz_1_port_3) begin
      _zz_1_symbol7[_zz_5] <= _zz__zz_1_port_2[7 : 7];
    end
  end

  initial begin
    $readmemb("BCAM.v_toplevel__zz_2.bin",_zz_2);
  end
  always @(posedge clk) begin
    if(_zz_when_BCAM_l163_2) begin
      _zz__zz_2_port0 <= _zz_2[_zz_when_BCAM_l163_1];
    end
  end

  always @(posedge clk) begin
    if(_zz__zz_2_port_3) begin
      _zz_2[_zz__zz_2_port] <= _zz__zz_2_port_1;
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
  assign io_mPattStream_halfPipe_translated_payload = io_mPattStream_halfPipe_payload_mPatt;
  assign io_mPattStream_halfPipe_translated_ready = ((! _zz_io_mAddrStream_valid) || _zz_io_mPattStream_halfPipe_translated_ready);
  assign _zz_io_mAddrStream_valid = _zz_io_mAddrStream_valid_1;
  assign _zz_io_mAddrStream_payload_mAddr = _zz__zz_1_port0;
  assign _zz_io_mAddrStream_payload_mAddr_1 = _zz_io_mAddrStream_payload_mAddr;
  assign _zz_io_mAddrStream_payload_mAddr_2 = (_zz_io_mAddrStream_payload_mAddr_1 & (~ _zz__zz_io_mAddrStream_payload_mAddr_2));
  assign _zz_io_mAddrStream_payload_mAddr_3 = _zz_io_mAddrStream_payload_mAddr_2[3];
  assign _zz_io_mAddrStream_payload_mAddr_4 = _zz_io_mAddrStream_payload_mAddr_2[5];
  assign _zz_io_mAddrStream_payload_mAddr_5 = _zz_io_mAddrStream_payload_mAddr_2[6];
  assign _zz_io_mAddrStream_payload_mAddr_6 = _zz_io_mAddrStream_payload_mAddr_2[7];
  assign _zz_io_mAddrStream_payload_mAddr_7 = (((_zz_io_mAddrStream_payload_mAddr_2[1] || _zz_io_mAddrStream_payload_mAddr_3) || _zz_io_mAddrStream_payload_mAddr_4) || _zz_io_mAddrStream_payload_mAddr_6);
  assign _zz_io_mAddrStream_payload_mAddr_8 = (((_zz_io_mAddrStream_payload_mAddr_2[2] || _zz_io_mAddrStream_payload_mAddr_3) || _zz_io_mAddrStream_payload_mAddr_5) || _zz_io_mAddrStream_payload_mAddr_6);
  assign _zz_io_mAddrStream_payload_mAddr_9 = (((_zz_io_mAddrStream_payload_mAddr_2[4] || _zz_io_mAddrStream_payload_mAddr_4) || _zz_io_mAddrStream_payload_mAddr_5) || _zz_io_mAddrStream_payload_mAddr_6);
  assign io_mAddrStream_fire = (io_mAddrStream_valid && io_mAddrStream_ready);
  assign _zz_io_mPattStream_halfPipe_translated_ready = _zz_io_mPattStream_halfPipe_translated_ready_1;
  assign _zz_io_mPattStream_halfPipe_translated_ready_1 = ((! _zz_io_mAddrStream_valid_2) || _zz_io_mPattStream_halfPipe_translated_ready_2);
  assign _zz_io_mAddrStream_valid_2 = _zz_io_mAddrStream_valid_3;
  assign _zz_io_mPattStream_halfPipe_translated_ready_2 = _zz_io_mPattStream_halfPipe_translated_ready_3;
  always @(*) begin
    _zz_io_mPattStream_halfPipe_translated_ready_3 = io_mAddrStream_ready;
    if(when_Stream_l368) begin
      _zz_io_mPattStream_halfPipe_translated_ready_3 = 1'b1;
    end
  end

  assign when_Stream_l368 = (! _zz_io_mAddrStream_valid_4);
  assign _zz_io_mAddrStream_valid_4 = _zz_io_mAddrStream_valid_5;
  assign io_mAddrStream_valid = _zz_io_mAddrStream_valid_4;
  assign io_mAddrStream_payload_mAddr = _zz_io_mAddrStream_payload_mAddr_11;
  assign io_mAddrStream_payload_matchFlag = _zz_io_mAddrStream_payload_matchFlag_1;
  assign _zz_4 = ({7'd0,1'b1} <<< halfRateWStream_payload_wAddr[2 : 0]);
  assign _zz_when_BCAM_l163_1 = halfRateWStream_payload_wAddr[2 : 0];
  assign halfRateWStream_fire_3 = (halfRateWStream_valid && halfRateWStream_ready);
  assign _zz_when_BCAM_l163_2 = (((! _zz_when_BCAM_l163) && halfRateWStream_payload_wr) && halfRateWStream_fire_3);
  assign _zz_when_BCAM_l163_3 = _zz__zz_2_port0;
  assign _zz_when_BCAM_l163_4 = _zz_when_BCAM_l163_3[2'b00 +: 2];
  assign _zz_5 = (_zz_3 ? halfRateWStream_payload_wPatt : _zz_when_BCAM_l163_4);
  assign halfRateWStream_fire_4 = (halfRateWStream_valid && halfRateWStream_ready);
  always @(*) begin
    _zz_6 = 1'b0;
    if(when_BCAM_l163) begin
      _zz_6 = 1'b1;
    end
  end

  assign when_BCAM_l163 = (_zz_when_BCAM_l163_3[1 : 0] == _zz_when_BCAM_l163_4);
  assign halfRateWStream_fire_5 = (halfRateWStream_valid && halfRateWStream_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      io_wStream_rValid <= 1'b0;
      continueWr <= 1'b0;
      _zz_when_BCAM_l163 <= 1'b0;
      _zz_3 <= 1'b1;
      io_mPattStream_rValid <= 1'b0;
      _zz_io_mAddrStream_valid_1 <= 1'b0;
      _zz_io_mAddrStream_payload_mAddr_10 <= 3'b000;
      _zz_io_mAddrStream_valid_3 <= 1'b0;
      _zz_io_mAddrStream_valid_5 <= 1'b0;
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
      _zz_io_mAddrStream_payload_mAddr_10 <= {_zz_io_mAddrStream_payload_mAddr_9,{_zz_io_mAddrStream_payload_mAddr_8,_zz_io_mAddrStream_payload_mAddr_7}};
      if(_zz_io_mPattStream_halfPipe_translated_ready_2) begin
        _zz_io_mAddrStream_valid_3 <= 1'b0;
      end
      if(_zz_io_mPattStream_halfPipe_translated_ready_1) begin
        _zz_io_mAddrStream_valid_3 <= _zz_io_mAddrStream_valid;
      end
      if(_zz_io_mPattStream_halfPipe_translated_ready_3) begin
        _zz_io_mAddrStream_valid_5 <= _zz_io_mAddrStream_valid_2;
      end
      if(halfRateWStream_fire_5) begin
        _zz_when_BCAM_l163 <= 1'b1;
        _zz_3 <= 1'b0;
      end else begin
        _zz_when_BCAM_l163 <= 1'b0;
        _zz_3 <= 1'b1;
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
      _zz_io_mAddrStream_payload_matchFlag <= (((_zz_io_mAddrStream_payload_mAddr[0] || _zz_io_mAddrStream_payload_mAddr[1]) || (_zz_io_mAddrStream_payload_mAddr[2] || _zz_io_mAddrStream_payload_mAddr[3])) || ((_zz_io_mAddrStream_payload_mAddr[4] || _zz_io_mAddrStream_payload_mAddr[5]) || (_zz_io_mAddrStream_payload_mAddr[6] || _zz_io_mAddrStream_payload_mAddr[7])));
    end
    if(io_mAddrStream_fire) begin
      _zz_io_mAddrStream_payload_matchFlag <= 1'b0;
    end
    if(_zz_io_mPattStream_halfPipe_translated_ready_3) begin
      _zz_io_mAddrStream_payload_mAddr_11 <= _zz_io_mAddrStream_payload_mAddr_10;
      _zz_io_mAddrStream_payload_matchFlag_1 <= _zz_io_mAddrStream_payload_matchFlag;
    end
  end


endmodule
