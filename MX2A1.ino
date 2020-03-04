//Autor:Dario Jorge Iglesias
boolean A,D0,D1,Y;
void setup(){
  pinMode(6,OUTPUT);//Salida Y del Mx
  pinMode(7,INPUT);//Variable de control A
  pinMode(8,INPUT);//Canal de entrada D0
  pinMode(9,INPUT);}//Canal de entrada D1
void loop()//Super lazo infinito
  {
  D0=digitalRead(8);//Leemos canal D0 
  D1=digitalRead(9);//leemos el otro canal
  A=digitalRead(7);//Leemos var. de control
  Y=(!A&D0)|(A&D1);//Funcion 2MX1
  digitalWrite(6,Y);//Saca dato en Y
  }

  



  

  


