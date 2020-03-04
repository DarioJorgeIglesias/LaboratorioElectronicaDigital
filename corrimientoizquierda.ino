//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
int I;
void setup(){
DDRK=0b11111111;//PUERTOK SALIDA
PORTK=1;}
void loop(){ 
for(I=0;I<=7;I++){
  if(I==0)PORTK=1;
  else
  PORTK=PORTK * 2;//Multiplicación *
  delay(1000);} 
}//end loop         




           
