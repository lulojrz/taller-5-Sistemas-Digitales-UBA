module contador_posicion (
    input logic clk, input logic rst,
    input logic subir, input logic bajar,
    output logic [1:0] posicion
);
  // COMPLETAR: contador saturado entre 0 (cerrado) y 3 (abierto).
    always_ff @(posedge clk or posedge rst) 
    if(rst) begin
    posicion<=2'b00;
  end else if(subir && posicion<2'b11) begin 
    posicion <= posicion+ 1'b1 ;
  end else if(bajar && posicion>2'b00)begin 
    posicion <= posicion - 1'b1;
  end
endmodule
