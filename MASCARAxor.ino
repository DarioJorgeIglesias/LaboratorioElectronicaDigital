//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
void setup()
{
//PUERTOB SALIDA PIN13 PB7
DDRB =0b11111111;
PORTB=0B11111111;
}
void loop(){
PORTB=PORTB ^ 0x80;//0b10000000
delay(1000);}


