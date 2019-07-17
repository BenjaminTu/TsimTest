module VTASimShell( // @[:@27.2]
  input         clock, // @[:@28.4]
  input         reset, // @[:@29.4]
  output        host_req_valid, // @[:@30.4]
  output        host_req_opcode, // @[:@30.4]
  output [7:0]  host_req_addr, // @[:@30.4]
  output [31:0] host_req_value, // @[:@30.4]
  input         host_req_deq, // @[:@30.4]
  input         host_resp_valid, // @[:@30.4]
  input  [31:0] host_resp_bits, // @[:@30.4]
  input         mem_req_valid, // @[:@31.4]
  input         mem_req_opcode, // @[:@31.4]
  input  [63:0] mem_req_addr, // @[:@31.4]
  input         mem_wr_valid, // @[:@31.4]
  input  [63:0] mem_wr_bits, // @[:@31.4]
  input         mem_rd_ready, // @[:@31.4]
  output        mem_rd_valid, // @[:@31.4]
  output [63:0] mem_rd_bits, // @[:@31.4]
  input         sim_clock, // @[:@32.4]
  output        sim_wait // @[:@33.4]
);
  wire  mod_sim_dpi_wait; // @[TestAccel.scala 37:23:@35.4]
  wire  mod_sim_reset; // @[TestAccel.scala 37:23:@35.4]
  wire  mod_sim_clock; // @[TestAccel.scala 37:23:@35.4]
  wire  mod_host_dpi_req_valid; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_dpi_req_opcode; // @[TestAccel.scala 38:24:@39.4]
  wire [7:0] mod_host_dpi_req_addr; // @[TestAccel.scala 38:24:@39.4]
  wire [31:0] mod_host_dpi_req_value; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_dpi_req_deq; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_dpi_resp_valid; // @[TestAccel.scala 38:24:@39.4]
  wire [31:0] mod_host_dpi_resp_bits; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_reset; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_clock; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_mem_dpi_req_valid; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_dpi_req_opcode; // @[TestAccel.scala 39:23:@43.4]
  wire [7:0] mod_mem_dpi_req_len; // @[TestAccel.scala 39:23:@43.4]
  wire [63:0] mod_mem_dpi_req_addr; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_dpi_wr_valid; // @[TestAccel.scala 39:23:@43.4]
  wire [63:0] mod_mem_dpi_wr_bits; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_dpi_rd_ready; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_dpi_rd_valid; // @[TestAccel.scala 39:23:@43.4]
  wire [63:0] mod_mem_dpi_rd_bits; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_reset; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_clock; // @[TestAccel.scala 39:23:@43.4]
  VTASimDPI mod_sim ( // @[TestAccel.scala 37:23:@35.4]
    .dpi_wait(mod_sim_dpi_wait),
    .reset(mod_sim_reset),
    .clock(mod_sim_clock)
  );
  VTAHostDPI mod_host ( // @[TestAccel.scala 38:24:@39.4]
    .dpi_req_valid(mod_host_dpi_req_valid),
    .dpi_req_opcode(mod_host_dpi_req_opcode),
    .dpi_req_addr(mod_host_dpi_req_addr),
    .dpi_req_value(mod_host_dpi_req_value),
    .dpi_req_deq(mod_host_dpi_req_deq),
    .dpi_resp_valid(mod_host_dpi_resp_valid),
    .dpi_resp_bits(mod_host_dpi_resp_bits),
    .reset(mod_host_reset),
    .clock(mod_host_clock)
  );
  VTAMemDPI mod_mem ( // @[TestAccel.scala 39:23:@43.4]
    .dpi_req_valid(mod_mem_dpi_req_valid),
    .dpi_req_opcode(mod_mem_dpi_req_opcode),
    .dpi_req_len(mod_mem_dpi_req_len),
    .dpi_req_addr(mod_mem_dpi_req_addr),
    .dpi_wr_valid(mod_mem_dpi_wr_valid),
    .dpi_wr_bits(mod_mem_dpi_wr_bits),
    .dpi_rd_ready(mod_mem_dpi_rd_ready),
    .dpi_rd_valid(mod_mem_dpi_rd_valid),
    .dpi_rd_bits(mod_mem_dpi_rd_bits),
    .reset(mod_mem_reset),
    .clock(mod_mem_clock)
  );
  assign host_req_valid = mod_host_dpi_req_valid; // @[TestAccel.scala 45:8:@66.4]
  assign host_req_opcode = mod_host_dpi_req_opcode; // @[TestAccel.scala 45:8:@65.4]
  assign host_req_addr = mod_host_dpi_req_addr; // @[TestAccel.scala 45:8:@64.4]
  assign host_req_value = mod_host_dpi_req_value; // @[TestAccel.scala 45:8:@63.4]
  assign mem_rd_valid = mod_mem_dpi_rd_valid; // @[TestAccel.scala 42:18:@50.4]
  assign mem_rd_bits = mod_mem_dpi_rd_bits; // @[TestAccel.scala 42:18:@49.4]
  assign sim_wait = mod_sim_dpi_wait; // @[TestAccel.scala 48:12:@69.4]
  assign mod_sim_reset = reset; // @[TestAccel.scala 47:20:@68.4]
  assign mod_sim_clock = sim_clock; // @[TestAccel.scala 46:20:@67.4]
  assign mod_host_dpi_req_deq = host_req_deq; // @[TestAccel.scala 45:8:@62.4]
  assign mod_host_dpi_resp_valid = host_resp_valid; // @[TestAccel.scala 45:8:@61.4]
  assign mod_host_dpi_resp_bits = host_resp_bits; // @[TestAccel.scala 45:8:@60.4]
  assign mod_host_reset = reset; // @[TestAccel.scala 44:21:@59.4]
  assign mod_host_clock = clock; // @[TestAccel.scala 43:21:@58.4]
  assign mod_mem_dpi_req_valid = mem_req_valid; // @[TestAccel.scala 42:18:@57.4]
  assign mod_mem_dpi_req_opcode = mem_req_opcode; // @[TestAccel.scala 42:18:@56.4]
  assign mod_mem_dpi_req_len = 8'h0; // @[TestAccel.scala 42:18:@55.4]
  assign mod_mem_dpi_req_addr = mem_req_addr; // @[TestAccel.scala 42:18:@54.4]
  assign mod_mem_dpi_wr_valid = mem_wr_valid; // @[TestAccel.scala 42:18:@53.4]
  assign mod_mem_dpi_wr_bits = mem_wr_bits; // @[TestAccel.scala 42:18:@52.4]
  assign mod_mem_dpi_rd_ready = mem_rd_ready; // @[TestAccel.scala 42:18:@51.4]
  assign mod_mem_reset = reset; // @[TestAccel.scala 41:20:@48.4]
  assign mod_mem_clock = clock; // @[TestAccel.scala 40:20:@47.4]
