// Archivo provisto: no modificar.
// Ambos detectores reciben el mismo flujo de bits; sus salidas permiten
// comparar en la forma de onda el instante exacto en que cada uno reacciona.
module top_module (
    input  logic clk,
    input  logic rst,
    input  logic bit_in,
    output logic led_mealy,
    output logic led_moore
);
  detector_mealy mealy (
      .clk(clk),
      .rst(rst),
      .bit_in(bit_in),
      .led_mealy(led_mealy)
  );

  detector_moore moore (
      .clk(clk),
      .rst(rst),
      .bit_in(bit_in),
      .led_moore(led_moore)
  );
endmodule
