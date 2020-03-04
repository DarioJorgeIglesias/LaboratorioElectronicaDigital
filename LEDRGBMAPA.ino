//Autor:Dario Jorge Iglesias
boolean A,B,C,D,LR,LB,LG;
//LG = LED GREEN (VERDE)
//LB = LED BLUE (AZUL)
//LR = LED REED (ROJO)
void setup() 
{
 pinMode(8,INPUT);//entrada D
 pinMode(9,INPUT);//entrada C
 pinMode(10,INPUT);//entrada B
 pinMode(11,INPUT);//entrada A
 pinMode(6,OUTPUT);//salida LB
 pinMode(5,OUTPUT);//salida LG
 pinMode(4,OUTPUT);//salida LR
}
void loop() 
{
 D=digitalRead(8);
 C=digitalRead(9);
 B=digitalRead(10);
 A=digitalRead(11);
 LB=(D&C)|(D&B);
 digitalWrite(6,LB);
 LG=(!D&C&A)|(!D&C&B)|(D&!C&!B);
 digitalWrite(5,LG);
 LR=(!D&!C)|(!D&!B&!A);
 digitalWrite(4,LR);
}   


