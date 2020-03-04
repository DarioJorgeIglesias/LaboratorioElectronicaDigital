//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
boolean Pb6;
void setup()
{
//PUERTOB ENTRADA PIN12 PB6 PULL-UP
DDRB =0b10111111;
PORTB=0B01000000;//Pb6=1 PULL-UP
Serial.begin(9600);
}
void loop(){
Pb6 =boolean((PINB & 0x40)/64);//0b01000000
delay(1000);Serial.println(Pb6);}





