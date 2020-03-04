//Autor:Dario Jorge Iglesias
boolean A,B,C,D,Z1,Z2,Z3,Z4,ZT;
void setup() {
 pinMode(7,INPUT);   //A
 pinMode(8,INPUT);   //B
 pinMode(9,INPUT);   //C
 pinMode(10,INPUT);  //D
 pinMode(13,OUTPUT);}//ZT
void loop() {
 A=digitalRead(7);
 B=digitalRead(8);
 C=digitalRead(9);
 D=digitalRead(10);
 Z1=!(!C&A); Z2=Z1|B;
 Z3=(Z2^D);  Z4=Z3&A;
 ZT=!(Z4|D);
 digitalWrite(13,ZT);}





