//Autor:Dario Jorge Iglesias
boolean D,C,B,A,a,b,c,d,e,f,g;//Var. I/O
void setup(){
 pinMode(8,INPUT); //Entrada D
 pinMode(9,INPUT); //Entrada C
 pinMode(10,INPUT);//Entrada B
 pinMode(11,INPUT);//Entrada A
 pinMode(6,OUTPUT);//Salida Seg. a
 pinMode(5,OUTPUT);pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);pinMode(2,OUTPUT);
 pinMode(1,OUTPUT);pinMode(0,OUTPUT);}
void loop(){ //Super lazo infinito
 D=digitalRead(8); //Lee peso 8
 C=digitalRead(9); //Lee peso 4
 B=digitalRead(10);//Lee peso 2
 A=digitalRead(11);//Lee peso 1
 a=(C|A)&(!B)&(!D)&(!C|!A);
 digitalWrite(6,a); 
 b=(C)&(!B|!A)&(B|A);
 digitalWrite(5,b);    
 c=!A&!C&B;
 digitalWrite(4,c);
 d=(C|A)&(!B|A)&(!C|B|!A)&(C|!B);
 digitalWrite(3,d);
 e=(C|A)&(!B|A);
 digitalWrite(2,e);
 f=(B|A)&(!C|B)&(!C|A)&!D;
 digitalWrite(1,f);
 g=(C|!B)&(!B|A)&!D&(!C|B);
 digitalWrite(0,g);}
 
 
 

