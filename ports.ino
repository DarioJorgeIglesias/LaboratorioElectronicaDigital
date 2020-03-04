//Autor:Darío Jorge Iglesias
#include<avr/IO.h>//libreria I/O, se puede omitir
void setup(){
DDRK = 0b11111111;}//PORTK OUT
void loop(){
PORTK = 0b00000000;//Todo puerto a 0
delay(1000);//1 Seg.
PORTK = 0B11111111;//Todo puerto a 1
delay(1000);}
//Nota:Si no configuramos arduino Mega 2560
//el compilador tira error, por puerto k










