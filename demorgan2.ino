//Autor:Dario Jorge Iglesias
boolean B,A,Z1,Z2;
void setup() 
{
 pinMode(0,INPUT_PULLUP);//entrada A
 pinMode(1,INPUT_PULLUP);//entrada B
 pinMode(8,OUTPUT);//salida Z1='(A+B)
 pinMode(9,OUTPUT);//salida Z2='A.'B
}
void loop() 
{
 B=digitalRead(1);//Capturó B
 A=digitalRead(0);//Capturó A
 Z1=!(A|B);//Sumo e invierto
 Z2=!A&!B;//inv. cada var. y mult.
 digitalWrite(8,Z1);//salida
 digitalWrite(9,Z2);//actualizadas
}


