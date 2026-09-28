integer nfail;
task automatic expect_eq(input string tag, input integer got, input integer exp);
  if (got !== exp) begin
    $display("FAIL: %s got=%0d (%b) exp=%0d (%b)", tag, got, got, exp, exp);
    nfail++;
  end else $display("PASS: %s", tag);
endtask
task automatic finish_tb();
  pass_all = (nfail == 0);
  done = 1'b1;
endtask
task automatic cycle();
  @(posedge clk); @(negedge clk);
endtask

