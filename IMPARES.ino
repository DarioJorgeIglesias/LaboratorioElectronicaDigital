//Autor:Dario Jorge Iglesias
//Los números impares NO se 
//pueden dividir exactamente en 
//grupos de dos. 
boolean D,C,B,A,Impares;
void setup() {
 pinMode(9,INPUT);//entrada D  
 pinMode(10,INPUT);//entrada C
 pinMode(11,INPUT);//entrada B
 pinMode(12,INPUT);//entrada A
 pinMode(8,OUTPUT);}//salida pares
void loop() {
 D=digitalRead(9); 
 C=digitalRead(10);
 B=digitalRead(11); 
 A=digitalRead(12);
 Impares=A; 
 digitalWrite(8,Impares);}


 


 

