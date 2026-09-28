// Archivo provisto: no modificar.
// Las cuatro salidas se visualizan como luces del estado actual del portón.
module top_module (
    input  logic clk,
    input  logic rst,
    input  logic button,
    output logic led_cerrado,
    output logic led_abriendo,
    output logic led_abierto,
    output logic led_cerrando
);
  logic button_q;
  async_button boton(.clk(clk), .pulse(button), .q(button_q));

  porton_fsm controlador (
      .clk(clk),
      .rst(rst),
      .button(button_q),
      .cerrado(led_cerrado),
      .abriendo(led_abriendo),
      .abierto(led_abierto),
      .cerrando(led_cerrando)
  );
endmodule
