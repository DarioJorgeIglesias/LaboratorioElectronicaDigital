//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
int doblebyte;
void setup() {
DDRK = 0b00000000;//PUERTOK ENTRADA
DDRF = 0b00000000;//PUERTOF ENTRADA
PORTK=0b11111111;//A15 a A8 PULL-UP
PORTF=0b11111111;//A7 a A0 PULL-UP
Serial.begin(9600);}
void loop(){ 
doblebyte=PORTK;
doblebyte=doblebyte * 128;//corrimiento
doblebyte=doblebyte | PORTF;//concateno
Serial.println(doblebyte);delay(1000);}


