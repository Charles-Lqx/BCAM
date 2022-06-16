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

  reg        [3:0]    _zz__zz_1_port0;
  reg        [3:0]    _zz__zz_2_port0;
  reg        [3:0]    _zz__zz_2_port1;
  wire       [3:0]    _zz__zz_io_mAddrStream_payload_mAddr_2;
  reg        [1:0]    _zz_when_BCAM_l129_5;
  wire       [1:0]    _zz_when_BCAM_l129_6;
  reg        [1:0]    _zz_when_BCAM_l129_1_1;
  wire       [1:0]    _zz_when_BCAM_l129_1_2;
  wire       [1:0]    _zz__zz_io_mAddrStream_payload_mAddr_11;
  wire       [1:0]    _zz__zz_io_mAddrStream_payload_mAddr_11_1;
  wire       [2:0]    _zz__zz_when_BCAM_l171_2;
  wire       [3:0]    _zz__zz_1_port;
  wire                _zz__zz_1_port_1;
  wire       [3:0]    _zz__zz_1_port_2;
  wire                _zz__zz_1_port_3;
  wire       [1:0]    _zz__zz_2_port;
  wire       [3:0]    _zz__zz_2_port_1;
  wire                _zz__zz_2_port_2;
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
  wire                when_BCAM_l59;
  reg                 _zz_3;
  reg                 _zz_4;
  wire                io_mPattStream_halfPipe_valid;
  wire                io_mPattStream_halfPipe_ready;
  wire       [1:0]    io_mPattStream_halfPipe_payload_mPatt;
  reg                 io_mPattStream_rValid;
  wire                io_mPattStream_halfPipe_fire;
  reg        [1:0]    io_mPattStream_rData_mPatt;
  wire       [1:0]    _zz_when_BCAM_l129;
  reg        [1:0]    _zz_when_BCAM_l129_1;
  reg        [1:0]    _zz_when_BCAM_l129_2;
  wire                io_mPattStream_halfPipe_translated_valid;
  wire                io_mPattStream_halfPipe_translated_ready;
  wire       [1:0]    io_mPattStream_halfPipe_translated_payload;
  wire                _zz_io_mAddrStream_valid;
  wire                _zz_io_mPattStream_halfPipe_translated_ready;
  wire       [3:0]    _zz_io_mAddrStream_payload_mAddr;
  reg                 _zz_io_mAddrStream_valid_1;
  wire       [3:0]    _zz_io_mAddrStream_payload_mAddr_1;
  wire       [3:0]    _zz_io_mAddrStream_payload_mAddr_2;
  wire                _zz_io_mAddrStream_payload_mAddr_3;
  wire                _zz_io_mAddrStream_payload_mAddr_4;
  wire                _zz_io_mAddrStream_payload_mAddr_5;
  wire       [1:0]    _zz_io_mAddrStream_payload_mAddr_6;
  reg        [1:0]    _zz_io_mAddrStream_payload_mAddr_7;
  reg                 _zz_io_mAddrStream_payload_matchFlag;
  wire                io_mAddrStream_fire;
  wire                _zz_io_mPattStream_halfPipe_translated_ready_1;
  wire       [1:0]    _zz_when_BCAM_l129_3;
  wire                _zz_io_mAddrStream_valid_2;
  wire                _zz_io_mPattStream_halfPipe_translated_ready_2;
  wire       [3:0]    _zz_when_BCAM_l129_4;
  reg                 _zz_io_mAddrStream_valid_3;
  reg                 _zz_io_mAddrStream_payload_mAddr_8;
  reg                 _zz_io_mAddrStream_payload_mAddr_9;
  wire                when_BCAM_l129;
  wire                when_BCAM_l129_1;
  reg                 _zz_io_mPattStream_halfPipe_translated_ready_3;
  wire       [1:0]    _zz_io_mAddrStream_payload_mAddr_10;
  wire                _zz_io_mAddrStream_payload_mAddr_11;
  wire                _zz_io_mAddrStream_valid_4;
  reg                 _zz_io_mAddrStream_valid_5;
  reg        [2:0]    _zz_io_mAddrStream_payload_mAddr_12;
  reg                 _zz_io_mAddrStream_payload_matchFlag_1;
  wire                when_Stream_l368;
  wire       [3:0]    _zz_5;
  wire       [1:0]    _zz_6;
  wire                _zz_halfRateWStream_ready;
  wire       [1:0]    _zz_when_BCAM_l171;
  wire       [3:0]    _zz_when_BCAM_l171_1;
  reg                 _zz_halfRateWStream_ready_1;
  wire       [0:0]    switch_Misc_l211;
  reg        [1:0]    _zz_when_BCAM_l171_2;
  wire       [1:0]    _zz_7;
  wire                halfRateWStream_fire_3;
  reg                 _zz_8;
  reg                 _zz_9;
  wire                when_BCAM_l171;
  wire                when_BCAM_l171_1;
  wire       [1:0]    _zz_10;
  wire                halfRateWStream_fire_4;
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol0 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol1 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol2 [0:3];
  (* ram_style = "block" *) reg [0:0] _zz_1_symbol3 [0:3];
  reg [0:0] _zz__zz_1symbol_read;
  reg [0:0] _zz__zz_1symbol_read_1;
  reg [0:0] _zz__zz_1symbol_read_2;
  reg [0:0] _zz__zz_1symbol_read_3;
  (* ram_style = "block" *) reg [1:0] _zz_2_symbol0 [0:3];
  (* ram_style = "block" *) reg [1:0] _zz_2_symbol1 [0:3];
  reg [1:0] _zz__zz_2symbol_read;
  reg [1:0] _zz__zz_2symbol_read_1;
  reg [1:0] _zz__zz_2symbol_read_2;
  reg [1:0] _zz__zz_2symbol_read_3;

  assign _zz__zz_io_mAddrStream_payload_mAddr_2 = (_zz_io_mAddrStream_payload_mAddr_1 - 4'b0001);
  assign _zz__zz_io_mAddrStream_payload_mAddr_11 = (_zz_io_mAddrStream_payload_mAddr_10 & (~ _zz__zz_io_mAddrStream_payload_mAddr_11_1));
  assign _zz__zz_io_mAddrStream_payload_mAddr_11_1 = (_zz_io_mAddrStream_payload_mAddr_10 - 2'b01);
  assign _zz__zz_when_BCAM_l171_2 = (1'b1 * 2'b10);
  assign _zz__zz_1_port = 4'b1111;
  assign _zz__zz_1_port_1 = (_zz_4 && halfRateWStream_fire_3);
  assign _zz__zz_1_port_2 = 4'b0000;
  assign _zz__zz_1_port_3 = ((! ((_zz_10[0] || _zz_10[1]) ? 1'b1 : _zz_4)) && continueWr);
  assign _zz__zz_2_port = halfRateWStream_payload_wAddr[1'b1 +: 2];
  assign _zz__zz_2_port_1 = {halfRateWStream_payload_wPatt,halfRateWStream_payload_wPatt};
  assign _zz__zz_2_port_2 = (_zz_3 && continueWr);
  assign _zz_when_BCAM_l129_6 = 2'b10;
  assign _zz_when_BCAM_l129_1_2 = 2'b10;
  initial begin
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel__zz_1_symbol0.bin",_zz_1_symbol0);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel__zz_1_symbol1.bin",_zz_1_symbol1);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel__zz_1_symbol2.bin",_zz_1_symbol2);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel__zz_1_symbol3.bin",_zz_1_symbol3);
  end
  always @(*) begin
    _zz__zz_1_port0 = {_zz__zz_1symbol_read_3, _zz__zz_1symbol_read_2, _zz__zz_1symbol_read_1, _zz__zz_1symbol_read};
  end
  always @(posedge clk) begin
    if(io_mPattStream_halfPipe_translated_ready) begin
      _zz__zz_1symbol_read <= _zz_1_symbol0[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_1 <= _zz_1_symbol1[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_2 <= _zz_1_symbol2[io_mPattStream_halfPipe_translated_payload];
      _zz__zz_1symbol_read_3 <= _zz_1_symbol3[io_mPattStream_halfPipe_translated_payload];
    end
  end

  always @(posedge clk) begin
    if(_zz_5[0] && _zz__zz_1_port_1) begin
      _zz_1_symbol0[_zz_7] <= _zz__zz_1_port[0 : 0];
    end
    if(_zz_5[1] && _zz__zz_1_port_1) begin
      _zz_1_symbol1[_zz_7] <= _zz__zz_1_port[1 : 1];
    end
    if(_zz_5[2] && _zz__zz_1_port_1) begin
      _zz_1_symbol2[_zz_7] <= _zz__zz_1_port[2 : 2];
    end
    if(_zz_5[3] && _zz__zz_1_port_1) begin
      _zz_1_symbol3[_zz_7] <= _zz__zz_1_port[3 : 3];
    end
  end

  always @(posedge clk) begin
    if(_zz_5[0] && _zz__zz_1_port_3) begin
      _zz_1_symbol0[_zz_7] <= _zz__zz_1_port_2[0 : 0];
    end
    if(_zz_5[1] && _zz__zz_1_port_3) begin
      _zz_1_symbol1[_zz_7] <= _zz__zz_1_port_2[1 : 1];
    end
    if(_zz_5[2] && _zz__zz_1_port_3) begin
      _zz_1_symbol2[_zz_7] <= _zz__zz_1_port_2[2 : 2];
    end
    if(_zz_5[3] && _zz__zz_1_port_3) begin
      _zz_1_symbol3[_zz_7] <= _zz__zz_1_port_2[3 : 3];
    end
  end

  initial begin
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel__zz_2_symbol0.bin",_zz_2_symbol0);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel__zz_2_symbol1.bin",_zz_2_symbol1);
  end
  always @(*) begin
    _zz__zz_2_port0 = {_zz__zz_2symbol_read_1, _zz__zz_2symbol_read};
  end
  always @(*) begin
    _zz__zz_2_port1 = {_zz__zz_2symbol_read_3, _zz__zz_2symbol_read_2};
  end
  always @(posedge clk) begin
    if(_zz_io_mPattStream_halfPipe_translated_ready_1) begin
      _zz__zz_2symbol_read <= _zz_2_symbol0[_zz_when_BCAM_l129_3];
      _zz__zz_2symbol_read_1 <= _zz_2_symbol1[_zz_when_BCAM_l129_3];
    end
  end

  always @(posedge clk) begin
    if(_zz_halfRateWStream_ready) begin
      _zz__zz_2symbol_read_2 <= _zz_2_symbol0[_zz_when_BCAM_l171];
      _zz__zz_2symbol_read_3 <= _zz_2_symbol1[_zz_when_BCAM_l171];
    end
  end

  always @(posedge clk) begin
    if(_zz_6[0] && _zz__zz_2_port_2) begin
      _zz_2_symbol0[_zz__zz_2_port] <= _zz__zz_2_port_1[1 : 0];
    end
    if(_zz_6[1] && _zz__zz_2_port_2) begin
      _zz_2_symbol1[_zz__zz_2_port] <= _zz__zz_2_port_1[3 : 2];
    end
  end

  always @(*) begin
    case(_zz_when_BCAM_l129_6)
      2'b00 : _zz_when_BCAM_l129_5 = _zz_when_BCAM_l129;
      2'b01 : _zz_when_BCAM_l129_5 = _zz_when_BCAM_l129_1;
      default : _zz_when_BCAM_l129_5 = _zz_when_BCAM_l129_2;
    endcase
  end

  always @(*) begin
    case(_zz_when_BCAM_l129_1_2)
      2'b00 : _zz_when_BCAM_l129_1_1 = _zz_when_BCAM_l129;
      2'b01 : _zz_when_BCAM_l129_1_1 = _zz_when_BCAM_l129_1;
      default : _zz_when_BCAM_l129_1_1 = _zz_when_BCAM_l129_2;
    endcase
  end

  assign halfRateWStream_fire = (halfRateWStream_valid && halfRateWStream_ready);
  assign io_wStream_ready = (! io_wStream_rValid);
  assign halfRateWStream_valid = io_wStream_rValid;
  assign halfRateWStream_payload_wAddr = io_wStream_rData_wAddr;
  assign halfRateWStream_payload_wPatt = io_wStream_rData_wPatt;
  assign halfRateWStream_payload_wr = io_wStream_rData_wr;
  assign halfRateWStream_fire_1 = (halfRateWStream_valid && halfRateWStream_ready);
  assign halfRateWStream_fire_2 = (halfRateWStream_valid && halfRateWStream_ready);
  assign when_BCAM_l59 = (! halfRateWStream_fire_2);
  assign io_mPattStream_halfPipe_fire = (io_mPattStream_halfPipe_valid && io_mPattStream_halfPipe_ready);
  assign io_mPattStream_ready = (! io_mPattStream_rValid);
  assign io_mPattStream_halfPipe_valid = io_mPattStream_rValid;
  assign io_mPattStream_halfPipe_payload_mPatt = io_mPattStream_rData_mPatt;
  assign _zz_when_BCAM_l129 = io_mPattStream_halfPipe_payload_mPatt;
  assign io_mPattStream_halfPipe_translated_valid = io_mPattStream_halfPipe_valid;
  assign io_mPattStream_halfPipe_ready = io_mPattStream_halfPipe_translated_ready;
  assign io_mPattStream_halfPipe_translated_payload = io_mPattStream_halfPipe_payload_mPatt;
  assign io_mPattStream_halfPipe_translated_ready = ((! _zz_io_mAddrStream_valid) || _zz_io_mPattStream_halfPipe_translated_ready);
  assign _zz_io_mAddrStream_valid = _zz_io_mAddrStream_valid_1;
  assign _zz_io_mAddrStream_payload_mAddr = _zz__zz_1_port0;
  assign _zz_io_mAddrStream_payload_mAddr_1 = _zz_io_mAddrStream_payload_mAddr;
  assign _zz_io_mAddrStream_payload_mAddr_2 = (_zz_io_mAddrStream_payload_mAddr_1 & (~ _zz__zz_io_mAddrStream_payload_mAddr_2));
  assign _zz_io_mAddrStream_payload_mAddr_3 = _zz_io_mAddrStream_payload_mAddr_2[3];
  assign _zz_io_mAddrStream_payload_mAddr_4 = (_zz_io_mAddrStream_payload_mAddr_2[1] || _zz_io_mAddrStream_payload_mAddr_3);
  assign _zz_io_mAddrStream_payload_mAddr_5 = (_zz_io_mAddrStream_payload_mAddr_2[2] || _zz_io_mAddrStream_payload_mAddr_3);
  assign _zz_io_mAddrStream_payload_mAddr_6 = {_zz_io_mAddrStream_payload_mAddr_5,_zz_io_mAddrStream_payload_mAddr_4};
  assign io_mAddrStream_fire = (io_mAddrStream_valid && io_mAddrStream_ready);
  assign _zz_io_mPattStream_halfPipe_translated_ready = _zz_io_mPattStream_halfPipe_translated_ready_1;
  assign _zz_when_BCAM_l129_3 = _zz_io_mAddrStream_payload_mAddr_6;
  assign _zz_io_mPattStream_halfPipe_translated_ready_1 = ((! _zz_io_mAddrStream_valid_2) || _zz_io_mPattStream_halfPipe_translated_ready_2);
  assign _zz_io_mAddrStream_valid_2 = _zz_io_mAddrStream_valid_3;
  assign _zz_when_BCAM_l129_4 = _zz__zz_2_port0;
  always @(*) begin
    _zz_io_mAddrStream_payload_mAddr_8 = 1'b0;
    if((_zz_io_mAddrStream_valid_2 && _zz_io_mPattStream_halfPipe_translated_ready_2)) begin
      if(when_BCAM_l129) begin
        _zz_io_mAddrStream_payload_mAddr_8 = 1'b1;
      end
    end
  end

  always @(*) begin
    _zz_io_mAddrStream_payload_mAddr_9 = 1'b0;
    if((_zz_io_mAddrStream_valid_2 && _zz_io_mPattStream_halfPipe_translated_ready_2)) begin
      if(when_BCAM_l129_1) begin
        _zz_io_mAddrStream_payload_mAddr_9 = 1'b1;
      end
    end
  end

  assign when_BCAM_l129 = (_zz_when_BCAM_l129_4[1 : 0] == _zz_when_BCAM_l129_5);
  assign when_BCAM_l129_1 = (_zz_when_BCAM_l129_4[2'b10 +: 2] == _zz_when_BCAM_l129_1_1);
  assign _zz_io_mPattStream_halfPipe_translated_ready_2 = _zz_io_mPattStream_halfPipe_translated_ready_3;
  assign _zz_io_mAddrStream_payload_mAddr_10 = {_zz_io_mAddrStream_payload_mAddr_9,_zz_io_mAddrStream_payload_mAddr_8};
  assign _zz_io_mAddrStream_payload_mAddr_11 = _zz__zz_io_mAddrStream_payload_mAddr_11[1];
  always @(*) begin
    _zz_io_mPattStream_halfPipe_translated_ready_3 = io_mAddrStream_ready;
    if(when_Stream_l368) begin
      _zz_io_mPattStream_halfPipe_translated_ready_3 = 1'b1;
    end
  end

  assign when_Stream_l368 = (! _zz_io_mAddrStream_valid_4);
  assign _zz_io_mAddrStream_valid_4 = _zz_io_mAddrStream_valid_5;
  assign io_mAddrStream_valid = _zz_io_mAddrStream_valid_4;
  assign io_mAddrStream_payload_mAddr = _zz_io_mAddrStream_payload_mAddr_12;
  assign io_mAddrStream_payload_matchFlag = _zz_io_mAddrStream_payload_matchFlag_1;
  assign _zz_5 = ({3'd0,1'b1} <<< halfRateWStream_payload_wAddr[1'b1 +: 2]);
  assign _zz_6 = ({1'd0,1'b1} <<< halfRateWStream_payload_wAddr[0 : 0]);
  assign halfRateWStream_ready = _zz_halfRateWStream_ready;
  assign _zz_when_BCAM_l171 = halfRateWStream_payload_wAddr[2 : 1];
  assign _zz_halfRateWStream_ready = ((! _zz_halfRateWStream_ready_1) || 1'b1);
  assign _zz_when_BCAM_l171_1 = _zz__zz_2_port1;
  assign switch_Misc_l211 = halfRateWStream_payload_wAddr[0 : 0];
  always @(*) begin
    case(switch_Misc_l211)
      1'b0 : begin
        _zz_when_BCAM_l171_2 = _zz_when_BCAM_l171_1[2'b00 +: 2];
      end
      default : begin
        _zz_when_BCAM_l171_2 = _zz_when_BCAM_l171_1[_zz__zz_when_BCAM_l171_2 +: 2];
      end
    endcase
  end

  assign _zz_7 = (_zz_4 ? halfRateWStream_payload_wPatt : _zz_when_BCAM_l171_2);
  assign halfRateWStream_fire_3 = (halfRateWStream_valid && halfRateWStream_ready);
  always @(*) begin
    _zz_8 = 1'b0;
    if(when_BCAM_l171) begin
      _zz_8 = 1'b1;
    end
  end

  always @(*) begin
    _zz_9 = 1'b0;
    if(when_BCAM_l171_1) begin
      _zz_9 = 1'b1;
    end
  end

  assign when_BCAM_l171 = (_zz_when_BCAM_l171_1[1 : 0] == _zz_when_BCAM_l171_2);
  assign when_BCAM_l171_1 = (_zz_when_BCAM_l171_1[2'b10 +: 2] == _zz_when_BCAM_l171_2);
  assign _zz_10 = ({_zz_9,_zz_8} & (~ _zz_6));
  assign halfRateWStream_fire_4 = (halfRateWStream_valid && halfRateWStream_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      io_wStream_rValid <= 1'b0;
      continueWr <= 1'b0;
      _zz_3 <= 1'b0;
      _zz_4 <= 1'b1;
      io_mPattStream_rValid <= 1'b0;
      _zz_io_mAddrStream_valid_1 <= 1'b0;
      _zz_io_mAddrStream_payload_mAddr_7 <= 2'b00;
      _zz_io_mAddrStream_valid_3 <= 1'b0;
      _zz_io_mAddrStream_valid_5 <= 1'b0;
      _zz_halfRateWStream_ready_1 <= 1'b0;
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
      if(when_BCAM_l59) begin
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
      _zz_io_mAddrStream_payload_mAddr_7 <= _zz_io_mAddrStream_payload_mAddr_6;
      if(_zz_io_mPattStream_halfPipe_translated_ready_2) begin
        _zz_io_mAddrStream_valid_3 <= 1'b0;
      end
      if(_zz_io_mPattStream_halfPipe_translated_ready_1) begin
        _zz_io_mAddrStream_valid_3 <= _zz_io_mAddrStream_valid;
      end
      if(_zz_io_mPattStream_halfPipe_translated_ready_3) begin
        _zz_io_mAddrStream_valid_5 <= _zz_io_mAddrStream_valid_2;
      end
      if(1'b1) begin
        _zz_halfRateWStream_ready_1 <= 1'b0;
      end
      if(_zz_halfRateWStream_ready) begin
        _zz_halfRateWStream_ready_1 <= halfRateWStream_valid;
      end
      if(halfRateWStream_fire_4) begin
        _zz_3 <= 1'b1;
        _zz_4 <= 1'b0;
      end else begin
        _zz_3 <= 1'b0;
        _zz_4 <= 1'b1;
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
    _zz_when_BCAM_l129_1 <= _zz_when_BCAM_l129;
    _zz_when_BCAM_l129_2 <= _zz_when_BCAM_l129_1;
    if((_zz_io_mAddrStream_valid && _zz_io_mPattStream_halfPipe_translated_ready)) begin
      _zz_io_mAddrStream_payload_matchFlag <= ((_zz_io_mAddrStream_payload_mAddr[0] || _zz_io_mAddrStream_payload_mAddr[1]) || (_zz_io_mAddrStream_payload_mAddr[2] || _zz_io_mAddrStream_payload_mAddr[3]));
    end
    if(io_mAddrStream_fire) begin
      _zz_io_mAddrStream_payload_matchFlag <= 1'b0;
    end
    if(_zz_io_mPattStream_halfPipe_translated_ready_3) begin
      _zz_io_mAddrStream_payload_mAddr_12 <= {_zz_io_mAddrStream_payload_mAddr_7,_zz_io_mAddrStream_payload_mAddr_11};
      _zz_io_mAddrStream_payload_matchFlag_1 <= _zz_io_mAddrStream_payload_matchFlag;
    end
  end


endmodule
