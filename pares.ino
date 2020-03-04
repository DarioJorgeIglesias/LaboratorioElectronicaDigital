//Autor:Dario Jorge Iglesias
//un número par es un número 
//entero que es divisible entre
//dos.​
boolean D,C,B,A,Pares;
void setup(){
 pinMode(9,INPUT);//entrada D  
 pinMode(10,INPUT);//entrada C
 pinMode(11,INPUT);//entrada B
 pinMode(12,INPUT);//entrada A
 pinMode(8,OUTPUT);}//salida pares
void loop(){
 D=digitalRead(9); 
 C=digitalRead(10);
 B=digitalRead(11); 
 A=digitalRead(12);
 Pares=!A; digitalWrite(8,Pares);}


 
