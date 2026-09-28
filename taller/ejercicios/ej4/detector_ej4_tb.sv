module detector_ej4_tb(input logic clk, input logic rst, output logic done, output logic pass_all);
  logic bit_in;
  logic led_mealy, led_moore;
  top_module dut(.*);
  `include "tb_helpers.svh"

  // Aplica un bit, deja asentar la lógica combinacional y compara ambas
  // salidas ANTES del próximo flanco de clock (o sea: con el estado que
  // tenían al llegar este bit). Recién después avanza el clock, que es
  // cuando el estado se actualiza.
  task automatic step(input logic b, input logic exp_mealy, input logic exp_moore);
    bit_in = b;
    #1;
    expect_eq("mealy", led_mealy, exp_mealy);
    expect_eq("moore", led_moore, exp_moore);
    @(posedge clk); @(negedge clk);
  endtask

  initial begin
    done = 0; pass_all = 1; nfail = 0; bit_in = 0;
    wait (!rst); @(negedge clk);

    // Flujo: 1 1 0 1 1 0 1 0  ->  contiene "1101" en las posiciones 1-4
    // y, superpuesto, en las posiciones 4-7.
    step(1'b1, 1'b0, 1'b0);  // "1"
    step(1'b1, 1'b0, 1'b0);  // "11"
    step(1'b0, 1'b0, 1'b0);  // "110"
    step(1'b1, 1'b1, 1'b0);  // "1101" -> Mealy detecta en el acto
    step(1'b1, 1'b0, 1'b1);  // Moore detecta un ciclo después
    step(1'b0, 1'b0, 1'b0);  // "1101101" en construcción
    step(1'b1, 1'b1, 1'b0);  // segundo "1101" (superpuesto) -> Mealy detecta
    step(1'b0, 1'b0, 1'b1);  // Moore detecta el segundo match

    finish_tb();
  end
endmodule
