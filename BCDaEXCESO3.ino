//Autor:Dario Jorge Iglesias
boolean D,C,B,A,E3,E2,E1,E0;
void setup() 
{
 pinMode(8,INPUT); //entrada D
 pinMode(9,INPUT); //entrada C
 pinMode(10,INPUT);//entrada B
 pinMode(11,INPUT);//entrada A
 pinMode(6,OUTPUT);//salida E3
 pinMode(5,OUTPUT);//salida E2
 pinMode(4,OUTPUT);//salida E1
 pinMode(3,OUTPUT);//salida E0
}
void loop()
{
 D=digitalRead(8);
 C=digitalRead(9);
 B=digitalRead(10);
 A=digitalRead(11);
 E3=D|(C&B)|(C&A);
 digitalWrite(6,E3);
 E2=(!C&B)|(C&!B&!A)|(!C&A);
 digitalWrite(5,E2);
 E1=!(A ^ B);
 digitalWrite(4,E1);
 E0=!A; 
 digitalWrite(3,E0);
 }

 


