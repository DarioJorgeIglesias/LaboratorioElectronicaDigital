//Autor:Dario Jorge Iglesias
boolean C,B,A,D0,D1,D2,D3,D4,D5,D6,D7,Y;
void setup(){
 pinMode(0,INPUT);pinMode(1,INPUT);//D0, D1
 pinMode(2,INPUT);pinMode(3,INPUT);//D2, D3
 pinMode(4,INPUT);pinMode(5,INPUT);//D4, D5
 pinMode(6,INPUT);pinMode(7,INPUT);//D6, D7
 pinMode(A2,INPUT_PULLUP);//entrada C
 pinMode(A1,INPUT_PULLUP);//entrada B
 pinMode(A0,INPUT_PULLUP);//entrada A
 pinMode(8,OUTPUT);}//salida Y       
void loop(){
C=digitalRead(A2);//Variables de control
B=digitalRead(A1); 
A=digitalRead(A0);
D0=digitalRead(0);//Canales de entrada
D1=digitalRead(1);D2=digitalRead(2);
D3=digitalRead(3);D4=digitalRead(4);
D5=digitalRead(5);D6=digitalRead(6);
D7=digitalRead(7);//último canal
Y=(D0&!C&!B&!A)|(D1&!C&!B&A)|(D2&!C&B&!A)|
(D3&!C&B&A)| (D4&C&!B&!A)|(D5&C&!B&A)|
(D6&C&B&!A)|(D7&C&B&A);//Función Mx
digitalWrite(8,Y);};//Salida Mx






            


            

