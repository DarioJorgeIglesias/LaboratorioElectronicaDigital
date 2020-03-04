//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
boolean Pb6;
void setup()
{
//PUERTOB ENTRADA PIN12 Pb6
DDRB = 0b10111111;
Serial.begin(9600);
}
void loop(){
Pb6 =boolean((PINB & 0x40)/64);//0b01000000
delay(1000);
Serial.println(Pb6);}



