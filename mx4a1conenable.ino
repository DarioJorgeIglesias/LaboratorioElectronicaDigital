//Autor:Dario Jorge Iglesias
boolean A,B,I,D0,D1,D2,D3,Y;
void setup(){
 pinMode(5,OUTPUT); //Salida Y del multiplexor
 pinMode(6,INPUT);  //Entrada de enable I
 pinMode(7,INPUT);  //Variable de control A
 pinMode(8,INPUT);  //Variable de control B
 pinMode(9,INPUT);  //Canal de entrada D0
 pinMode(10,INPUT); //Canal de entrada D1
 pinMode(11,INPUT); //Canal de entrada D2
 pinMode(12,INPUT);}//Canal de entrada D3
void loop(){
 D0=digitalRead(9); //Leemos canal 0
 D1=digitalRead(10);//Lo mismo leemos el canal 1
 D2=digitalRead(11);//Lo mismo leemos el canal 2
 D3=digitalRead(12);//Lo mismo leemos el canal 3
 I=digitalRead(6);//Leemos variable de habilitación I
 A=digitalRead(7);//Leemos variable de control A
 B=digitalRead(8);//Leemos variable de control B
 Y=(!I&!B&!A&D0)|(!I&!B&A&D1)|(!I&B&!A&D2)|(!I&B&A&D3);
 digitalWrite(6,Y);}//Saca dato en función de valores








