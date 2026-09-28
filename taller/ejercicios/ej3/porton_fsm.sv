module porton_fsm_smart (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic abrir, output logic cerrar, output logic pausa,
    output logic abierto, output logic cerrado
);
  // COMPLETAR: un click inicia; durante el movimiento pausa; desde la pausa
  // otro click inicia el movimiento en la dirección opuesta.
  typedef enum logic  [2:0]   {
    CERRADO,
    ABRIENDO,
    ABIERTO,
    PAUSA_ABRIENDO,
    PAUSA_CERRANDO,
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
      next_state = current_state;
       case (current_state) 
       
       CERRADO: begin  next_state =  button?ABRIENDO:CERRADO; end 
       
       
       ABRIENDO: begin 
       if (button)
       next_state = PAUSA_ABRIENDO;
       else if (posicion ==2'b11)
         next_state = ABIERTO;
       else 
        next_state = ABRIENDO;end 
        
       PAUSA_ABRIENDO:begin 
       if (posicion == 2'b11)
       next_state = ABIERTO;
       else if(button)
        next_state = CERRANDO;
       else 
       next_state = PAUSA_ABRIENDO;end 
       
       ABIERTO:begin  next_state = button?CERRANDO:ABIERTO;end

       CERRANDO:begin 
       if(button)
        next_state=PAUSA_CERRANDO;
       else if(posicion==2'b00)
        next_state = CERRADO;
       else 
        next_state = CERRANDO
       ;end 

       PAUSA_CERRANDO:begin 
        if (posicion==2'b00)
         next_state = CERRADO;
        else if (button)
         next_state = ABRIENDO;
         else 
         next_state = PAUSA_CERRANDO;end 

      default : next_state = CERRADO; 
        

    
        
      endcase
      
      end

      assign abrir = (current_state == ABRIENDO); 
      assign cerrar = (current_state == CERRANDO);
      assign pausa = (current_state == PAUSA_ABRIENDO) || (current_state == PAUSA_CERRANDO); 
      assign abierto = (current_state == ABIERTO); 
      assign cerrado = (current_state == CERRADO);


endmodule
