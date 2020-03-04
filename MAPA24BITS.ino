//Autor:Dario Jorge Iglesias
boolean D,C,B,A,Z2;
void setup() 
{
 pinMode(8,INPUT);//entrada D
 pinMode(9,INPUT);//entrada C
 pinMode(10,INPUT);//entrada B
 pinMode(11,INPUT);//entrada A
 pinMode(7,OUTPUT);//Pin 7 salida
}
void loop() {
 D=digitalRead(8);
 B=digitalRead(10);
 C=digitalRead(9);
 A=digitalRead(11);
 Z2=(!D&!A)|(C&A);
 digitalWrite(7,Z2);}



 
 
