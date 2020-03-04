//Autor:Dario Jorge Iglesias
boolean A,B,C,D0,D1,D2,D3,D4,D5,D6,D7,Y1;
boolean Y2,Y3,Y4,Y5,Y6,Y;
void setup(){  pinMode(11,OUTPUT);//Y del Mx
  pinMode(10,INPUT_PULLUP);//Var. de control C
  pinMode(9,INPUT_PULLUP); //Var. de control B
  pinMode(8,INPUT_PULLUP); //Var. de control A
  pinMode(0,INPUT); //Canal de entrada D0
  pinMode(1,INPUT); //Canal de entrada D1
  pinMode(2,INPUT); //Canal de entrada D2
  pinMode(3,INPUT); //Canal de entrada D3
  pinMode(4,INPUT); //Canal de entrada D4
  pinMode(5,INPUT); //Canal de entrada D5
  pinMode(6,INPUT); //Canal de entrada D6
  pinMode(7,INPUT);}//Canal de entrada D7          
void loop(){D0=digitalRead(0);
  D1=digitalRead(1);D2=digitalRead(2);
  D3=digitalRead(3);D4=digitalRead(4);
  D5=digitalRead(5);D6=digitalRead(6);
  D7=digitalRead(7);C=digitalRead(10);
  B=digitalRead(9); A=digitalRead(8);
  Y1=(!C&D0)|(C&D1);Y2=(!C&D2)|(C&D3);//MX2A1
  Y3=(!C&D4)|(C&D5);Y4=(!C&D6)|(C&D7);
  Y5=(!B&Y1)|(B&Y2);Y6=(!B&Y3)|(B&Y4);
  Y=(!A&Y5)|(A&Y6); digitalWrite(5,Y);}


  


