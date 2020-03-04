//Autor:Dario Jorge Iglesias
boolean D,C,B,A,Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9;
int pote;
void setup(){ //Configuración
 pinMode(9,OUTPUT);pinMode(8,OUTPUT);//Pin 9 y 8 Out
 pinMode(7,OUTPUT);pinMode(6,OUTPUT);//Pin 7 y 6 Out
 pinMode(5,OUTPUT);pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);pinMode(2,OUTPUT);
 pinMode(1,OUTPUT);pinMode(0,OUTPUT);}
void loop(){ //Super lazo infinito
 pote=analogRead(A0);//Adquiere el valor análogo
 pote=map(pote,0,1023,0,9);//Transforma datos
 D=boolean((pote&0x08)/8);C=boolean((pote&0x04)/4);
 B=boolean((pote&0x02)/2);A=boolean((pote&0x01)/1);
 Q0=!D&!C&!B&!A; digitalWrite(0,Q0);
 Q1=!D&!C&!B&A;  digitalWrite(1,Q1);
 Q2=!D&!C&B&!A;  digitalWrite(2,Q2);
 Q3=!D&!C&B&A;   digitalWrite(3,Q3);
 Q4=!D&C&!B&!A;  digitalWrite(4,Q4);
 Q5=!D&C&!B&A;   digitalWrite(5,Q5);
 Q6=!D&C&B&!A;   digitalWrite(6,Q6);
 Q7=!D&C&B&A;    digitalWrite(7,Q7);
 Q8=D&!C&!B&!A;  digitalWrite(8,Q8);
 Q9=D&!C&!B&A;   digitalWrite(9,Q9);}



