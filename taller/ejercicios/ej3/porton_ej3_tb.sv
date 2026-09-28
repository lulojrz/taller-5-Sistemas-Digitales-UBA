module porton_ej3_tb (
    input logic clk, input logic rst,
    output logic done, output logic pass_all
);
  logic button;
  logic led_abriendo, led_cerrando, led_pausa, led_abierto, led_cerrado;
  logic [1:0] luces_posicion;

  top_module dut (.*);
  `include "tb_helpers.svh"

  task automatic pulse_button();
    button = 1;
    #1;
    button = 0;
    cycle();
  endtask

  initial begin
    done=0; pass_all=1; nfail=0; button=0;
    wait (!rst); @(negedge clk);

    expect_eq("cerrado al reset", led_cerrado, 1);
    expect_eq("posición inicial", luces_posicion, 0);

    // Desde cerrado, un click inicia la apertura.
    pulse_button();
    expect_eq("empieza a abrir", led_abriendo, 1);
    cycle();
    expect_eq("avanza mientras abre", luces_posicion, 1);

    // Durante el movimiento, un click detiene el portón.
    pulse_button();
    expect_eq("pausa abriendo", led_pausa, 1);
    expect_eq("posición al pausar", luces_posicion, 2);
    cycle(); cycle();
    expect_eq("posición conservada en pausa", luces_posicion, 2);

    // Desde PAUSA_ABRIENDO, otro click invierte la dirección.
    pulse_button();
    expect_eq("desde la pausa empieza a cerrar", led_cerrando, 1);
    cycle();
    expect_eq("retrocede mientras cierra", luces_posicion, 1);

    // Repetimos el mecanismo en la dirección contraria.
    pulse_button();
    expect_eq("pausa cerrando", led_pausa, 1);
    expect_eq("llegó a posición cero antes de pausar", luces_posicion, 0);
    cycle();
    expect_eq("sigue detenido", luces_posicion, 0);

    pulse_button();
    expect_eq("desde la pausa vuelve a abrir", led_abriendo, 1);
    cycle(); expect_eq("posición 1", luces_posicion, 1);
    cycle(); expect_eq("posición 2", luces_posicion, 2);
    cycle(); expect_eq("posición 3", luces_posicion, 3);
    cycle(); expect_eq("termina abierto", led_abierto, 1);

    finish_tb();
  end
endmodule
