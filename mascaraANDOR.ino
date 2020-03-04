//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
void setup() 
{
DDRB =0b11111111;//PB7 pin 13 OUT
PORTB=0B11111111;//Todo pin a 5V
}
void loop() 
{
PORTB =PORTB & 0x7F;//0b01111111
delay(2000);
PORTB =PORTB | 0x80;//0b10000000
delay(1000);
}






