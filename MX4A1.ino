//Autor:Dario Jorge Iglesias
boolean A,B,D0,D1,D2,D3,Y;
void setup(){
pinMode(6,OUTPUT);//Salida Y del Mx4a1
pinMode(7,INPUT);//Variable de control A
pinMode(8,INPUT);//Variable de control B
pinMode(9,INPUT);  //Canal de entrada D0
pinMode(10,INPUT); //Canal de entrada D1
pinMode(11,INPUT); //Canal de entrada D2
pinMode(12,INPUT);}//Canal de entrada D3
void loop() 
{
  D0=digitalRead(9); //Leemos canal 0
  D1=digitalRead(10);//leemos canal 1
  D2=digitalRead(11);//leemos canal 2
  D3=digitalRead(12);//leemos canal 3
  A=digitalRead(7);//Leemos variable de control A
  B=digitalRead(8);//Leemos variable de control B
  Y=(!B&!A&D0)|(!B&A&D1)|(B&!A&D2)|(B&A&D3);//4MX1
  digitalWrite(6,Y);//Direcciona Dato según A y B
}


  


