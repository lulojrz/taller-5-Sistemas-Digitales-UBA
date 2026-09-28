module porton_ej2_tb(input logic clk, input logic rst, output logic done, output logic pass_all);
  logic button;
  logic led_abriendo,led_cerrando,led_abierto,led_cerrado;
  logic [1:0] luces_posicion;
  top_module dut(.*);
  `include "tb_helpers.svh"
  task automatic pulse_button(); button=1; #1; button=0; cycle(); endtask

  initial begin
    done=0; pass_all=1; nfail=0; button=0; wait(!rst); @(negedge clk);
    expect_eq("cerrado al reset",led_cerrado,1);
    expect_eq("posición cero",luces_posicion,2'd0);

    pulse_button();
    expect_eq("orden abrir",led_abriendo,1);
    cycle(); expect_eq("posición 1",luces_posicion,2'd1);
    cycle(); expect_eq("posición 2",luces_posicion,2'd2);
    cycle(); expect_eq("posición 3",luces_posicion,2'd3);
    cycle(); expect_eq("estado abierto",led_abierto,1);

    pulse_button();
    expect_eq("orden cerrar",led_cerrando,1);
    cycle(); expect_eq("posición 2 cerrando",luces_posicion,2'd2);
    cycle(); expect_eq("posición 1 cerrando",luces_posicion,2'd1);
    cycle(); expect_eq("posición 0",luces_posicion,2'd0);
    cycle(); expect_eq("estado cerrado",led_cerrado,1);
    finish_tb();
  end
endmodule
