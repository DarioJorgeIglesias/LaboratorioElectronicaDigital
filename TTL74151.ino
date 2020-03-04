//Autor:Dario Jorge Iglesias
boolean C,B,A,S,D0,D1,D2,D3,D4;
boolean D5,D6,D7,D8,Y,W;
void setup(){
 pinMode(0,INPUT_PULLUP);//entrada D0
 pinMode(1,INPUT_PULLUP);//entrada D1
 pinMode(2,INPUT_PULLUP);//entrada D2
 pinMode(3,INPUT_PULLUP);//entrada D3
 pinMode(4,INPUT_PULLUP);//entrada D4
 pinMode(5,INPUT_PULLUP);//entrada D5
 pinMode(6,INPUT_PULLUP);//entrada D6
 pinMode(7,INPUT_PULLUP);//entrada D7
 pinMode(A2,INPUT_PULLUP);//entrada C
 pinMode(A1,INPUT_PULLUP);//entrada B
 pinMode(A0,INPUT_PULLUP);//entrada A
 pinMode(A3,INPUT_PULLUP);//entrada S
 pinMode(8,OUTPUT); //salida Y
 pinMode(9,OUTPUT);}//salida Z
void loop(){
 C=digitalRead(A2);//Var. de control
 B=digitalRead(A1);
 A=digitalRead(A0);
 S=digitalRead(A3);//Var.  strobe
 D0=digitalRead(0);//entradas
 D1=digitalRead(1);
 D2=digitalRead(2);
 D3=digitalRead(3);
 D4=digitalRead(4);
 D5=digitalRead(5);
 D6=digitalRead(6);
 D7=digitalRead(7);
 Y=(!S&D0&!C&!B&!A)|(!S&D1&!C&!B&A)|
 (!S&D2&!C&B&!A)|(!S&D3&!C&B&A)|
 (!S&D4&C&!B&!A)|(!S&D5&C&!B&A)|
 (!S&D6&C&B&!A)|(!S&D7&C&B&A);
 W=!Y; digitalWrite(8,Y);
 digitalWrite(9,W);}


