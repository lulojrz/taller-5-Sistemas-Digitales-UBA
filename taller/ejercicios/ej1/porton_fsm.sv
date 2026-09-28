module porton_fsm (
    input  logic clk,
    input  logic rst,
    input  logic button,
    output logic cerrado,
    output logic abriendo,
    output logic abierto,
    output logic cerrando
);
  // COMPLETAR: FSM Moore con estados CERRADO, ABRIENDO, ABIERTO y CERRANDO.
   
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
       ABRIENDO: next_state =  ABIERTO;
       ABIERTO: next_state = button?CERRANDO:ABIERTO;
       CERRANDO: next_state =CERRADO;
        
        
      endcase
    end

    assign cerrado = (current_state ==CERRADO);
    assign abriendo = (current_state==ABRIENDO);
    assign abierto=(current_state ==ABIERTO);
    assign cerrando = (current_state ==CERRANDO);
   


endmodule

