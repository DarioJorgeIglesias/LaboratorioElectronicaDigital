//Autor:Dario Jorge Iglesias
boolean D,C,B,A,E3,E2,E1,E0;
void setup() {
 pinMode(8,INPUT); pinMode(9,INPUT);//E3, E2 
 pinMode(10,INPUT);pinMode(11,INPUT);//E1, E0
 pinMode(6,OUTPUT);pinMode(5,OUTPUT);//Out D,C
 pinMode(4,OUTPUT);pinMode(3,OUTPUT);}//Out B,A
void loop(){ 
 E3=digitalRead(8);E2=digitalRead(9);//Entradas
 E1=digitalRead(10);E0=digitalRead(11);
 D=(E3&E2)|(E3&E1&E0);
 digitalWrite(6,D);
 C=(!E2&!E1)|(E2&E1&E0)|(E3&E1&!E0);
 digitalWrite(5,C);
 B=(E0 ^ E1);
 digitalWrite(4,B);
 A=(!E1&!E0)|(E1&!E0);
 digitalWrite(3,A);}


