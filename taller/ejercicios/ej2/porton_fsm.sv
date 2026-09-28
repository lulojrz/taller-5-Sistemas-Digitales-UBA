module porton_fsm_long (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic subir, output logic bajar,
    output logic abierto, output logic cerrado
);


typedef enum logic  [1:0]   {
    CERRADO,
    ABRIENDO,
    ABIERTO,
    CERRANDO
    } state_t;  
   state_t current_state, next_state; 

    always_ff @(posedge clk or posedge rst) begin 
      if (rst)
        current_state <= CERRADO;
       else
        current_state <= next_state;

     end

     always_comb begin
      case (current_state)
       CERRADO: next_state = button?ABRIENDO:CERRADO;
       ABRIENDO: next_state = (posicion==2'b11)?ABIERTO :ABRIENDO;
       ABIERTO: next_state = button?CERRANDO:ABIERTO;
       CERRANDO: next_state =(posicion==2'b00)?CERRADO:CERRANDO;
        
        
      endcase
    end


    assign subir = (current_state==ABRIENDO);
    assign bajar = (current_state == CERRANDO);
    assign abierto =  (current_state ==ABIERTO);
    assign cerrado = (current_state == CERRADO);



endmodule
