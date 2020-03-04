//Autor:Dario Jorge Iglesias
boolean B,A,Z1,Z2;
void setup() 
{
 pinMode(0,INPUT_PULLUP);//entrada A
 pinMode(1,INPUT_PULLUP);//entrada B
 pinMode(8,OUTPUT);//salida Z1='(A.B)
 pinMode(9,OUTPUT);//salida Z2='A+'B
}
void loop() 
{
 B=digitalRead(1);//Guarda 1er dato
 A=digitalRead(0);//Guarda 2do dato
 Z1=!(A&B);//multiplica data e inv.
 Z2=!A|!B;//inv. cada dato y sum.
 digitalWrite(8,Z1);//actualiza
 digitalWrite(9,Z2);//salidas
}




