//Autor:Darío Jorge Iglesias
#include<avr/IO.h>
int I;
void setup(){ 
DDRK =0b11111111;//PUERTOK SALIDA
PORTK=128;}
void loop(){ 
for(I=7;I>=0;I--){
  if(I==7)PORTK=128;
  else
  PORTK=PORTK / 2;//División /
  delay(1000); } }//end loop

           
           
