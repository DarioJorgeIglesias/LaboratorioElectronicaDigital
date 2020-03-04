//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
int I;
void setup(){
DDRK=0b11111111;//PUERTOK SALIDA
PORTK=128;}
void loop(){ 
for(I=0;I<=7;I++){
delay(1000);
PORTK=PORTK>>1; 
if(PORTK==0)
PORTK=128;}}

           
