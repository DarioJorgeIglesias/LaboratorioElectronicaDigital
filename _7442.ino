//Autor:Dario Jorge Iglesias
boolean D,C,B,A,QO,QI,QII,QIII,QIV,QV,QVI,QVII,QVIII,QIX;//Variables de entrada
int pote;
void setup() //Configuración
{
 pinMode(9,OUTPUT);//Pin 9 salida
 pinMode(8,OUTPUT);//Pin 8 salida
 pinMode(7,OUTPUT);//Pin 7 salida
 pinMode(6,OUTPUT);//Pin 6 salida
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(1,OUTPUT);
 pinMode(0,OUTPUT);
}
void loop() //Super lazo infinito
{
 pote=analogRead(A0);
 pote=map(pote,0,1023,0,9);
 D=boolean((pote&0x08)/8);
 C=boolean((pote&0x04)/4);
 B=boolean((pote&0x02)/2);
 A=boolean((pote&0x01)/1);
 QO=!(!D&!C&!B&!A);
 digitalWrite(0,QO);
 QI=!(!D&!C&!B&A);
 digitalWrite(1,QI);
 QII=!(!D&!C&B&!A);
 digitalWrite(2,QII);
 QIII=!(!D&!C&B&A);
 digitalWrite(3,QIII);
 QIV=!(!D&C&!B&!A);
 digitalWrite(4,QIV);
 QV=!(!D&C&!B&A);
 digitalWrite(5,QV);
 QVI=!(!D&C&B&!A);
 digitalWrite(6,QVI);
 QVII=!(!D&C&B&A);
 digitalWrite(7,QVII);
 QVIII=!(D&!C&!B&!A);
 digitalWrite(8,QVIII);
 QIX=!(D&!C&!B&A);
 digitalWrite(9,QIX);
}

