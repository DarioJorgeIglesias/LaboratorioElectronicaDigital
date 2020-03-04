//Autor:Dario Jorge Iglesias
boolean A,B,D0,D1,D2,D3,Y,I,W0,W1,W2,W3;
void setup(){
  pinMode(1,OUTPUT);//Salida DMX W3
  pinMode(2,OUTPUT);pinMode(3,OUTPUT);//W2,W1
  pinMode(4,OUTPUT);pinMode(6,OUTPUT);//W0,Y
  pinMode(5,INPUT);//Entrada DMX
  pinMode(7,INPUT); pinMode(8,INPUT);//A, B
  pinMode(9,INPUT);  //Canal de entrada D0
  pinMode(10,INPUT); //Canal de entrada D1
  pinMode(11,INPUT); //Canal de entrada D2
  pinMode(12,INPUT);}//Canal de entrada D3
void loop(){
  D0=digitalRead(9); //Leemos canal 0
  D1=digitalRead(10);//Lo mismo leemos canal 1
  D2=digitalRead(11);//Lo mismo leemos canal 2
  D3=digitalRead(12);//Lo mismo leemos canal 3
  A=digitalRead(7);//Leemos variable de control A
  B=digitalRead(8);//Leemos variable de control B
  Y=(!B&!A&D0)|(!B&A&D1)|(B&!A&D2)|(B&A&D3);//out mx
  digitalWrite(6,Y);//Saca dato en función de valores
  I=digitalRead(5);//Lee entrada DMX
  W0=!B&!A&I;digitalWrite(4,W0);
  W1=!B&A&I;digitalWrite(3,W1);
  W2=B&!A&I;digitalWrite(2,W2);
  W3=B&A&I;digitalWrite(1,W3);}




