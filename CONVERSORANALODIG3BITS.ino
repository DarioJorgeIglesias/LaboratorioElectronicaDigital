//Autor:Dario Jorge Iglesias
boolean C,B,A,Q,Z,W;
int pote;
void setup()
{//Configuración I/O
 pinMode(2,OUTPUT);
 pinMode(1,OUTPUT);
 pinMode(0,OUTPUT);}
void loop(){//Lazo infinito
 pote=analogRead(A0);
 pote=map(pote,0,1023,0,7);
 C=boolean((pote&0x04)/4);
 B=boolean((pote&0x02)/2);
 A=boolean((pote&0x01)/1);
 W=C;digitalWrite(2,W);
 Q=B;digitalWrite(1,Q);
 Z=A;digitalWrite(0,Z);}
 
 


