// Archivo provisto: no modificar.
module detector_mealy (
    input  logic clk,
    input  logic rst,
    input  logic bit_in,
    output logic led_mealy
);
  // 4 estados: cuántos caracteres del patrón "1101" siguen vigentes.
  // No hace falta un estado dedicado al match: la salida se calcula sobre
  // la transición misma, así que el próximo estado ya puede ser el que
  // corresponde a haber consumido el bit que cierra el patrón.
  typedef enum logic [1:0] {S0, S1, S2, S3} state_t;
  state_t current_state, next_state;

  always_ff @(posedge clk) begin
    if (rst) current_state <= S0;
    else     current_state <= next_state;
  end

  always_comb begin
    next_state = current_state;
    case (current_state)
      S0: next_state = bit_in ? S1 : S0;
      S1: next_state = bit_in ? S2 : S0;
      S2: next_state = bit_in ? S2 : S3;
      S3: next_state = bit_in ? S1 : S0;
      default: next_state = S0;
    endcase
  end

  // Salida Mealy: combinacional, función de (estado, bit_in).
  assign led_mealy = (current_state == S3) && bit_in;
endmodule
