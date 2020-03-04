//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
boolean A,B,C,D,Z;
void setup(){
DDRK =0xF0;DDRB =0X80;}
void loop() {
A =(PINK & 0X01);
B =(PINK & 0X02)/2;
C =(PINK & 0X04)/4;
D =(PINK & 0X08)/8;
Z=(D&B&C)|(D&!B&A);
if(Z==1)PORTB=PORTB | 0B10000000;
else PORTB=PORTB & 0B01111111;}




