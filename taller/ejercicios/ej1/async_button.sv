// Archivo provisto: no modificar.
module async_button(input logic clk, input logic pulse, output logic q);
  always_ff @(posedge clk, posedge pulse) begin
    if (pulse) q <= 1;
    else       q <= 0;
  end
endmodule
