// Archivo provisto: no modificar.
module detector_moore (
    input  logic clk,
    input  logic rst,
    input  logic bit_in,
    output logic led_moore
);
  // 5 estados: los mismos 4 de detector_mealy más un estado MATCH dedicado
  // a sostener la salida durante el ciclo siguiente al patrón completo,
  // porque una salida Moore no puede depender de bit_in. Desde MATCH, la
  // FSM continúa exactamente como lo haría S1 (que es lo que arrastra el
  // "1" con el que puede empezar a superponerse el próximo patrón).
  typedef enum logic [2:0] {S0, S1, S2, S3, MATCH} state_t;
  state_t current_state, next_state;

  always_ff @(posedge clk) begin
    if (rst) current_state <= S0;
    else     current_state <= next_state;
  end

  always_comb begin
    next_state = current_state;
    case (current_state)
      S0:    next_state = bit_in ? S1 : S0;
      S1:    next_state = bit_in ? S2 : S0;
      S2:    next_state = bit_in ? S2 : S3;
      S3:    next_state = bit_in ? MATCH : S0;
      MATCH: next_state = bit_in ? S2 : S0;
      default: next_state = S0;
    endcase
  end

  // Salida Moore: combinacional, función únicamente del estado.
  assign led_moore = (current_state == MATCH);
endmodule
