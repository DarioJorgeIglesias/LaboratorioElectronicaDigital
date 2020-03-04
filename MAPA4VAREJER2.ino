//Autor:Dario Jorge Iglesias
boolean A,B,C,D,Z;
void setup() 
{
 pinMode(7,INPUT);//A
 pinMode(8,INPUT);//B
 pinMode(9,INPUT);//C
 pinMode(10,INPUT);//D
 pinMode(13,OUTPUT);//Z
}
void loop() {
 A=digitalRead(7);
 B=digitalRead(8);
 C=digitalRead(9);
 D=digitalRead(10);
 Z=(!D&!C)|(!B&!A);
 digitalWrite(13,Z);}

 