endmodule
module RegFile( // @[:@71.2]
  input         clock, // @[:@72.4]
  input         reset, // @[:@73.4]
  output        io_launch, // @[:@74.4]
  input         io_finish, // @[:@74.4]
  input         io_ecnt_0_valid, // @[:@74.4]
  input  [31:0] io_ecnt_0_bits, // @[:@74.4]
  output [31:0] io_vals_0, // @[:@74.4]
  output [31:0] io_vals_1, // @[:@74.4]
  output [31:0] io_vals_2, // @[:@74.4]
  output [63:0] io_ptrs_0, // @[:@74.4]
  output [63:0] io_ptrs_1, // @[:@74.4]
  output [63:0] io_ptrs_2, // @[:@74.4]
  input         io_host_req_valid, // @[:@74.4]
  input         io_host_req_opcode, // @[:@74.4]
  input  [7:0]  io_host_req_addr, // @[:@74.4]
  input  [31:0] io_host_req_value, // @[:@74.4]
  output        io_host_req_deq, // @[:@74.4]
  output        io_host_resp_valid, // @[:@74.4]
  output [31:0] io_host_resp_bits // @[:@74.4]
);
  reg  state; // @[RegFile.scala 64:22:@76.4]
  reg [31:0] _RAND_0;
  wire  _T_74; // @[Conditional.scala 37:30:@77.4]
  wire  _T_76; // @[RegFile.scala 68:34:@79.6]
  wire  _T_77; // @[RegFile.scala 68:31:@80.6]
  wire  _GEN_0; // @[RegFile.scala 68:55:@81.6]
  wire  _GEN_1; // @[Conditional.scala 39:67:@87.6]
  wire  _GEN_2; // @[Conditional.scala 40:58:@78.4]
  wire  _T_79; // @[RegFile.scala 77:28:@90.4]
  wire  _T_80; // @[RegFile.scala 77:38:@91.4]
  reg [31:0] reg_0; // @[RegFile.scala 80:37:@95.4]
  reg [31:0] _RAND_1;
  reg [31:0] reg_1; // @[RegFile.scala 80:37:@98.4]
  reg [31:0] _RAND_2;
  reg [31:0] reg_2; // @[RegFile.scala 80:37:@101.4]
  reg [31:0] _RAND_3;
  reg [31:0] reg_3; // @[RegFile.scala 80:37:@104.4]
  reg [31:0] _RAND_4;
  reg [31:0] reg_4; // @[RegFile.scala 80:37:@107.4]
  reg [31:0] _RAND_5;
  reg [31:0] reg_5; // @[RegFile.scala 80:37:@110.4]
  reg [31:0] _RAND_6;
  reg [31:0] reg_6; // @[RegFile.scala 80:37:@113.4]
  reg [31:0] _RAND_7;
  reg [31:0] reg_7; // @[RegFile.scala 80:37:@116.4]
  reg [31:0] _RAND_8;
  reg [31:0] reg_8; // @[RegFile.scala 80:37:@119.4]
  reg [31:0] _RAND_9;
  reg [31:0] reg_9; // @[RegFile.scala 80:37:@122.4]
  reg [31:0] _RAND_10;
  reg [31:0] reg_10; // @[RegFile.scala 80:37:@125.4]
  reg [31:0] _RAND_11;
  reg [31:0] reg_11; // @[RegFile.scala 80:37:@128.4]
  reg [31:0] _RAND_12;
  wire  _T_156; // @[RegFile.scala 89:53:@135.6]
  wire  _T_158; // @[RegFile.scala 90:41:@136.6]
  wire  _T_159; // @[RegFile.scala 90:28:@137.6]
  wire [31:0] _GEN_3; // @[RegFile.scala 90:63:@138.6]
  wire [31:0] _GEN_4; // @[RegFile.scala 87:20:@129.4]
  wire  _T_164; // @[RegFile.scala 98:48:@148.6]
  wire  _T_165; // @[RegFile.scala 98:30:@149.6]
  wire [31:0] _GEN_5; // @[RegFile.scala 98:70:@150.6]
  wire [31:0] _GEN_6; // @[RegFile.scala 95:29:@141.4]
  wire  _T_170; // @[RegFile.scala 105:48:@156.4]
  wire  _T_171; // @[RegFile.scala 105:30:@157.4]
  wire [31:0] _GEN_7; // @[RegFile.scala 105:70:@158.4]
  wire  _T_176; // @[RegFile.scala 105:48:@164.4]
  wire  _T_177; // @[RegFile.scala 105:30:@165.4]
  wire [31:0] _GEN_8; // @[RegFile.scala 105:70:@166.4]
  wire  _T_182; // @[RegFile.scala 105:48:@172.4]
  wire  _T_183; // @[RegFile.scala 105:30:@173.4]
  wire [31:0] _GEN_9; // @[RegFile.scala 105:70:@174.4]
  wire  _T_188; // @[RegFile.scala 105:48:@180.4]
  wire  _T_189; // @[RegFile.scala 105:30:@181.4]
  wire [31:0] _GEN_10; // @[RegFile.scala 105:70:@182.4]
  wire  _T_194; // @[RegFile.scala 105:48:@188.4]
  wire  _T_195; // @[RegFile.scala 105:30:@189.4]
  wire [31:0] _GEN_11; // @[RegFile.scala 105:70:@190.4]
  wire  _T_200; // @[RegFile.scala 105:48:@196.4]
  wire  _T_201; // @[RegFile.scala 105:30:@197.4]
  wire [31:0] _GEN_12; // @[RegFile.scala 105:70:@198.4]
  wire  _T_206; // @[RegFile.scala 105:48:@204.4]
  wire  _T_207; // @[RegFile.scala 105:30:@205.4]
  wire [31:0] _GEN_13; // @[RegFile.scala 105:70:@206.4]
  wire  _T_212; // @[RegFile.scala 105:48:@212.4]
  wire  _T_213; // @[RegFile.scala 105:30:@213.4]
  wire [31:0] _GEN_14; // @[RegFile.scala 105:70:@214.4]
  wire  _T_218; // @[RegFile.scala 105:48:@220.4]
  wire  _T_219; // @[RegFile.scala 105:30:@221.4]
  wire [31:0] _GEN_15; // @[RegFile.scala 105:70:@222.4]
  wire  _T_224; // @[RegFile.scala 105:48:@228.4]
  wire  _T_225; // @[RegFile.scala 105:30:@229.4]
  wire [31:0] _GEN_16; // @[RegFile.scala 105:70:@230.4]
  reg [31:0] rdata; // @[RegFile.scala 110:22:@235.4]
  reg [31:0] _RAND_13;
  wire  _T_235; // @[RegFile.scala 111:46:@239.4]
  wire [31:0] _T_238; // @[Mux.scala 46:16:@242.6]
  wire [31:0] _T_240; // @[Mux.scala 46:16:@244.6]
  wire [31:0] _T_242; // @[Mux.scala 46:16:@246.6]
  wire [31:0] _T_244; // @[Mux.scala 46:16:@248.6]
  wire [31:0] _T_246; // @[Mux.scala 46:16:@250.6]
  wire [31:0] _T_248; // @[Mux.scala 46:16:@252.6]
  wire [31:0] _T_250; // @[Mux.scala 46:16:@254.6]
  wire [31:0] _T_252; // @[Mux.scala 46:16:@256.6]
  wire [31:0] _T_254; // @[Mux.scala 46:16:@258.6]
  wire [31:0] _T_256; // @[Mux.scala 46:16:@260.6]
  wire [31:0] _T_258; // @[Mux.scala 46:16:@262.6]
  wire [31:0] _T_260; // @[Mux.scala 46:16:@264.6]
  wire [31:0] _GEN_17; // @[RegFile.scala 111:70:@240.4]
  assign _T_74 = 1'h0 == state; // @[Conditional.scala 37:30:@77.4]
  assign _T_76 = io_host_req_opcode == 1'h0; // @[RegFile.scala 68:34:@79.6]
  assign _T_77 = io_host_req_valid & _T_76; // @[RegFile.scala 68:31:@80.6]
  assign _GEN_0 = _T_77 ? 1'h1 : state; // @[RegFile.scala 68:55:@81.6]
  assign _GEN_1 = state ? 1'h0 : state; // @[Conditional.scala 39:67:@87.6]
  assign _GEN_2 = _T_74 ? _GEN_0 : _GEN_1; // @[Conditional.scala 40:58:@78.4]
  assign _T_79 = state == 1'h0; // @[RegFile.scala 77:28:@90.4]
  assign _T_80 = _T_79 & io_host_req_valid; // @[RegFile.scala 77:38:@91.4]
  assign _T_156 = _T_80 & io_host_req_opcode; // @[RegFile.scala 89:53:@135.6]
  assign _T_158 = 8'h0 == io_host_req_addr; // @[RegFile.scala 90:41:@136.6]
  assign _T_159 = _T_156 & _T_158; // @[RegFile.scala 90:28:@137.6]
  assign _GEN_3 = _T_159 ? io_host_req_value : reg_0; // @[RegFile.scala 90:63:@138.6]
  assign _GEN_4 = io_finish ? 32'h2 : _GEN_3; // @[RegFile.scala 87:20:@129.4]
  assign _T_164 = 8'h4 == io_host_req_addr; // @[RegFile.scala 98:48:@148.6]
  assign _T_165 = _T_156 & _T_164; // @[RegFile.scala 98:30:@149.6]
  assign _GEN_5 = _T_165 ? io_host_req_value : reg_1; // @[RegFile.scala 98:70:@150.6]
  assign _GEN_6 = io_ecnt_0_valid ? io_ecnt_0_bits : _GEN_5; // @[RegFile.scala 95:29:@141.4]
  assign _T_170 = 8'h8 == io_host_req_addr; // @[RegFile.scala 105:48:@156.4]
  assign _T_171 = _T_156 & _T_170; // @[RegFile.scala 105:30:@157.4]
  assign _GEN_7 = _T_171 ? io_host_req_value : reg_2; // @[RegFile.scala 105:70:@158.4]
  assign _T_176 = 8'hc == io_host_req_addr; // @[RegFile.scala 105:48:@164.4]
  assign _T_177 = _T_156 & _T_176; // @[RegFile.scala 105:30:@165.4]
  assign _GEN_8 = _T_177 ? io_host_req_value : reg_3; // @[RegFile.scala 105:70:@166.4]
  assign _T_182 = 8'h10 == io_host_req_addr; // @[RegFile.scala 105:48:@172.4]
  assign _T_183 = _T_156 & _T_182; // @[RegFile.scala 105:30:@173.4]
  assign _GEN_9 = _T_183 ? io_host_req_value : reg_4; // @[RegFile.scala 105:70:@174.4]
  assign _T_188 = 8'h14 == io_host_req_addr; // @[RegFile.scala 105:48:@180.4]
  assign _T_189 = _T_156 & _T_188; // @[RegFile.scala 105:30:@181.4]
  assign _GEN_10 = _T_189 ? io_host_req_value : reg_5; // @[RegFile.scala 105:70:@182.4]
  assign _T_194 = 8'h18 == io_host_req_addr; // @[RegFile.scala 105:48:@188.4]
  assign _T_195 = _T_156 & _T_194; // @[RegFile.scala 105:30:@189.4]
  assign _GEN_11 = _T_195 ? io_host_req_value : reg_6; // @[RegFile.scala 105:70:@190.4]
  assign _T_200 = 8'h1c == io_host_req_addr; // @[RegFile.scala 105:48:@196.4]
  assign _T_201 = _T_156 & _T_200; // @[RegFile.scala 105:30:@197.4]
  assign _GEN_12 = _T_201 ? io_host_req_value : reg_7; // @[RegFile.scala 105:70:@198.4]
  assign _T_206 = 8'h20 == io_host_req_addr; // @[RegFile.scala 105:48:@204.4]
  assign _T_207 = _T_156 & _T_206; // @[RegFile.scala 105:30:@205.4]
  assign _GEN_13 = _T_207 ? io_host_req_value : reg_8; // @[RegFile.scala 105:70:@206.4]
  assign _T_212 = 8'h24 == io_host_req_addr; // @[RegFile.scala 105:48:@212.4]
  assign _T_213 = _T_156 & _T_212; // @[RegFile.scala 105:30:@213.4]
  assign _GEN_14 = _T_213 ? io_host_req_value : reg_9; // @[RegFile.scala 105:70:@214.4]
  assign _T_218 = 8'h28 == io_host_req_addr; // @[RegFile.scala 105:48:@220.4]
  assign _T_219 = _T_156 & _T_218; // @[RegFile.scala 105:30:@221.4]
  assign _GEN_15 = _T_219 ? io_host_req_value : reg_10; // @[RegFile.scala 105:70:@222.4]
  assign _T_224 = 8'h2c == io_host_req_addr; // @[RegFile.scala 105:48:@228.4]
  assign _T_225 = _T_156 & _T_224; // @[RegFile.scala 105:30:@229.4]
  assign _GEN_16 = _T_225 ? io_host_req_value : reg_11; // @[RegFile.scala 105:70:@230.4]
  assign _T_235 = _T_80 & _T_76; // @[RegFile.scala 111:46:@239.4]
  assign _T_238 = _T_224 ? reg_11 : 32'h0; // @[Mux.scala 46:16:@242.6]
  assign _T_240 = _T_218 ? reg_10 : _T_238; // @[Mux.scala 46:16:@244.6]
  assign _T_242 = _T_212 ? reg_9 : _T_240; // @[Mux.scala 46:16:@246.6]
  assign _T_244 = _T_206 ? reg_8 : _T_242; // @[Mux.scala 46:16:@248.6]
  assign _T_246 = _T_200 ? reg_7 : _T_244; // @[Mux.scala 46:16:@250.6]
  assign _T_248 = _T_194 ? reg_6 : _T_246; // @[Mux.scala 46:16:@252.6]
  assign _T_250 = _T_188 ? reg_5 : _T_248; // @[Mux.scala 46:16:@254.6]
  assign _T_252 = _T_182 ? reg_4 : _T_250; // @[Mux.scala 46:16:@256.6]
  assign _T_254 = _T_176 ? reg_3 : _T_252; // @[Mux.scala 46:16:@258.6]
  assign _T_256 = _T_170 ? reg_2 : _T_254; // @[Mux.scala 46:16:@260.6]
  assign _T_258 = _T_164 ? reg_1 : _T_256; // @[Mux.scala 46:16:@262.6]
  assign _T_260 = _T_158 ? reg_0 : _T_258; // @[Mux.scala 46:16:@264.6]
  assign _GEN_17 = _T_235 ? _T_260 : rdata; // @[RegFile.scala 111:70:@240.4]
  assign io_launch = reg_0[0]; // @[RegFile.scala 118:13:@271.4]
  assign io_vals_0 = reg_2; // @[RegFile.scala 121:16:@272.4]
  assign io_vals_1 = reg_3; // @[RegFile.scala 121:16:@273.4]
  assign io_vals_2 = reg_4; // @[RegFile.scala 121:16:@274.4]
  assign io_ptrs_0 = {reg_7,reg_6}; // @[RegFile.scala 125:16:@277.4]
  assign io_ptrs_1 = {reg_9,reg_8}; // @[RegFile.scala 125:16:@279.4]
  assign io_ptrs_2 = {reg_11,reg_10}; // @[RegFile.scala 125:16:@281.4]
  assign io_host_req_deq = _T_79 & io_host_req_valid; // @[RegFile.scala 77:19:@92.4]
  assign io_host_resp_valid = state; // @[RegFile.scala 115:22:@268.4]
  assign io_host_resp_bits = rdata; // @[RegFile.scala 116:21:@269.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_0 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_1 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_2 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_3 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_4 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_5 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg_6 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  reg_7 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  reg_8 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  reg_9 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  reg_10 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  reg_11 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  rdata = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      state <= 1'h0;
    end else begin
      if (_T_74) begin
        if (_T_77) begin
          state <= 1'h1;
        end
      end else begin
        if (state) begin
          state <= 1'h0;
        end
      end
    end
    if (reset) begin
      reg_0 <= 32'h0;
    end else begin
      if (io_finish) begin
        reg_0 <= 32'h2;
      end else begin
        if (_T_159) begin
          reg_0 <= io_host_req_value;
        end
      end
    end
    if (reset) begin
      reg_1 <= 32'h0;
    end else begin
      if (io_ecnt_0_valid) begin
        reg_1 <= io_ecnt_0_bits;
      end else begin
        if (_T_165) begin
          reg_1 <= io_host_req_value;
        end
      end
    end
    if (reset) begin
      reg_2 <= 32'h0;
    end else begin
      if (_T_171) begin
        reg_2 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_3 <= 32'h0;
    end else begin
      if (_T_177) begin
        reg_3 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_4 <= 32'h0;
    end else begin
      if (_T_183) begin
        reg_4 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_5 <= 32'h0;
    end else begin
      if (_T_189) begin
        reg_5 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_6 <= 32'h0;
    end else begin
      if (_T_195) begin
        reg_6 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_7 <= 32'h0;
    end else begin
      if (_T_201) begin
        reg_7 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_8 <= 32'h0;
    end else begin
      if (_T_207) begin
        reg_8 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_9 <= 32'h0;
    end else begin
      if (_T_213) begin
        reg_9 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_10 <= 32'h0;
    end else begin
      if (_T_219) begin
        reg_10 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_11 <= 32'h0;
    end else begin
      if (_T_225) begin
        reg_11 <= io_host_req_value;
      end
    end
    if (reset) begin
      rdata <= 32'h0;
    end else begin
      if (_T_235) begin
        if (_T_158) begin
          rdata <= reg_0;
        end else begin
          if (_T_164) begin
            rdata <= reg_1;
          end else begin
            if (_T_170) begin
              rdata <= reg_2;
            end else begin
              if (_T_176) begin
                rdata <= reg_3;
              end else begin
                if (_T_182) begin
                  rdata <= reg_4;
                end else begin
                  if (_T_188) begin
                    rdata <= reg_5;
                  end else begin
                    if (_T_194) begin
                      rdata <= reg_6;
                    end else begin
                      if (_T_200) begin
                        rdata <= reg_7;
                      end else begin
                        if (_T_206) begin
                          rdata <= reg_8;
                        end else begin
                          if (_T_212) begin
                            rdata <= reg_9;
                          end else begin
                            if (_T_218) begin
                              rdata <= reg_10;
                            end else begin
                              if (_T_224) begin
                                rdata <= reg_11;
                              end else begin
                                rdata <= 32'h0;
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
  end
