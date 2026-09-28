// Archivo provisto: no modificar.
module top_module (
    input logic clk, input logic rst, input logic button,
    output logic led_abriendo, output logic led_cerrando,
    output logic led_abierto, output logic led_cerrado,
    output logic [1:0] luces_posicion
);
  logic abrir, cerrar, button_q;
  logic [1:0] posicion;

  async_button boton(.clk(clk), .pulse(button), .q(button_q));
  porton_fsm_long controlador (
      .clk(clk), .rst(rst), .button(button_q), .posicion(posicion),
      .subir(abrir), .bajar(cerrar),
      .abierto(led_abierto), .cerrado(led_cerrado)
  );
  contador_posicion posicion_porton (
      .clk(clk), .rst(rst), .subir(abrir), .bajar(cerrar),
      .posicion(posicion)
  );

  assign led_abriendo = abrir;
  assign led_cerrando = cerrar;
  assign luces_posicion = posicion;
endmodule
