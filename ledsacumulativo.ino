//Autor:Dario Jorge Iglesias
boolean D,C,B,A,Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9;
int pote;
void setup(){ //Configuración
 pinMode(9,OUTPUT);pinMode(8,OUTPUT);pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);pinMode(5,OUTPUT);pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);pinMode(2,OUTPUT);pinMode(1,OUTPUT);
 pinMode(0,OUTPUT);}
void loop(){ //Super lazo infinito
 pote=analogRead(A0);pote=map(pote,0,1023,0,9);
 D=boolean((pote&0x08)/8);C=boolean((pote&0x04)/4);
 B=boolean((pote&0x02)/2);A=boolean((pote&0x01)/1);
 Q0=HIGH;digitalWrite(0,Q0);Q1=D|C|B|A;digitalWrite(1,Q1);
 Q2=D|C|B;digitalWrite(2,Q2);Q3=(B&A)|(C)|(D);
 digitalWrite(3,Q3);Q4=D|C;digitalWrite(4,Q4);
 Q5=(C|D)&(D|B|A);digitalWrite(5,Q5);
 Q6=(C&B)|D;digitalWrite(6,Q6);
 Q7=D|(C&B&A);digitalWrite(7,Q7);
 Q8=D;digitalWrite(8,Q8);
 Q9=D&(C|B|A);digitalWrite(9,Q9);}


 
 

