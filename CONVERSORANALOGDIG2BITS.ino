//Autor:Dario Jorge Iglesias
boolean B,A,Q,Z;
int pote;//Variable entera
void setup()
{//Configuración I/O
 pinMode(1,OUTPUT);
 pinMode(0,OUTPUT);}
void loop() 
{//Super lazo infinito
 pote=analogRead(A0);
 pote=map(pote,0,1023,0,3);
 B=boolean((pote&0x02)/2);
 A=boolean((pote&0x01)/1);
 Q=B;digitalWrite(1,Q);
 Z=A;digitalWrite(0,Z);}




 
 
 
 
