//Autor:Dario Jorge Iglesias
boolean D,C,B,A,Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q7;
boolean Q8,Q9,Q10,Q11,Q12,Q13,Q14,Q15;
int pote;
void setup(){ //Configuración
 pinMode(A2,OUTPUT);pinMode(A1,OUTPUT);
 pinMode(13,OUTPUT);pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);pinMode(10,OUTPUT);
 pinMode(9,OUTPUT); pinMode(8,OUTPUT);
 pinMode(7,OUTPUT); pinMode(6,OUTPUT);
 pinMode(5,OUTPUT); pinMode(4,OUTPUT);
 pinMode(3,OUTPUT); pinMode(2,OUTPUT);
 pinMode(1,OUTPUT); pinMode(0,OUTPUT);}
void loop(){ //Super lazo infinito
 pote=analogRead(A0);pote=map(pote,0,1023,0,9);
 D=boolean((pote&0x08)/8);C=boolean((pote&0x04)/4);
 B=boolean((pote&0x02)/2);A=boolean((pote&0x01)/1);
 Q0=!D&!C&!B&!A;digitalWrite(0,Q0);
 Q1=!D&!C&!B&A; digitalWrite(1,Q1);
 Q2=!D&!C&B&!A; digitalWrite(2,Q2);
 Q3=!D&!C&B&A;  digitalWrite(3,Q3);
 Q4=!D&C&!B&!A; digitalWrite(4,Q4);
 Q5=!D&C&!B&A;  digitalWrite(5,Q5);
 Q6=!D&C&B&!A;  digitalWrite(6,Q6);
 Q7=!D&C&B&A;   digitalWrite(7,Q7);
 Q8=D&!C&!B&!A; digitalWrite(8,Q8);
 Q9=D&!C&!B&A;  digitalWrite(9,Q9);
 Q10=D&!C&B&!A; digitalWrite(10,Q10);
 Q11=D&!C&B&A;  digitalWrite(11,Q11);
 Q12=D&C&!B&!A; digitalWrite(12,Q12);
 Q13=D&C&!B&A;  digitalWrite(13,Q13);
 Q14=D&C&B&!A;  digitalWrite(A1,Q14);
 Q15=D&C&B&A;   digitalWrite(A2,Q15);}


 



 
 
 

