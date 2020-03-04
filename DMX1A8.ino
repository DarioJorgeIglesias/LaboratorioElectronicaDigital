//Autor:Dario Jorge Iglesias
boolean A,B,C,D0,D1,D2,D3,D4,D5,D6,D7,I;
void setup()     {
pinMode(13,INPUT);//Entrada de dato I
pinMode(12,INPUT);pinMode(11,INPUT);//C, B
pinMode(10,INPUT);pinMode(2,OUTPUT);//A, D0
pinMode(3,OUTPUT);pinMode(4,OUTPUT);//D1, D2
pinMode(5,OUTPUT);pinMode(6,OUTPUT);//D3, D4
pinMode(7,OUTPUT);pinMode(8,OUTPUT);//D5, D6
pinMode(9,OUTPUT);}//D7
void loop(){
I=digitalRead(13);A=digitalRead(10);
B=digitalRead(11);C=digitalRead(12);
D0=!C&!B&!A&I;    D1=!C&!B&A&I;
D2=!C&B&!A&I;     D3=!C&B&A&I;
D4=C&!B&!A&I;     D5=C&!B&A&I;
D6=C&B&!A&I;      D7=C&B&A&I;
digitalWrite(2,D0);digitalWrite(3,D1);
digitalWrite(4,D2);digitalWrite(5,D3);
digitalWrite(6,D4);digitalWrite(7,D5);
digitalWrite(8,D6);digitalWrite(9,D7);}






  


