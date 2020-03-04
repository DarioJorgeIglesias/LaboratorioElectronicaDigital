//Autor:Dario Jorge Iglesias
boolean A,B,D0,D1,D2,D3,Y1,Y2,Y;
void setup(){
  pinMode(5,OUTPUT); //Salida Y del MX
  pinMode(6,INPUT);  //Variable de control B
  pinMode(7,INPUT);  //Variable de control A
  pinMode(8,INPUT);  //Canal de entrada D0
  pinMode(9,INPUT);  //Canal de entrada D1
  pinMode(10,INPUT); //Canal de entrada D2
  pinMode(11,INPUT);}//Canal de entrada D3
void loop(){D0=digitalRead(8);//Leemos canal 
  D1=digitalRead(9); //leemos el otro canal
  D2=digitalRead(10);//Leemos canal 
  D3=digitalRead(11);//leemos el otro canal
  B=digitalRead(6);//Leemos variable de control
  A=digitalRead(7);//Leemos variable de control
  Y1=(!B&D0)|(B&D1);//Funcion 2MX1
  Y2=(!B&D2)|(B&D3);//Funcion 2MX1
  Y=(!A&Y1)|(A&Y2); //Funcion 2MX1
  digitalWrite(5,Y);}//Saca dato en función de valores





