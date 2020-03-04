//Autor:Dario Jorge Iglesias
boolean D,C,B,A,C3,C2,C1,C0;
void setup() 
{
 pinMode(8,INPUT); //entrada D
 pinMode(9,INPUT); //entrada C
 pinMode(10,INPUT);//entrada B
 pinMode(11,INPUT);//entrada A
 pinMode(6,OUTPUT);//salida C3
 pinMode(5,OUTPUT);//salida C2
 pinMode(4,OUTPUT);//salida C1
 pinMode(3,OUTPUT);//salida C0
}
void loop() 
{
 D=digitalRead(8);
 C=digitalRead(9);
 B=digitalRead(10);
 A=digitalRead(11);
 C3=!D&!C&!B;
 digitalWrite(6,C3);
 C2=C^B;
 digitalWrite(5,C2);
 C1=B;
 digitalWrite(4,C1);
 C0=!A&(!D|!B);
 digitalWrite(3,C0);
}



