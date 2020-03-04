//Autor:Dario Jorge Iglesias
boolean B,A,Z1,Z2;
void setup(){
 pinMode(2,INPUT_PULLUP);//entrada B
 pinMode(3,INPUT_PULLUP);//entrada A
 pinMode(8,OUTPUT);//Z1 PARA B
 pinMode(9,OUTPUT);}//Z2 PARA B.A+B.B
void loop() 
{
 B=digitalRead(2);//Var.de entrada
 A=digitalRead(3);
 Z1=B;//FUNCIÓN Z1
 Z2=(B&A)|(B&B);//FUNCIÓN Z2
 digitalWrite(8,Z1);//salidas
 digitalWrite(9,Z2);}


 