endmodule
module Dot( // @[:@283.2]
  input         clock, // @[:@284.4]
  input         reset, // @[:@285.4]
  input         io_start, // @[:@286.4]
  input  [7:0]  io_arrA_0, // @[:@286.4]
  input  [7:0]  io_arrA_1, // @[:@286.4]
  input  [7:0]  io_arrA_2, // @[:@286.4]
  input  [7:0]  io_arrA_3, // @[:@286.4]
  input  [7:0]  io_arrA_4, // @[:@286.4]
  input  [7:0]  io_arrA_5, // @[:@286.4]
  input  [7:0]  io_arrA_6, // @[:@286.4]
  input  [7:0]  io_arrA_7, // @[:@286.4]
  input  [7:0]  io_arrB_0, // @[:@286.4]
  input  [7:0]  io_arrB_1, // @[:@286.4]
  input  [7:0]  io_arrB_2, // @[:@286.4]
  input  [7:0]  io_arrB_3, // @[:@286.4]
  input  [7:0]  io_arrB_4, // @[:@286.4]
  input  [7:0]  io_arrB_5, // @[:@286.4]
  input  [7:0]  io_arrB_6, // @[:@286.4]
  input  [7:0]  io_arrB_7, // @[:@286.4]
  output        io_valid, // @[:@286.4]
  output [22:0] io_res // @[:@286.4]
);
  reg [15:0] product_0; // @[Compute.scala 188:24:@297.4]
  reg [31:0] _RAND_0;
  reg [15:0] product_1; // @[Compute.scala 188:24:@297.4]
  reg [31:0] _RAND_1;
  reg [15:0] product_2; // @[Compute.scala 188:24:@297.4]
  reg [31:0] _RAND_2;
  reg [15:0] product_3; // @[Compute.scala 188:24:@297.4]
  reg [31:0] _RAND_3;
  reg [15:0] product_4; // @[Compute.scala 188:24:@297.4]
  reg [31:0] _RAND_4;
  reg [15:0] product_5; // @[Compute.scala 188:24:@297.4]
  reg [31:0] _RAND_5;
  reg [15:0] product_6; // @[Compute.scala 188:24:@297.4]
  reg [31:0] _RAND_6;
  reg [15:0] product_7; // @[Compute.scala 188:24:@297.4]
  reg [31:0] _RAND_7;
  reg [22:0] accum_0; // @[Compute.scala 189:22:@307.4]
  reg [31:0] _RAND_8;
  reg [22:0] accum_1; // @[Compute.scala 189:22:@307.4]
  reg [31:0] _RAND_9;
  reg [22:0] accum_2; // @[Compute.scala 189:22:@307.4]
  reg [31:0] _RAND_10;
  reg [22:0] accum_3; // @[Compute.scala 189:22:@307.4]
  reg [31:0] _RAND_11;
  reg [22:0] accum_4; // @[Compute.scala 189:22:@307.4]
  reg [31:0] _RAND_12;
  reg [22:0] accum_5; // @[Compute.scala 189:22:@307.4]
  reg [31:0] _RAND_13;
  reg [22:0] accum_6; // @[Compute.scala 189:22:@307.4]
  reg [31:0] _RAND_14;
  reg [22:0] accum_7; // @[Compute.scala 189:22:@307.4]
  reg [31:0] _RAND_15;
  reg [3:0] cnt; // @[Compute.scala 190:20:@308.4]
  reg [31:0] _RAND_16;
  wire [15:0] _T_206; // @[Compute.scala 195:30:@314.6]
  wire [15:0] _T_207; // @[Compute.scala 197:32:@316.6]
  wire [22:0] _GEN_17; // @[Compute.scala 198:30:@318.6]
  wire [23:0] _T_208; // @[Compute.scala 198:30:@318.6]
  wire [15:0] _T_209; // @[Compute.scala 197:32:@320.6]
  wire [22:0] _GEN_18; // @[Compute.scala 198:30:@322.6]
  wire [23:0] _T_210; // @[Compute.scala 198:30:@322.6]
  wire [15:0] _T_211; // @[Compute.scala 197:32:@324.6]
  wire [22:0] _GEN_19; // @[Compute.scala 198:30:@326.6]
  wire [23:0] _T_212; // @[Compute.scala 198:30:@326.6]
  wire [15:0] _T_213; // @[Compute.scala 197:32:@328.6]
  wire [22:0] _GEN_20; // @[Compute.scala 198:30:@330.6]
  wire [23:0] _T_214; // @[Compute.scala 198:30:@330.6]
  wire [15:0] _T_215; // @[Compute.scala 197:32:@332.6]
  wire [22:0] _GEN_21; // @[Compute.scala 198:30:@334.6]
  wire [23:0] _T_216; // @[Compute.scala 198:30:@334.6]
  wire [15:0] _T_217; // @[Compute.scala 197:32:@336.6]
  wire [22:0] _GEN_22; // @[Compute.scala 198:30:@338.6]
  wire [23:0] _T_218; // @[Compute.scala 198:30:@338.6]
  wire [15:0] _T_219; // @[Compute.scala 197:32:@340.6]
  wire [22:0] _GEN_23; // @[Compute.scala 198:30:@342.6]
  wire [23:0] _T_220; // @[Compute.scala 198:30:@342.6]
  wire [4:0] _T_222; // @[Compute.scala 202:16:@344.6]
  wire [3:0] _T_223; // @[Compute.scala 202:16:@345.6]
  wire [3:0] _GEN_0; // @[Compute.scala 191:19:@309.4]
  wire [22:0] _GEN_1; // @[Compute.scala 191:19:@309.4]
  wire [15:0] _GEN_2; // @[Compute.scala 191:19:@309.4]
  wire [15:0] _GEN_3; // @[Compute.scala 191:19:@309.4]
  wire [23:0] _GEN_4; // @[Compute.scala 191:19:@309.4]
  wire [15:0] _GEN_5; // @[Compute.scala 191:19:@309.4]
  wire [23:0] _GEN_6; // @[Compute.scala 191:19:@309.4]
  wire [15:0] _GEN_7; // @[Compute.scala 191:19:@309.4]
  wire [23:0] _GEN_8; // @[Compute.scala 191:19:@309.4]
  wire [15:0] _GEN_9; // @[Compute.scala 191:19:@309.4]
  wire [23:0] _GEN_10; // @[Compute.scala 191:19:@309.4]
  wire [15:0] _GEN_11; // @[Compute.scala 191:19:@309.4]
  wire [23:0] _GEN_12; // @[Compute.scala 191:19:@309.4]
  wire [15:0] _GEN_13; // @[Compute.scala 191:19:@309.4]
  wire [23:0] _GEN_14; // @[Compute.scala 191:19:@309.4]
  wire [15:0] _GEN_15; // @[Compute.scala 191:19:@309.4]
  wire [23:0] _GEN_16; // @[Compute.scala 191:19:@309.4]
  assign _T_206 = io_arrA_0 * io_arrB_0; // @[Compute.scala 195:30:@314.6]
  assign _T_207 = io_arrA_1 * io_arrB_1; // @[Compute.scala 197:32:@316.6]
  assign _GEN_17 = {{7'd0}, product_1}; // @[Compute.scala 198:30:@318.6]
  assign _T_208 = accum_0 + _GEN_17; // @[Compute.scala 198:30:@318.6]
  assign _T_209 = io_arrA_2 * io_arrB_2; // @[Compute.scala 197:32:@320.6]
  assign _GEN_18 = {{7'd0}, product_2}; // @[Compute.scala 198:30:@322.6]
  assign _T_210 = accum_1 + _GEN_18; // @[Compute.scala 198:30:@322.6]
  assign _T_211 = io_arrA_3 * io_arrB_3; // @[Compute.scala 197:32:@324.6]
  assign _GEN_19 = {{7'd0}, product_3}; // @[Compute.scala 198:30:@326.6]
  assign _T_212 = accum_2 + _GEN_19; // @[Compute.scala 198:30:@326.6]
  assign _T_213 = io_arrA_4 * io_arrB_4; // @[Compute.scala 197:32:@328.6]
  assign _GEN_20 = {{7'd0}, product_4}; // @[Compute.scala 198:30:@330.6]
  assign _T_214 = accum_3 + _GEN_20; // @[Compute.scala 198:30:@330.6]
  assign _T_215 = io_arrA_5 * io_arrB_5; // @[Compute.scala 197:32:@332.6]
  assign _GEN_21 = {{7'd0}, product_5}; // @[Compute.scala 198:30:@334.6]
  assign _T_216 = accum_4 + _GEN_21; // @[Compute.scala 198:30:@334.6]
  assign _T_217 = io_arrA_6 * io_arrB_6; // @[Compute.scala 197:32:@336.6]
  assign _GEN_22 = {{7'd0}, product_6}; // @[Compute.scala 198:30:@338.6]
  assign _T_218 = accum_5 + _GEN_22; // @[Compute.scala 198:30:@338.6]
  assign _T_219 = io_arrA_7 * io_arrB_7; // @[Compute.scala 197:32:@340.6]
  assign _GEN_23 = {{7'd0}, product_7}; // @[Compute.scala 198:30:@342.6]
  assign _T_220 = accum_6 + _GEN_23; // @[Compute.scala 198:30:@342.6]
  assign _T_222 = cnt + 4'h1; // @[Compute.scala 202:16:@344.6]
  assign _T_223 = cnt + 4'h1; // @[Compute.scala 202:16:@345.6]
  assign _GEN_0 = io_start ? 4'h0 : _T_223; // @[Compute.scala 191:19:@309.4]
  assign _GEN_1 = io_start ? accum_0 : {{7'd0}, product_0}; // @[Compute.scala 191:19:@309.4]
  assign _GEN_2 = io_start ? product_0 : _T_206; // @[Compute.scala 191:19:@309.4]
  assign _GEN_3 = io_start ? product_1 : _T_207; // @[Compute.scala 191:19:@309.4]
  assign _GEN_4 = io_start ? {{1'd0}, accum_1} : _T_208; // @[Compute.scala 191:19:@309.4]
  assign _GEN_5 = io_start ? product_2 : _T_209; // @[Compute.scala 191:19:@309.4]
  assign _GEN_6 = io_start ? {{1'd0}, accum_2} : _T_210; // @[Compute.scala 191:19:@309.4]
  assign _GEN_7 = io_start ? product_3 : _T_211; // @[Compute.scala 191:19:@309.4]
  assign _GEN_8 = io_start ? {{1'd0}, accum_3} : _T_212; // @[Compute.scala 191:19:@309.4]
  assign _GEN_9 = io_start ? product_4 : _T_213; // @[Compute.scala 191:19:@309.4]
  assign _GEN_10 = io_start ? {{1'd0}, accum_4} : _T_214; // @[Compute.scala 191:19:@309.4]
  assign _GEN_11 = io_start ? product_5 : _T_215; // @[Compute.scala 191:19:@309.4]
  assign _GEN_12 = io_start ? {{1'd0}, accum_5} : _T_216; // @[Compute.scala 191:19:@309.4]
  assign _GEN_13 = io_start ? product_6 : _T_217; // @[Compute.scala 191:19:@309.4]
  assign _GEN_14 = io_start ? {{1'd0}, accum_6} : _T_218; // @[Compute.scala 191:19:@309.4]
  assign _GEN_15 = io_start ? product_7 : _T_219; // @[Compute.scala 191:19:@309.4]
  assign _GEN_16 = io_start ? {{1'd0}, accum_7} : _T_220; // @[Compute.scala 191:19:@309.4]
  assign io_valid = cnt == 4'h8; // @[Compute.scala 207:12:@350.4]
  assign io_res = accum_7; // @[Compute.scala 206:10:@348.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  product_0 = _RAND_0[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  product_1 = _RAND_1[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  product_2 = _RAND_2[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  product_3 = _RAND_3[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  product_4 = _RAND_4[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  product_5 = _RAND_5[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  product_6 = _RAND_6[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  product_7 = _RAND_7[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  accum_0 = _RAND_8[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  accum_1 = _RAND_9[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  accum_2 = _RAND_10[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  accum_3 = _RAND_11[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  accum_4 = _RAND_12[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  accum_5 = _RAND_13[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  accum_6 = _RAND_14[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  accum_7 = _RAND_15[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  cnt = _RAND_16[3:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      product_0 <= 16'h0;
    end else begin
      if (!(io_start)) begin
        product_0 <= _T_206;
      end
    end
    if (reset) begin
      product_1 <= 16'h0;
    end else begin
      if (!(io_start)) begin
        product_1 <= _T_207;
      end
    end
    if (reset) begin
      product_2 <= 16'h0;
    end else begin
      if (!(io_start)) begin
        product_2 <= _T_209;
      end
    end
    if (reset) begin
      product_3 <= 16'h0;
    end else begin
      if (!(io_start)) begin
        product_3 <= _T_211;
      end
    end
    if (reset) begin
      product_4 <= 16'h0;
    end else begin
      if (!(io_start)) begin
        product_4 <= _T_213;
      end
    end
    if (reset) begin
      product_5 <= 16'h0;
    end else begin
      if (!(io_start)) begin
        product_5 <= _T_215;
      end
    end
    if (reset) begin
      product_6 <= 16'h0;
    end else begin
      if (!(io_start)) begin
        product_6 <= _T_217;
      end
    end
    if (reset) begin
      product_7 <= 16'h0;
    end else begin
      if (!(io_start)) begin
        product_7 <= _T_219;
      end
    end
    if (reset) begin
      accum_0 <= 23'h0;
    end else begin
      if (!(io_start)) begin
        accum_0 <= {{7'd0}, product_0};
      end
    end
    if (reset) begin
      accum_1 <= 23'h0;
    end else begin
      accum_1 <= _GEN_4[22:0];
    end
    if (reset) begin
      accum_2 <= 23'h0;
    end else begin
      accum_2 <= _GEN_6[22:0];
    end
    if (reset) begin
      accum_3 <= 23'h0;
    end else begin
      accum_3 <= _GEN_8[22:0];
    end
    if (reset) begin
      accum_4 <= 23'h0;
    end else begin
      accum_4 <= _GEN_10[22:0];
    end
    if (reset) begin
      accum_5 <= 23'h0;
    end else begin
      accum_5 <= _GEN_12[22:0];
    end
    if (reset) begin
      accum_6 <= 23'h0;
    end else begin
      accum_6 <= _GEN_14[22:0];
    end
    if (reset) begin
      accum_7 <= 23'h0;
    end else begin
      accum_7 <= _GEN_16[22:0];
    end
    if (reset) begin
      cnt <= 4'h0;
    end else begin
      if (io_start) begin
        cnt <= 4'h0;
      end else begin
        cnt <= _T_223;
      end
    end
  end
endmodule
module Accumulator( // @[:@352.2]
  input         clock, // @[:@353.4]
  input         reset, // @[:@354.4]
  input         io_rst, // @[:@355.4]
  input         io_valid, // @[:@355.4]
  output        io_ready, // @[:@355.4]
  input  [62:0] io_in, // @[:@355.4]
  output [63:0] io_sum // @[:@355.4]
);
  reg [63:0] reg$; // @[Compute.scala 219:20:@357.4]
  reg [63:0] _RAND_0;
  reg  ready; // @[Compute.scala 220:22:@358.4]
  reg [31:0] _RAND_1;
  wire [63:0] _GEN_2; // @[Compute.scala 224:16:@365.8]
  wire [64:0] _T_19; // @[Compute.scala 224:16:@365.8]
  wire  _T_23; // @[Compute.scala 225:11:@369.8]
  wire [64:0] _GEN_0; // @[Compute.scala 223:26:@364.6]
  wire [64:0] _GEN_1; // @[Compute.scala 221:17:@360.4]
  wire  _GEN_4; // @[Compute.scala 225:11:@371.10]
  wire  _GEN_5; // @[Compute.scala 225:11:@371.10]
  assign _GEN_2 = {{1'd0}, io_in}; // @[Compute.scala 224:16:@365.8]
  assign _T_19 = reg$ + _GEN_2; // @[Compute.scala 224:16:@365.8]
  assign _T_23 = reset == 1'h0; // @[Compute.scala 225:11:@369.8]
  assign _GEN_0 = io_valid ? _T_19 : {{1'd0}, reg$}; // @[Compute.scala 223:26:@364.6]
  assign _GEN_1 = io_rst ? 65'h0 : _GEN_0; // @[Compute.scala 221:17:@360.4]
  assign io_ready = ready; // @[Compute.scala 231:12:@374.4]
  assign io_sum = reg$; // @[Compute.scala 232:10:@375.4]
  assign _GEN_4 = io_rst == 1'h0; // @[Compute.scala 225:11:@371.10]
  assign _GEN_5 = _GEN_4 & io_valid; // @[Compute.scala 225:11:@371.10]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  reg$ = _RAND_0[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ready = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg$ <= 64'h0;
    end else begin
      reg$ <= _GEN_1[63:0];
    end
    ready <= io_valid;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_5 & _T_23) begin
          $fwrite(32'h80000002,"slice sum: %d \n",_T_19); // @[Compute.scala 225:11:@371.10]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Compute( // @[:@377.2]
  input         clock, // @[:@378.4]
  input         reset, // @[:@379.4]
  input         io_launch, // @[:@380.4]
  output        io_finish, // @[:@380.4]
  output        io_ecnt_0_valid, // @[:@380.4]
  output [31:0] io_ecnt_0_bits, // @[:@380.4]
  input  [31:0] io_vals_0, // @[:@380.4]
  input  [31:0] io_vals_1, // @[:@380.4]
  input  [31:0] io_vals_2, // @[:@380.4]
  input  [63:0] io_ptrs_0, // @[:@380.4]
  input  [63:0] io_ptrs_1, // @[:@380.4]
  input  [63:0] io_ptrs_2, // @[:@380.4]
  output        io_mem_req_valid, // @[:@380.4]
  output        io_mem_req_opcode, // @[:@380.4]
  output [63:0] io_mem_req_addr, // @[:@380.4]
  output        io_mem_wr_valid, // @[:@380.4]
  output [63:0] io_mem_wr_bits, // @[:@380.4]
  output        io_mem_rd_ready, // @[:@380.4]
  input         io_mem_rd_valid, // @[:@380.4]
  input  [63:0] io_mem_rd_bits // @[:@380.4]
);
  wire  dot_clock; // @[Compute.scala 150:19:@629.4]
  wire  dot_reset; // @[Compute.scala 150:19:@629.4]
  wire  dot_io_start; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrA_0; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrA_1; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrA_2; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrA_3; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrA_4; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrA_5; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrA_6; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrA_7; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrB_0; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrB_1; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrB_2; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrB_3; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrB_4; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrB_5; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrB_6; // @[Compute.scala 150:19:@629.4]
  wire [7:0] dot_io_arrB_7; // @[Compute.scala 150:19:@629.4]
  wire  dot_io_valid; // @[Compute.scala 150:19:@629.4]
  wire [22:0] dot_io_res; // @[Compute.scala 150:19:@629.4]
  wire  overallAccum_clock; // @[Compute.scala 151:28:@632.4]
  wire  overallAccum_reset; // @[Compute.scala 151:28:@632.4]
  wire  overallAccum_io_rst; // @[Compute.scala 151:28:@632.4]
  wire  overallAccum_io_valid; // @[Compute.scala 151:28:@632.4]
  wire  overallAccum_io_ready; // @[Compute.scala 151:28:@632.4]
  wire [62:0] overallAccum_io_in; // @[Compute.scala 151:28:@632.4]
  wire [63:0] overallAccum_io_sum; // @[Compute.scala 151:28:@632.4]
  reg [2:0] state; // @[Compute.scala 48:22:@382.4]
  reg [31:0] _RAND_0;
  wire [7:0] shift; // @[Compute.scala 49:25:@383.4]
  reg [31:0] cycles; // @[Compute.scala 53:23:@384.4]
  reg [31:0] _RAND_1;
  reg [31:0] reg1_0; // @[Compute.scala 54:17:@385.4]
  reg [31:0] _RAND_2;
  reg [31:0] reg1_1; // @[Compute.scala 54:17:@385.4]
  reg [31:0] _RAND_3;
  reg [31:0] reg1_2; // @[Compute.scala 54:17:@385.4]
  reg [31:0] _RAND_4;
  reg [31:0] reg1_3; // @[Compute.scala 54:17:@385.4]
  reg [31:0] _RAND_5;
  reg [31:0] reg1_4; // @[Compute.scala 54:17:@385.4]
  reg [31:0] _RAND_6;
  reg [31:0] reg1_5; // @[Compute.scala 54:17:@385.4]
  reg [31:0] _RAND_7;
  reg [31:0] reg1_6; // @[Compute.scala 54:17:@385.4]
  reg [31:0] _RAND_8;
  reg [31:0] reg1_7; // @[Compute.scala 54:17:@385.4]
  reg [31:0] _RAND_9;
  reg [31:0] reg2_0; // @[Compute.scala 55:17:@386.4]
  reg [31:0] _RAND_10;
  reg [31:0] reg2_1; // @[Compute.scala 55:17:@386.4]
  reg [31:0] _RAND_11;
  reg [31:0] reg2_2; // @[Compute.scala 55:17:@386.4]
  reg [31:0] _RAND_12;
  reg [31:0] reg2_3; // @[Compute.scala 55:17:@386.4]
  reg [31:0] _RAND_13;
  reg [31:0] reg2_4; // @[Compute.scala 55:17:@386.4]
  reg [31:0] _RAND_14;
  reg [31:0] reg2_5; // @[Compute.scala 55:17:@386.4]
  reg [31:0] _RAND_15;
  reg [31:0] reg2_6; // @[Compute.scala 55:17:@386.4]
  reg [31:0] _RAND_16;
  reg [31:0] reg2_7; // @[Compute.scala 55:17:@386.4]
  reg [31:0] _RAND_17;
  reg [31:0] cnt; // @[Compute.scala 56:16:@387.4]
  reg [31:0] _RAND_18;
  reg [63:0] raddr1; // @[Compute.scala 57:19:@388.4]
  reg [63:0] _RAND_19;
  reg [63:0] raddr2; // @[Compute.scala 58:19:@389.4]
  reg [63:0] _RAND_20;
  reg [63:0] waddr; // @[Compute.scala 59:18:@390.4]
  reg [63:0] _RAND_21;
  wire  _T_112; // @[Conditional.scala 37:30:@391.4]
  wire [2:0] _GEN_0; // @[Compute.scala 69:24:@393.6]
  wire  _T_113; // @[Conditional.scala 37:30:@398.6]
  wire  _T_114; // @[Conditional.scala 37:30:@403.8]
  wire [2:0] _GEN_1; // @[Compute.scala 78:30:@405.10]
  wire  _T_115; // @[Conditional.scala 37:30:@410.10]
  wire  _T_116; // @[Conditional.scala 37:30:@415.12]
  wire [2:0] _GEN_2; // @[Compute.scala 86:30:@417.14]
  wire  _T_117; // @[Conditional.scala 37:30:@422.14]
  wire  _T_118; // @[Conditional.scala 37:30:@427.16]
  wire [32:0] _T_120; // @[Compute.scala 95:29:@429.18]
  wire [32:0] _T_121; // @[Compute.scala 95:29:@430.18]
  wire [31:0] _T_122; // @[Compute.scala 95:29:@431.18]
  wire  _T_123; // @[Compute.scala 95:17:@432.18]
  wire [2:0] _GEN_3; // @[Compute.scala 95:37:@433.18]
  wire [2:0] _GEN_4; // @[Conditional.scala 39:67:@428.16]
  wire [2:0] _GEN_5; // @[Conditional.scala 39:67:@423.14]
  wire [2:0] _GEN_6; // @[Conditional.scala 39:67:@416.12]
  wire [2:0] _GEN_7; // @[Conditional.scala 39:67:@411.10]
  wire [2:0] _GEN_8; // @[Conditional.scala 39:67:@404.8]
  wire [2:0] _GEN_9; // @[Conditional.scala 39:67:@399.6]
  wire [2:0] _GEN_10; // @[Conditional.scala 40:58:@392.4]
  wire  _T_124; // @[Compute.scala 103:20:@440.4]
  wire  last; // @[Compute.scala 103:35:@445.4]
  wire  _T_130; // @[Compute.scala 106:15:@446.4]
  wire [32:0] _T_133; // @[Compute.scala 109:22:@451.6]
  wire [31:0] _T_134; // @[Compute.scala 109:22:@452.6]
  wire [31:0] _GEN_11; // @[Compute.scala 106:26:@447.4]
  wire [64:0] _T_138; // @[Compute.scala 121:22:@466.8]
  wire [63:0] _T_139; // @[Compute.scala 121:22:@467.8]
  wire [64:0] _T_141; // @[Compute.scala 122:22:@469.8]
  wire [63:0] _T_142; // @[Compute.scala 122:22:@470.8]
  wire [63:0] _GEN_12; // @[Compute.scala 120:38:@465.6]
  wire [63:0] _GEN_13; // @[Compute.scala 120:38:@465.6]
  wire  _T_143; // @[Compute.scala 127:29:@473.4]
  wire  _T_144; // @[Compute.scala 127:51:@474.4]
  wire  _T_145; // @[Compute.scala 127:43:@475.4]
  wire  _T_146; // @[Compute.scala 127:73:@476.4]
  wire [63:0] _T_154; // @[Compute.scala 130:72:@486.4]
  wire  _T_156; // @[Compute.scala 133:15:@489.4]
  wire  _T_157; // @[Compute.scala 133:30:@490.4]
  wire [7:0] _T_158; // @[Compute.scala 135:32:@492.6]
  wire  _T_162; // @[Compute.scala 136:13:@496.6]
  wire [7:0] _T_163; // @[Compute.scala 135:32:@500.6]
  wire [7:0] _T_168; // @[Compute.scala 135:32:@508.6]
  wire [7:0] _T_173; // @[Compute.scala 135:32:@516.6]
  wire [7:0] _T_178; // @[Compute.scala 135:32:@524.6]
  wire [7:0] _T_183; // @[Compute.scala 135:32:@532.6]
  wire [7:0] _T_188; // @[Compute.scala 135:32:@540.6]
  wire [7:0] _T_193; // @[Compute.scala 135:32:@548.6]
  wire  _T_198; // @[Compute.scala 140:15:@557.4]
  wire  _T_199; // @[Compute.scala 140:30:@558.4]
  wire [277:0] _GEN_35; // @[Compute.scala 152:37:@635.4]
  reg [277:0] shiftReg; // @[Compute.scala 152:25:@636.4]
  reg [287:0] _RAND_22;
  reg  validReg; // @[Compute.scala 153:25:@638.4]
  reg [31:0] _RAND_23;
  wire [32:0] _T_252; // @[Compute.scala 170:16:@671.8]
  wire [31:0] _T_253; // @[Compute.scala 170:16:@672.8]
  wire [31:0] _GEN_33; // @[Compute.scala 169:38:@670.6]
  Dot dot ( // @[Compute.scala 150:19:@629.4]
    .clock(dot_clock),
    .reset(dot_reset),
    .io_start(dot_io_start),
    .io_arrA_0(dot_io_arrA_0),
    .io_arrA_1(dot_io_arrA_1),
    .io_arrA_2(dot_io_arrA_2),
    .io_arrA_3(dot_io_arrA_3),
    .io_arrA_4(dot_io_arrA_4),
    .io_arrA_5(dot_io_arrA_5),
    .io_arrA_6(dot_io_arrA_6),
    .io_arrA_7(dot_io_arrA_7),
    .io_arrB_0(dot_io_arrB_0),
    .io_arrB_1(dot_io_arrB_1),
    .io_arrB_2(dot_io_arrB_2),
    .io_arrB_3(dot_io_arrB_3),
    .io_arrB_4(dot_io_arrB_4),
    .io_arrB_5(dot_io_arrB_5),
    .io_arrB_6(dot_io_arrB_6),
    .io_arrB_7(dot_io_arrB_7),
    .io_valid(dot_io_valid),
    .io_res(dot_io_res)
  );
  Accumulator overallAccum ( // @[Compute.scala 151:28:@632.4]
    .clock(overallAccum_clock),
    .reset(overallAccum_reset),
    .io_rst(overallAccum_io_rst),
    .io_valid(overallAccum_io_valid),
    .io_ready(overallAccum_io_ready),
    .io_in(overallAccum_io_in),
    .io_sum(overallAccum_io_sum)
  );
  assign shift = io_vals_0[7:0]; // @[Compute.scala 49:25:@383.4]
  assign _T_112 = 3'h0 == state; // @[Conditional.scala 37:30:@391.4]
  assign _GEN_0 = io_launch ? 3'h1 : state; // @[Compute.scala 69:24:@393.6]
  assign _T_113 = 3'h1 == state; // @[Conditional.scala 37:30:@398.6]
  assign _T_114 = 3'h2 == state; // @[Conditional.scala 37:30:@403.8]
  assign _GEN_1 = io_mem_rd_valid ? 3'h3 : state; // @[Compute.scala 78:30:@405.10]
  assign _T_115 = 3'h3 == state; // @[Conditional.scala 37:30:@410.10]
  assign _T_116 = 3'h4 == state; // @[Conditional.scala 37:30:@415.12]
  assign _GEN_2 = io_mem_rd_valid ? 3'h5 : state; // @[Compute.scala 86:30:@417.14]
  assign _T_117 = 3'h5 == state; // @[Conditional.scala 37:30:@422.14]
  assign _T_118 = 3'h6 == state; // @[Conditional.scala 37:30:@427.16]
  assign _T_120 = io_vals_1 - 32'h1; // @[Compute.scala 95:29:@429.18]
  assign _T_121 = $unsigned(_T_120); // @[Compute.scala 95:29:@430.18]
  assign _T_122 = _T_121[31:0]; // @[Compute.scala 95:29:@431.18]
  assign _T_123 = cnt == _T_122; // @[Compute.scala 95:17:@432.18]
  assign _GEN_3 = _T_123 ? 3'h0 : 3'h1; // @[Compute.scala 95:37:@433.18]
  assign _GEN_4 = _T_118 ? _GEN_3 : state; // @[Conditional.scala 39:67:@428.16]
  assign _GEN_5 = _T_117 ? 3'h6 : _GEN_4; // @[Conditional.scala 39:67:@423.14]
  assign _GEN_6 = _T_116 ? _GEN_2 : _GEN_5; // @[Conditional.scala 39:67:@416.12]
  assign _GEN_7 = _T_115 ? 3'h4 : _GEN_6; // @[Conditional.scala 39:67:@411.10]
  assign _GEN_8 = _T_114 ? _GEN_1 : _GEN_7; // @[Conditional.scala 39:67:@404.8]
  assign _GEN_9 = _T_113 ? 3'h2 : _GEN_8; // @[Conditional.scala 39:67:@399.6]
  assign _GEN_10 = _T_112 ? _GEN_0 : _GEN_9; // @[Conditional.scala 40:58:@392.4]
  assign _T_124 = state == 3'h6; // @[Compute.scala 103:20:@440.4]
  assign last = _T_124 & _T_123; // @[Compute.scala 103:35:@445.4]
  assign _T_130 = state == 3'h0; // @[Compute.scala 106:15:@446.4]
  assign _T_133 = cycles + 32'h1; // @[Compute.scala 109:22:@451.6]
  assign _T_134 = cycles + 32'h1; // @[Compute.scala 109:22:@452.6]
  assign _GEN_11 = _T_130 ? 32'h0 : _T_134; // @[Compute.scala 106:26:@447.4]
  assign _T_138 = raddr1 + 64'h8; // @[Compute.scala 121:22:@466.8]
  assign _T_139 = raddr1 + 64'h8; // @[Compute.scala 121:22:@467.8]
  assign _T_141 = raddr2 + 64'h8; // @[Compute.scala 122:22:@469.8]
  assign _T_142 = raddr2 + 64'h8; // @[Compute.scala 122:22:@470.8]
  assign _GEN_12 = _T_124 ? _T_139 : raddr1; // @[Compute.scala 120:38:@465.6]
  assign _GEN_13 = _T_124 ? _T_142 : raddr2; // @[Compute.scala 120:38:@465.6]
  assign _T_143 = state == 3'h1; // @[Compute.scala 127:29:@473.4]
  assign _T_144 = state == 3'h3; // @[Compute.scala 127:51:@474.4]
  assign _T_145 = _T_143 | _T_144; // @[Compute.scala 127:43:@475.4]
  assign _T_146 = state == 3'h5; // @[Compute.scala 127:73:@476.4]
  assign _T_154 = _T_143 ? raddr1 : raddr2; // @[Compute.scala 130:72:@486.4]
  assign _T_156 = state == 3'h2; // @[Compute.scala 133:15:@489.4]
  assign _T_157 = _T_156 & io_mem_rd_valid; // @[Compute.scala 133:30:@490.4]
  assign _T_158 = io_mem_rd_bits[7:0]; // @[Compute.scala 135:32:@492.6]
  assign _T_162 = reset == 1'h0; // @[Compute.scala 136:13:@496.6]
  assign _T_163 = io_mem_rd_bits[15:8]; // @[Compute.scala 135:32:@500.6]
  assign _T_168 = io_mem_rd_bits[23:16]; // @[Compute.scala 135:32:@508.6]
  assign _T_173 = io_mem_rd_bits[31:24]; // @[Compute.scala 135:32:@516.6]
  assign _T_178 = io_mem_rd_bits[39:32]; // @[Compute.scala 135:32:@524.6]
  assign _T_183 = io_mem_rd_bits[47:40]; // @[Compute.scala 135:32:@532.6]
  assign _T_188 = io_mem_rd_bits[55:48]; // @[Compute.scala 135:32:@540.6]
  assign _T_193 = io_mem_rd_bits[63:56]; // @[Compute.scala 135:32:@548.6]
  assign _T_198 = state == 3'h4; // @[Compute.scala 140:15:@557.4]
  assign _T_199 = _T_198 & io_mem_rd_valid; // @[Compute.scala 140:30:@558.4]
  assign _GEN_35 = {{255'd0}, dot_io_res}; // @[Compute.scala 152:37:@635.4]
  assign _T_252 = cnt + 32'h1; // @[Compute.scala 170:16:@671.8]
  assign _T_253 = cnt + 32'h1; // @[Compute.scala 170:16:@672.8]
  assign _GEN_33 = _T_124 ? _T_253 : cnt; // @[Compute.scala 169:38:@670.6]
  assign io_finish = overallAccum_io_ready; // @[Compute.scala 175:13:@675.4]
  assign io_ecnt_0_valid = _T_124 & _T_123; // @[Compute.scala 112:20:@455.4]
  assign io_ecnt_0_bits = cycles; // @[Compute.scala 113:19:@456.4]
  assign io_mem_req_valid = _T_145 | _T_146; // @[Compute.scala 127:20:@478.4]
  assign io_mem_req_opcode = state == 3'h5; // @[Compute.scala 128:21:@480.4]
  assign io_mem_req_addr = _T_145 ? _T_154 : waddr; // @[Compute.scala 130:19:@488.4]
  assign io_mem_wr_valid = overallAccum_io_ready; // @[Compute.scala 163:19:@662.4]
  assign io_mem_wr_bits = overallAccum_io_sum; // @[Compute.scala 164:18:@663.4]
  assign io_mem_rd_ready = _T_156 | _T_198; // @[Compute.scala 147:19:@628.4]
  assign dot_clock = clock; // @[:@630.4]
  assign dot_reset = reset; // @[:@631.4]
  assign dot_io_start = _T_146 & last; // @[Compute.scala 155:16:@642.4]
  assign dot_io_arrA_0 = reg1_0[7:0]; // @[Compute.scala 156:15:@643.4]
  assign dot_io_arrA_1 = reg1_1[7:0]; // @[Compute.scala 156:15:@644.4]
  assign dot_io_arrA_2 = reg1_2[7:0]; // @[Compute.scala 156:15:@645.4]
  assign dot_io_arrA_3 = reg1_3[7:0]; // @[Compute.scala 156:15:@646.4]
  assign dot_io_arrA_4 = reg1_4[7:0]; // @[Compute.scala 156:15:@647.4]
  assign dot_io_arrA_5 = reg1_5[7:0]; // @[Compute.scala 156:15:@648.4]
  assign dot_io_arrA_6 = reg1_6[7:0]; // @[Compute.scala 156:15:@649.4]
  assign dot_io_arrA_7 = reg1_7[7:0]; // @[Compute.scala 156:15:@650.4]
  assign dot_io_arrB_0 = reg2_0[7:0]; // @[Compute.scala 157:15:@651.4]
  assign dot_io_arrB_1 = reg2_1[7:0]; // @[Compute.scala 157:15:@652.4]
  assign dot_io_arrB_2 = reg2_2[7:0]; // @[Compute.scala 157:15:@653.4]
  assign dot_io_arrB_3 = reg2_3[7:0]; // @[Compute.scala 157:15:@654.4]
  assign dot_io_arrB_4 = reg2_4[7:0]; // @[Compute.scala 157:15:@655.4]
  assign dot_io_arrB_5 = reg2_5[7:0]; // @[Compute.scala 157:15:@656.4]
  assign dot_io_arrB_6 = reg2_6[7:0]; // @[Compute.scala 157:15:@657.4]
  assign dot_io_arrB_7 = reg2_7[7:0]; // @[Compute.scala 157:15:@658.4]
  assign overallAccum_clock = clock; // @[:@633.4]
  assign overallAccum_reset = reset; // @[:@634.4]
  assign overallAccum_io_rst = io_vals_2[0]; // @[Compute.scala 158:23:@659.4]
  assign overallAccum_io_valid = validReg; // @[Compute.scala 159:25:@660.4]
  assign overallAccum_io_in = shiftReg[62:0]; // @[Compute.scala 160:22:@661.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  cycles = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg1_0 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg1_1 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg1_2 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg1_3 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg1_4 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg1_5 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  reg1_6 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  reg1_7 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  reg2_0 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  reg2_1 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  reg2_2 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  reg2_3 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  reg2_4 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  reg2_5 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  reg2_6 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  reg2_7 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  cnt = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {2{`RANDOM}};
  raddr1 = _RAND_19[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {2{`RANDOM}};
  raddr2 = _RAND_20[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {2{`RANDOM}};
  waddr = _RAND_21[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {9{`RANDOM}};
  shiftReg = _RAND_22[277:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  validReg = _RAND_23[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      state <= 3'h0;
    end else begin
      if (_T_112) begin
        if (io_launch) begin
          state <= 3'h1;
        end
      end else begin
        if (_T_113) begin
          state <= 3'h2;
        end else begin
          if (_T_114) begin
            if (io_mem_rd_valid) begin
              state <= 3'h3;
            end
          end else begin
            if (_T_115) begin
              state <= 3'h4;
            end else begin
              if (_T_116) begin
                if (io_mem_rd_valid) begin
                  state <= 3'h5;
                end
              end else begin
                if (_T_117) begin
                  state <= 3'h6;
                end else begin
                  if (_T_118) begin
                    if (_T_123) begin
                      state <= 3'h0;
                    end else begin
                      state <= 3'h1;
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    if (reset) begin
      cycles <= 32'h0;
    end else begin
      if (_T_130) begin
        cycles <= 32'h0;
      end else begin
        cycles <= _T_134;
      end
    end
    if (_T_157) begin
      reg1_0 <= {{24'd0}, _T_158};
    end
    if (_T_157) begin
      reg1_1 <= {{24'd0}, _T_163};
    end
    if (_T_157) begin
      reg1_2 <= {{24'd0}, _T_168};
    end
    if (_T_157) begin
      reg1_3 <= {{24'd0}, _T_173};
    end
    if (_T_157) begin
      reg1_4 <= {{24'd0}, _T_178};
    end
    if (_T_157) begin
      reg1_5 <= {{24'd0}, _T_183};
    end
    if (_T_157) begin
      reg1_6 <= {{24'd0}, _T_188};
    end
    if (_T_157) begin
      reg1_7 <= {{24'd0}, _T_193};
    end
    if (_T_199) begin
      reg2_0 <= {{24'd0}, _T_158};
    end
    if (_T_199) begin
      reg2_1 <= {{24'd0}, _T_163};
    end
    if (_T_199) begin
      reg2_2 <= {{24'd0}, _T_168};
    end
    if (_T_199) begin
      reg2_3 <= {{24'd0}, _T_173};
    end
    if (_T_199) begin
      reg2_4 <= {{24'd0}, _T_178};
    end
    if (_T_199) begin
      reg2_5 <= {{24'd0}, _T_183};
    end
    if (_T_199) begin
      reg2_6 <= {{24'd0}, _T_188};
    end
    if (_T_199) begin
      reg2_7 <= {{24'd0}, _T_193};
    end
    if (_T_130) begin
      cnt <= 32'h0;
    end else begin
      if (_T_124) begin
        cnt <= _T_253;
      end
    end
    if (_T_130) begin
      raddr1 <= io_ptrs_0;
    end else begin
      if (_T_124) begin
        raddr1 <= _T_139;
      end
    end
    if (_T_130) begin
      raddr2 <= io_ptrs_1;
    end else begin
      if (_T_124) begin
        raddr2 <= _T_142;
      end
    end
    if (_T_130) begin
      waddr <= io_ptrs_2;
    end
    shiftReg <= _GEN_35 << shift;
    validReg <= dot_io_valid;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_158); // @[Compute.scala 136:13:@498.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_163); // @[Compute.scala 136:13:@506.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_168); // @[Compute.scala 136:13:@514.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_173); // @[Compute.scala 136:13:@522.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_178); // @[Compute.scala 136:13:@530.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_183); // @[Compute.scala 136:13:@538.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_188); // @[Compute.scala 136:13:@546.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_193); // @[Compute.scala 136:13:@554.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_158); // @[Compute.scala 143:13:@566.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_163); // @[Compute.scala 143:13:@574.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_168); // @[Compute.scala 143:13:@582.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_173); // @[Compute.scala 143:13:@590.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_178); // @[Compute.scala 143:13:@598.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_183); // @[Compute.scala 143:13:@606.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_188); // @[Compute.scala 143:13:@614.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_193); // @[Compute.scala 143:13:@622.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Accel( // @[:@677.2]
  input         clock, // @[:@678.4]
  input         reset, // @[:@679.4]
  input         io_host_req_valid, // @[:@680.4]
  input         io_host_req_opcode, // @[:@680.4]
  input  [7:0]  io_host_req_addr, // @[:@680.4]
  input  [31:0] io_host_req_value, // @[:@680.4]
  output        io_host_req_deq, // @[:@680.4]
  output        io_host_resp_valid, // @[:@680.4]
  output [31:0] io_host_resp_bits, // @[:@680.4]
  output        io_mem_req_valid, // @[:@680.4]
  output        io_mem_req_opcode, // @[:@680.4]
  output [63:0] io_mem_req_addr, // @[:@680.4]
  output        io_mem_wr_valid, // @[:@680.4]
  output [63:0] io_mem_wr_bits, // @[:@680.4]
  output        io_mem_rd_ready, // @[:@680.4]
  input         io_mem_rd_valid, // @[:@680.4]
  input  [63:0] io_mem_rd_bits // @[:@680.4]
);
  wire  rf_clock; // @[Accel.scala 53:18:@682.4]
  wire  rf_reset; // @[Accel.scala 53:18:@682.4]
  wire  rf_io_launch; // @[Accel.scala 53:18:@682.4]
  wire  rf_io_finish; // @[Accel.scala 53:18:@682.4]
  wire  rf_io_ecnt_0_valid; // @[Accel.scala 53:18:@682.4]
  wire [31:0] rf_io_ecnt_0_bits; // @[Accel.scala 53:18:@682.4]
  wire [31:0] rf_io_vals_0; // @[Accel.scala 53:18:@682.4]
  wire [31:0] rf_io_vals_1; // @[Accel.scala 53:18:@682.4]
  wire [31:0] rf_io_vals_2; // @[Accel.scala 53:18:@682.4]
  wire [63:0] rf_io_ptrs_0; // @[Accel.scala 53:18:@682.4]
  wire [63:0] rf_io_ptrs_1; // @[Accel.scala 53:18:@682.4]
  wire [63:0] rf_io_ptrs_2; // @[Accel.scala 53:18:@682.4]
  wire  rf_io_host_req_valid; // @[Accel.scala 53:18:@682.4]
  wire  rf_io_host_req_opcode; // @[Accel.scala 53:18:@682.4]
  wire [7:0] rf_io_host_req_addr; // @[Accel.scala 53:18:@682.4]
  wire [31:0] rf_io_host_req_value; // @[Accel.scala 53:18:@682.4]
  wire  rf_io_host_req_deq; // @[Accel.scala 53:18:@682.4]
  wire  rf_io_host_resp_valid; // @[Accel.scala 53:18:@682.4]
  wire [31:0] rf_io_host_resp_bits; // @[Accel.scala 53:18:@682.4]
  wire  ce_clock; // @[Accel.scala 54:18:@685.4]
  wire  ce_reset; // @[Accel.scala 54:18:@685.4]
  wire  ce_io_launch; // @[Accel.scala 54:18:@685.4]
  wire  ce_io_finish; // @[Accel.scala 54:18:@685.4]
  wire  ce_io_ecnt_0_valid; // @[Accel.scala 54:18:@685.4]
  wire [31:0] ce_io_ecnt_0_bits; // @[Accel.scala 54:18:@685.4]
  wire [31:0] ce_io_vals_0; // @[Accel.scala 54:18:@685.4]
  wire [31:0] ce_io_vals_1; // @[Accel.scala 54:18:@685.4]
  wire [31:0] ce_io_vals_2; // @[Accel.scala 54:18:@685.4]
  wire [63:0] ce_io_ptrs_0; // @[Accel.scala 54:18:@685.4]
  wire [63:0] ce_io_ptrs_1; // @[Accel.scala 54:18:@685.4]
  wire [63:0] ce_io_ptrs_2; // @[Accel.scala 54:18:@685.4]
  wire  ce_io_mem_req_valid; // @[Accel.scala 54:18:@685.4]
  wire  ce_io_mem_req_opcode; // @[Accel.scala 54:18:@685.4]
  wire [63:0] ce_io_mem_req_addr; // @[Accel.scala 54:18:@685.4]
  wire  ce_io_mem_wr_valid; // @[Accel.scala 54:18:@685.4]
  wire [63:0] ce_io_mem_wr_bits; // @[Accel.scala 54:18:@685.4]
  wire  ce_io_mem_rd_ready; // @[Accel.scala 54:18:@685.4]
  wire  ce_io_mem_rd_valid; // @[Accel.scala 54:18:@685.4]
  wire [63:0] ce_io_mem_rd_bits; // @[Accel.scala 54:18:@685.4]
  RegFile rf ( // @[Accel.scala 53:18:@682.4]
    .clock(rf_clock),
    .reset(rf_reset),
    .io_launch(rf_io_launch),
    .io_finish(rf_io_finish),
    .io_ecnt_0_valid(rf_io_ecnt_0_valid),
    .io_ecnt_0_bits(rf_io_ecnt_0_bits),
    .io_vals_0(rf_io_vals_0),
    .io_vals_1(rf_io_vals_1),
    .io_vals_2(rf_io_vals_2),
    .io_ptrs_0(rf_io_ptrs_0),
    .io_ptrs_1(rf_io_ptrs_1),
    .io_ptrs_2(rf_io_ptrs_2),
    .io_host_req_valid(rf_io_host_req_valid),
    .io_host_req_opcode(rf_io_host_req_opcode),
    .io_host_req_addr(rf_io_host_req_addr),
    .io_host_req_value(rf_io_host_req_value),
    .io_host_req_deq(rf_io_host_req_deq),
    .io_host_resp_valid(rf_io_host_resp_valid),
    .io_host_resp_bits(rf_io_host_resp_bits)
  );
  Compute ce ( // @[Accel.scala 54:18:@685.4]
    .clock(ce_clock),
    .reset(ce_reset),
    .io_launch(ce_io_launch),
    .io_finish(ce_io_finish),
    .io_ecnt_0_valid(ce_io_ecnt_0_valid),
    .io_ecnt_0_bits(ce_io_ecnt_0_bits),
    .io_vals_0(ce_io_vals_0),
    .io_vals_1(ce_io_vals_1),
    .io_vals_2(ce_io_vals_2),
    .io_ptrs_0(ce_io_ptrs_0),
    .io_ptrs_1(ce_io_ptrs_1),
    .io_ptrs_2(ce_io_ptrs_2),
    .io_mem_req_valid(ce_io_mem_req_valid),
    .io_mem_req_opcode(ce_io_mem_req_opcode),
    .io_mem_req_addr(ce_io_mem_req_addr),
    .io_mem_wr_valid(ce_io_mem_wr_valid),
    .io_mem_wr_bits(ce_io_mem_wr_bits),
    .io_mem_rd_ready(ce_io_mem_rd_ready),
    .io_mem_rd_valid(ce_io_mem_rd_valid),
    .io_mem_rd_bits(ce_io_mem_rd_bits)
  );
  assign io_host_req_deq = rf_io_host_req_deq; // @[Accel.scala 55:14:@690.4]
  assign io_host_resp_valid = rf_io_host_resp_valid; // @[Accel.scala 55:14:@689.4]
  assign io_host_resp_bits = rf_io_host_resp_bits; // @[Accel.scala 55:14:@688.4]
  assign io_mem_req_valid = ce_io_mem_req_valid; // @[Accel.scala 56:10:@703.4]
  assign io_mem_req_opcode = ce_io_mem_req_opcode; // @[Accel.scala 56:10:@702.4]
  assign io_mem_req_addr = ce_io_mem_req_addr; // @[Accel.scala 56:10:@700.4]
  assign io_mem_wr_valid = ce_io_mem_wr_valid; // @[Accel.scala 56:10:@699.4]
  assign io_mem_wr_bits = ce_io_mem_wr_bits; // @[Accel.scala 56:10:@698.4]
  assign io_mem_rd_ready = ce_io_mem_rd_ready; // @[Accel.scala 56:10:@697.4]
  assign rf_clock = clock; // @[:@683.4]
  assign rf_reset = reset; // @[:@684.4]
  assign rf_io_finish = ce_io_finish; // @[Accel.scala 58:16:@705.4]
  assign rf_io_ecnt_0_valid = ce_io_ecnt_0_valid; // @[Accel.scala 59:14:@707.4]
  assign rf_io_ecnt_0_bits = ce_io_ecnt_0_bits; // @[Accel.scala 59:14:@706.4]
  assign rf_io_host_req_valid = io_host_req_valid; // @[Accel.scala 55:14:@694.4]
  assign rf_io_host_req_opcode = io_host_req_opcode; // @[Accel.scala 55:14:@693.4]
  assign rf_io_host_req_addr = io_host_req_addr; // @[Accel.scala 55:14:@692.4]
  assign rf_io_host_req_value = io_host_req_value; // @[Accel.scala 55:14:@691.4]
  assign ce_clock = clock; // @[:@686.4]
  assign ce_reset = reset; // @[:@687.4]
  assign ce_io_launch = rf_io_launch; // @[Accel.scala 57:16:@704.4]
  assign ce_io_vals_0 = rf_io_vals_0; // @[Accel.scala 60:14:@708.4]
  assign ce_io_vals_1 = rf_io_vals_1; // @[Accel.scala 60:14:@709.4]
  assign ce_io_vals_2 = rf_io_vals_2; // @[Accel.scala 60:14:@710.4]
  assign ce_io_ptrs_0 = rf_io_ptrs_0; // @[Accel.scala 61:14:@712.4]
  assign ce_io_ptrs_1 = rf_io_ptrs_1; // @[Accel.scala 61:14:@713.4]
  assign ce_io_ptrs_2 = rf_io_ptrs_2; // @[Accel.scala 61:14:@714.4]
  assign ce_io_mem_rd_valid = io_mem_rd_valid; // @[Accel.scala 56:10:@696.4]
  assign ce_io_mem_rd_bits = io_mem_rd_bits; // @[Accel.scala 56:10:@695.4]
endmodule
module TestAccel( // @[:@716.2]
  input   clock, // @[:@717.4]
  input   reset, // @[:@718.4]
  input   sim_clock, // @[:@719.4]
  output  sim_wait // @[:@720.4]
);
  wire  sim_shell_clock; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_reset; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_host_req_valid; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_host_req_opcode; // @[TestAccel.scala 59:25:@722.4]
  wire [7:0] sim_shell_host_req_addr; // @[TestAccel.scala 59:25:@722.4]
  wire [31:0] sim_shell_host_req_value; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_host_req_deq; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_host_resp_valid; // @[TestAccel.scala 59:25:@722.4]
  wire [31:0] sim_shell_host_resp_bits; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_mem_req_valid; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_mem_req_opcode; // @[TestAccel.scala 59:25:@722.4]
  wire [63:0] sim_shell_mem_req_addr; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_mem_wr_valid; // @[TestAccel.scala 59:25:@722.4]
  wire [63:0] sim_shell_mem_wr_bits; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_mem_rd_ready; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_mem_rd_valid; // @[TestAccel.scala 59:25:@722.4]
  wire [63:0] sim_shell_mem_rd_bits; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_sim_clock; // @[TestAccel.scala 59:25:@722.4]
  wire  sim_shell_sim_wait; // @[TestAccel.scala 59:25:@722.4]
  wire  vta_accel_clock; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_reset; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_host_req_valid; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_host_req_opcode; // @[TestAccel.scala 60:25:@725.4]
  wire [7:0] vta_accel_io_host_req_addr; // @[TestAccel.scala 60:25:@725.4]
  wire [31:0] vta_accel_io_host_req_value; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_host_req_deq; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_host_resp_valid; // @[TestAccel.scala 60:25:@725.4]
  wire [31:0] vta_accel_io_host_resp_bits; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_mem_req_valid; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_mem_req_opcode; // @[TestAccel.scala 60:25:@725.4]
  wire [63:0] vta_accel_io_mem_req_addr; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_mem_wr_valid; // @[TestAccel.scala 60:25:@725.4]
  wire [63:0] vta_accel_io_mem_wr_bits; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_mem_rd_ready; // @[TestAccel.scala 60:25:@725.4]
  wire  vta_accel_io_mem_rd_valid; // @[TestAccel.scala 60:25:@725.4]
  wire [63:0] vta_accel_io_mem_rd_bits; // @[TestAccel.scala 60:25:@725.4]
  VTASimShell sim_shell ( // @[TestAccel.scala 59:25:@722.4]
    .clock(sim_shell_clock),
    .reset(sim_shell_reset),
    .host_req_valid(sim_shell_host_req_valid),
    .host_req_opcode(sim_shell_host_req_opcode),
    .host_req_addr(sim_shell_host_req_addr),
    .host_req_value(sim_shell_host_req_value),
    .host_req_deq(sim_shell_host_req_deq),
    .host_resp_valid(sim_shell_host_resp_valid),
    .host_resp_bits(sim_shell_host_resp_bits),
    .mem_req_valid(sim_shell_mem_req_valid),
    .mem_req_opcode(sim_shell_mem_req_opcode),
    .mem_req_addr(sim_shell_mem_req_addr),
    .mem_wr_valid(sim_shell_mem_wr_valid),
    .mem_wr_bits(sim_shell_mem_wr_bits),
    .mem_rd_ready(sim_shell_mem_rd_ready),
    .mem_rd_valid(sim_shell_mem_rd_valid),
    .mem_rd_bits(sim_shell_mem_rd_bits),
    .sim_clock(sim_shell_sim_clock),
    .sim_wait(sim_shell_sim_wait)
  );
  Accel vta_accel ( // @[TestAccel.scala 60:25:@725.4]
    .clock(vta_accel_clock),
    .reset(vta_accel_reset),
    .io_host_req_valid(vta_accel_io_host_req_valid),
    .io_host_req_opcode(vta_accel_io_host_req_opcode),
    .io_host_req_addr(vta_accel_io_host_req_addr),
    .io_host_req_value(vta_accel_io_host_req_value),
    .io_host_req_deq(vta_accel_io_host_req_deq),
    .io_host_resp_valid(vta_accel_io_host_resp_valid),
    .io_host_resp_bits(vta_accel_io_host_resp_bits),
    .io_mem_req_valid(vta_accel_io_mem_req_valid),
    .io_mem_req_opcode(vta_accel_io_mem_req_opcode),
    .io_mem_req_addr(vta_accel_io_mem_req_addr),
    .io_mem_wr_valid(vta_accel_io_mem_wr_valid),
    .io_mem_wr_bits(vta_accel_io_mem_wr_bits),
    .io_mem_rd_ready(vta_accel_io_mem_rd_ready),
    .io_mem_rd_valid(vta_accel_io_mem_rd_valid),
    .io_mem_rd_bits(vta_accel_io_mem_rd_bits)
  );
  assign sim_wait = sim_shell_sim_wait; // @[TestAccel.scala 62:12:@729.4]
  assign sim_shell_clock = clock; // @[:@723.4]
  assign sim_shell_reset = reset; // @[:@724.4]
  assign sim_shell_host_req_deq = vta_accel_io_host_req_deq; // @[TestAccel.scala 64:21:@741.4]
  assign sim_shell_host_resp_valid = vta_accel_io_host_resp_valid; // @[TestAccel.scala 64:21:@740.4]
  assign sim_shell_host_resp_bits = vta_accel_io_host_resp_bits; // @[TestAccel.scala 64:21:@739.4]
  assign sim_shell_mem_req_valid = vta_accel_io_mem_req_valid; // @[TestAccel.scala 63:17:@738.4]
  assign sim_shell_mem_req_opcode = vta_accel_io_mem_req_opcode; // @[TestAccel.scala 63:17:@737.4]
  assign sim_shell_mem_req_addr = vta_accel_io_mem_req_addr; // @[TestAccel.scala 63:17:@735.4]
  assign sim_shell_mem_wr_valid = vta_accel_io_mem_wr_valid; // @[TestAccel.scala 63:17:@734.4]
  assign sim_shell_mem_wr_bits = vta_accel_io_mem_wr_bits; // @[TestAccel.scala 63:17:@733.4]
  assign sim_shell_mem_rd_ready = vta_accel_io_mem_rd_ready; // @[TestAccel.scala 63:17:@732.4]
  assign sim_shell_sim_clock = sim_clock; // @[TestAccel.scala 61:23:@728.4]
  assign vta_accel_clock = clock; // @[:@726.4]
  assign vta_accel_reset = reset; // @[:@727.4]
  assign vta_accel_io_host_req_valid = sim_shell_host_req_valid; // @[TestAccel.scala 64:21:@745.4]
  assign vta_accel_io_host_req_opcode = sim_shell_host_req_opcode; // @[TestAccel.scala 64:21:@744.4]
  assign vta_accel_io_host_req_addr = sim_shell_host_req_addr; // @[TestAccel.scala 64:21:@743.4]
  assign vta_accel_io_host_req_value = sim_shell_host_req_value; // @[TestAccel.scala 64:21:@742.4]
  assign vta_accel_io_mem_rd_valid = sim_shell_mem_rd_valid; // @[TestAccel.scala 63:17:@731.4]
  assign vta_accel_io_mem_rd_bits = sim_shell_mem_rd_bits; // @[TestAccel.scala 63:17:@730.4]
endmodule
