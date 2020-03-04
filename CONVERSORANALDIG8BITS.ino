//Autor:Dario Jorge Iglesias
boolean H,G,F,E,D,C,B,A;//Var. Booleanas
int pote;//Var. entera
void setup(){ //Configuración I/O
 pinMode(7,OUTPUT); pinMode(6,OUTPUT);
 pinMode(5,OUTPUT); pinMode(4,OUTPUT);
 pinMode(3,OUTPUT); pinMode(2,OUTPUT);
 pinMode(1,OUTPUT); pinMode(0,OUTPUT);}
void loop() {//Super lazo infinito
 pote=analogRead(A0);//adquiere valor análogo
 pote=map(pote,0,1023,0,255);//Transformación
 H=boolean((pote&0x80)/128);digitalWrite(7,H);
 G=boolean((pote&0x40)/64); digitalWrite(6,G);
 F=boolean((pote&0x20)/32); digitalWrite(5,F);
 E=boolean((pote&0x10)/16); digitalWrite(4,E);
 D=boolean((pote&0x08)/8);  digitalWrite(3,D);
 C=boolean((pote&0x04)/4);  digitalWrite(2,C);
 B=boolean((pote&0x02)/2);  digitalWrite(1,B);
 A=boolean((pote&0x01)/1);  digitalWrite(0,A);}
 
 
 
 
 
 
 
 
 


