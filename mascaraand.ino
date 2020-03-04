//Autor:Darío Jorge Iglesias
#include<avr/IO.h>//Se puede omitir
boolean Pb7;
void setup()
{
//PUERTOB SALIDA PIN13 PB7
DDRB = 0b11111111;//Todo Out
PORTB=0B11111111;//Todo pin a 5V
Serial.begin(9600);//baud=9600
}
void loop() 
{
Pb7 =(PORTB & 0x80)/128;//0b10000000
delay(1000);
Serial.println(Pb7);}




