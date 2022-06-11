// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : BCAM

`timescale 1ns/1ps

module BCAM (
  input               io_WStream_valid,
  output reg          io_WStream_ready,
  input      [2:0]    io_WStream_payload_WAddr,
  input      [1:0]    io_WStream_payload_WPatt,
  input               io_WStream_payload_Wr,
  input               io_MPattStream_valid,
  output              io_MPattStream_ready,
  input      [1:0]    io_MPattStream_payload_MPatt,
  output              io_MAddrStream_valid,
  input               io_MAddrStream_ready,
  output     [2:0]    io_MAddrStream_payload_MAddr,
  output              io_MAddrStream_payload_Match,
  input               clk,
  input               reset
);

  reg        [7:0]    _zz__zz_1_port2;
  reg        [1:0]    _zz__zz_2_port1;
  wire       [1:0]    _zz__zz_2_port;
  wire       [7:0]    _zz__zz_1_port;
  wire       [7:0]    _zz__zz_1_port_1;
  wire                _zz__zz_1_port_2;
  wire       [7:0]    _zz__zz_1_port_3;
  wire       [7:0]    _zz__zz_1_port_4;
  wire                _zz__zz_1_port_5;
  wire       [7:0]    _zz__zz_io_MAddrStream_payload_MAddr_2;
  reg                 when_BCAM_l79;
  reg                 when_BCAM_l95;
  reg        [2:0]    _zz_3;
  reg        [1:0]    _zz_4;
  reg                 _zz_5;
  reg        [2:0]    _zz_6;
  reg        [1:0]    _zz_7;
  wire                io_WStream_fire;
  reg                 _zz_8;
  reg                 _zz_9;
  wire                _zz_10;
  wire       [1:0]    _zz_11;
  reg                 _zz_io_MAddrStream_valid;
  wire       [7:0]    _zz_io_MAddrStream_payload_MAddr;
  wire                io_MAddrStream_isFree;
  wire       [7:0]    _zz_io_MAddrStream_payload_MAddr_1;
  wire       [7:0]    _zz_io_MAddrStream_payload_MAddr_2;
  wire                _zz_io_MAddrStream_payload_MAddr_3;
  wire                _zz_io_MAddrStream_payload_MAddr_4;
  wire                _zz_io_MAddrStream_payload_MAddr_5;
  wire                _zz_io_MAddrStream_payload_MAddr_6;
  wire                _zz_io_MAddrStream_payload_MAddr_7;
  wire                _zz_io_MAddrStream_payload_MAddr_8;
  wire                _zz_io_MAddrStream_payload_MAddr_9;
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

  assign _zz__zz_1_port_1 = ({7'd0,1'b1} <<< _zz_3);
  assign _zz__zz_1_port_4 = ({7'd0,1'b1} <<< _zz_6);
  assign _zz__zz_io_MAddrStream_payload_MAddr_2 = (_zz_io_MAddrStream_payload_MAddr_1 - 8'h01);
  assign _zz__zz_1_port = 8'hff;
  assign _zz__zz_1_port_2 = (_zz_9 && when_BCAM_l95);
  assign _zz__zz_1_port_3 = 8'h0;
  assign _zz__zz_1_port_5 = ((! _zz_9) && _zz_5);
  assign _zz__zz_2_port = _zz_7;
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
    _zz__zz_1_port2 = {_zz__zz_1symbol_read_7, _zz__zz_1symbol_read_6, _zz__zz_1symbol_read_5, _zz__zz_1symbol_read_4, _zz__zz_1symbol_read_3, _zz__zz_1symbol_read_2, _zz__zz_1symbol_read_1, _zz__zz_1symbol_read};
  end
  always @(posedge clk) begin
    if(_zz__zz_1_port_1[0] && _zz__zz_1_port_2) begin
      _zz_1_symbol0[_zz_11] <= _zz__zz_1_port[0 : 0];
    end
    if(_zz__zz_1_port_1[1] && _zz__zz_1_port_2) begin
      _zz_1_symbol1[_zz_11] <= _zz__zz_1_port[1 : 1];
    end
    if(_zz__zz_1_port_1[2] && _zz__zz_1_port_2) begin
      _zz_1_symbol2[_zz_11] <= _zz__zz_1_port[2 : 2];
    end
    if(_zz__zz_1_port_1[3] && _zz__zz_1_port_2) begin
      _zz_1_symbol3[_zz_11] <= _zz__zz_1_port[3 : 3];
    end
    if(_zz__zz_1_port_1[4] && _zz__zz_1_port_2) begin
      _zz_1_symbol4[_zz_11] <= _zz__zz_1_port[4 : 4];
    end
    if(_zz__zz_1_port_1[5] && _zz__zz_1_port_2) begin
      _zz_1_symbol5[_zz_11] <= _zz__zz_1_port[5 : 5];
    end
    if(_zz__zz_1_port_1[6] && _zz__zz_1_port_2) begin
      _zz_1_symbol6[_zz_11] <= _zz__zz_1_port[6 : 6];
    end
    if(_zz__zz_1_port_1[7] && _zz__zz_1_port_2) begin
      _zz_1_symbol7[_zz_11] <= _zz__zz_1_port[7 : 7];
    end
  end

  always @(posedge clk) begin
    if(_zz__zz_1_port_4[0] && _zz__zz_1_port_5) begin
      _zz_1_symbol0[_zz_11] <= _zz__zz_1_port_3[0 : 0];
    end
    if(_zz__zz_1_port_4[1] && _zz__zz_1_port_5) begin
      _zz_1_symbol1[_zz_11] <= _zz__zz_1_port_3[1 : 1];
    end
    if(_zz__zz_1_port_4[2] && _zz__zz_1_port_5) begin
      _zz_1_symbol2[_zz_11] <= _zz__zz_1_port_3[2 : 2];
    end
    if(_zz__zz_1_port_4[3] && _zz__zz_1_port_5) begin
      _zz_1_symbol3[_zz_11] <= _zz__zz_1_port_3[3 : 3];
    end
    if(_zz__zz_1_port_4[4] && _zz__zz_1_port_5) begin
      _zz_1_symbol4[_zz_11] <= _zz__zz_1_port_3[4 : 4];
    end
    if(_zz__zz_1_port_4[5] && _zz__zz_1_port_5) begin
      _zz_1_symbol5[_zz_11] <= _zz__zz_1_port_3[5 : 5];
    end
    if(_zz__zz_1_port_4[6] && _zz__zz_1_port_5) begin
      _zz_1_symbol6[_zz_11] <= _zz__zz_1_port_3[6 : 6];
    end
    if(_zz__zz_1_port_4[7] && _zz__zz_1_port_5) begin
      _zz_1_symbol7[_zz_11] <= _zz__zz_1_port_3[7 : 7];
    end
  end

  always @(posedge clk) begin
    if(io_MPattStream_ready) begin
      _zz__zz_1symbol_read <= _zz_1_symbol0[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_1 <= _zz_1_symbol1[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_2 <= _zz_1_symbol2[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_3 <= _zz_1_symbol3[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_4 <= _zz_1_symbol4[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_5 <= _zz_1_symbol5[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_6 <= _zz_1_symbol6[io_MPattStream_payload_MPatt];
      _zz__zz_1symbol_read_7 <= _zz_1_symbol7[io_MPattStream_payload_MPatt];
    end
  end

  initial begin
    $readmemb("BCAM.v_toplevel__zz_2.bin",_zz_2);
  end
  always @(posedge clk) begin
    if(_zz_8) begin
      _zz_2[_zz_6] <= _zz__zz_2_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_10) begin
      _zz__zz_2_port1 <= _zz_2[_zz_3];
    end
  end

  assign io_WStream_fire = (io_WStream_valid && io_WStream_ready);
  always @(*) begin
    io_WStream_ready = 1'b0;
    if(when_BCAM_l79) begin
      io_WStream_ready = 1'b1;
    end
  end

  assign _zz_10 = (! _zz_8);
  assign _zz_11 = (_zz_9 ? _zz_4 : _zz__zz_2_port1);
  assign _zz_io_MAddrStream_payload_MAddr = _zz__zz_1_port2;
  assign io_MAddrStream_isFree = ((! io_MAddrStream_valid) || io_MAddrStream_ready);
  assign io_MPattStream_ready = io_MAddrStream_isFree;
  assign io_MAddrStream_valid = _zz_io_MAddrStream_valid;
  assign _zz_io_MAddrStream_payload_MAddr_1 = _zz_io_MAddrStream_payload_MAddr;
  assign _zz_io_MAddrStream_payload_MAddr_2 = (_zz_io_MAddrStream_payload_MAddr_1 & (~ _zz__zz_io_MAddrStream_payload_MAddr_2));
  assign _zz_io_MAddrStream_payload_MAddr_3 = _zz_io_MAddrStream_payload_MAddr_2[3];
  assign _zz_io_MAddrStream_payload_MAddr_4 = _zz_io_MAddrStream_payload_MAddr_2[5];
  assign _zz_io_MAddrStream_payload_MAddr_5 = _zz_io_MAddrStream_payload_MAddr_2[6];
  assign _zz_io_MAddrStream_payload_MAddr_6 = _zz_io_MAddrStream_payload_MAddr_2[7];
  assign _zz_io_MAddrStream_payload_MAddr_7 = (((_zz_io_MAddrStream_payload_MAddr_2[1] || _zz_io_MAddrStream_payload_MAddr_3) || _zz_io_MAddrStream_payload_MAddr_4) || _zz_io_MAddrStream_payload_MAddr_6);
  assign _zz_io_MAddrStream_payload_MAddr_8 = (((_zz_io_MAddrStream_payload_MAddr_2[2] || _zz_io_MAddrStream_payload_MAddr_3) || _zz_io_MAddrStream_payload_MAddr_5) || _zz_io_MAddrStream_payload_MAddr_6);
  assign _zz_io_MAddrStream_payload_MAddr_9 = (((_zz_io_MAddrStream_payload_MAddr_2[4] || _zz_io_MAddrStream_payload_MAddr_4) || _zz_io_MAddrStream_payload_MAddr_5) || _zz_io_MAddrStream_payload_MAddr_6);
  assign io_MAddrStream_payload_MAddr = {_zz_io_MAddrStream_payload_MAddr_9,{_zz_io_MAddrStream_payload_MAddr_8,_zz_io_MAddrStream_payload_MAddr_7}};
  assign io_MAddrStream_payload_Match = (((_zz_io_MAddrStream_payload_MAddr[0] || _zz_io_MAddrStream_payload_MAddr[1]) || (_zz_io_MAddrStream_payload_MAddr[2] || _zz_io_MAddrStream_payload_MAddr[3])) || ((_zz_io_MAddrStream_payload_MAddr[4] || _zz_io_MAddrStream_payload_MAddr[5]) || (_zz_io_MAddrStream_payload_MAddr[6] || _zz_io_MAddrStream_payload_MAddr[7])));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      when_BCAM_l79 <= 1'b1;
      when_BCAM_l95 <= 1'b0;
      _zz_3 <= 3'b000;
      _zz_4 <= 2'b00;
      _zz_5 <= 1'b0;
      _zz_6 <= 3'b000;
      _zz_7 <= 2'b00;
      _zz_8 <= 1'b0;
      _zz_9 <= 1'b1;
      _zz_io_MAddrStream_valid <= 1'b0;
    end else begin
      if(io_WStream_fire) begin
        when_BCAM_l79 <= 1'b0;
        when_BCAM_l95 <= io_WStream_payload_Wr;
        _zz_3 <= io_WStream_payload_WAddr;
        _zz_4 <= io_WStream_payload_WPatt;
      end else begin
        when_BCAM_l95 <= 1'b0;
        when_BCAM_l79 <= 1'b1;
      end
      _zz_5 <= when_BCAM_l95;
      _zz_6 <= _zz_3;
      _zz_7 <= _zz_4;
      if(when_BCAM_l95) begin
        _zz_9 <= 1'b0;
        _zz_8 <= 1'b1;
      end else begin
        _zz_9 <= 1'b1;
        _zz_8 <= 1'b0;
      end
      if(io_MAddrStream_ready) begin
        _zz_io_MAddrStream_valid <= 1'b0;
      end
      if(io_MPattStream_ready) begin
        _zz_io_MAddrStream_valid <= io_MPattStream_valid;
      end
    end
  end


endmodule
