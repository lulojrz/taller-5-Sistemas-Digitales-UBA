`ifndef TB_MODULE
`define TB_MODULE dummy_tb
`endif
module sim_top;
  logic clk, rst, done, pass_all;
  initial clk = 1'b0;
  always #5 clk = ~clk;
  initial begin
    $dumpfile("obj_dir/sim.vcd");
    $dumpvars(0, sim_top);
    rst = 1'b1;
    repeat (2) @(posedge clk);
    rst = 1'b0;
    wait (done);
    repeat (2) @(posedge clk);
    if (!pass_all) $fatal(1, "Hubo tests que fallaron");
    $finish;
  end
  `TB_MODULE tb (.clk(clk), .rst(rst), .done(done), .pass_all(pass_all));
endmodule

