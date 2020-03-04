//Autor:Dario Jorge Iglesias
boolean B,A,Z1,Z2;
void setup(){ 
 pinMode(2,INPUT_PULLUP);//entrada B
 pinMode(3,INPUT_PULLUP);//entrada A
 pinMode(8,OUTPUT);//salida Z1 PARA A
 pinMode(9,OUTPUT);}//Z2 PARA A+A.B           
void loop(){
 B=digitalRead(2);//Variables de In
 A=digitalRead(3);
 Z1=A;//FUNCIÓN Z1
 Z2=A|(A&B);//FUNCIÓN Z2
 digitalWrite(8,Z1);//refresco de Out
 digitalWrite(9,Z2);}


 
           

           



           

           



