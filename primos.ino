//Autor:Dario Jorge Iglesias
//un número primo es un número 
//natural mayor que 1 que tiene 
//únicamente dos divisores distintos: 
//él mismo y el 1.​​
boolean D,C,B,A,Primos;
void setup() 
{
 pinMode(9,INPUT);//entrada D  
 pinMode(10,INPUT);//entrada C
 pinMode(11,INPUT);//entrada B
 pinMode(12,INPUT);//entrada A
 pinMode(8,OUTPUT);//salida primos
}
void loop() 
{
 D=digitalRead(9); 
 C=digitalRead(10);
 B=digitalRead(11); 
 A=digitalRead(12);
 Primos=A&(C|B)|!D&((C&A)|(!C&B)); 
 digitalWrite(8,Primos);
}






