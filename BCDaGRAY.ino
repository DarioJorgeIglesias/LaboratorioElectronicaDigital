//Autor:Dario Jorge Iglesias
boolean D,C,B,A,G3,G2,G1,G0;
void setup() 
{
 pinMode(8,INPUT); //entrada D
 pinMode(9,INPUT); //entrada C
 pinMode(10,INPUT);//entrada B
 pinMode(11,INPUT);//entrada A
 pinMode(6,OUTPUT);//salida G3
 pinMode(5,OUTPUT);//salida G2
 pinMode(4,OUTPUT);//salida G1
 pinMode(3,OUTPUT);//salida G0
}
void loop() 
{
 D=digitalRead(8);
 C=digitalRead(9);
 B=digitalRead(10);
 A=digitalRead(11);
 G3=D;//G3 ADOPTA D
 digitalWrite(6,G3);
 G2=C|D;//C OR D
 digitalWrite(5,G2);
 G1=B^C;//B XOR C
 digitalWrite(4,G1);
 G0=A^B;//A XOR B
 digitalWrite(3,G0);
}



