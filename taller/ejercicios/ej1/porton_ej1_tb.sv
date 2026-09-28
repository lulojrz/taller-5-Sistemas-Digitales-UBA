module porton_ej1_tb(input logic clk, input logic rst, output logic done, output logic pass_all);
  logic button;
  logic led_cerrado, led_abriendo, led_abierto, led_cerrando;
  top_module dut(.*);
  `include "tb_helpers.svh"

  task automatic expect_state(input string tag, input logic [3:0] expected);
    expect_eq(tag, {led_cerrando,led_abierto,led_abriendo,led_cerrado}, expected);
  endtask
  task automatic pulse_button();
    button=1; #1; button=0; cycle();
  endtask

  initial begin
    done=0; pass_all=1; nfail=0; button=0; wait(!rst); @(negedge clk);
    expect_state("reset: cerrado",4'b0001);
    cycle(); expect_state("espera cerrado",4'b0001);
    pulse_button(); expect_state("empieza a abrir",4'b0010);
    cycle(); expect_state("queda abierto",4'b0100);
    cycle(); expect_state("espera abierto",4'b0100);
    pulse_button(); expect_state("empieza a cerrar",4'b1000);
    cycle(); expect_state("queda cerrado",4'b0001);
    finish_tb();
  end
endmodule
