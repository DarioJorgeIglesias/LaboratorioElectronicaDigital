//Autor:Dario Jorge Iglesias
boolean E=LOW,D,C,B,A,Y6,Y7,Y8;
void setup(){
 pinMode(8,INPUT_PULLUP); //entrada D  
 pinMode(9,INPUT_PULLUP); //entrada C
 pinMode(10,INPUT_PULLUP);//entrada B
 pinMode(11,INPUT_PULLUP);//entrada A
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT); //salida Y6
 pinMode(5,OUTPUT); //salida Y7
 pinMode(6,OUTPUT);}//salida Y8
void loop(){
 D=digitalRead(8);
 C=digitalRead(9);
 B=digitalRead(10);
 A=digitalRead(11);
 Y6=(D&!C&!B&!A)|(E&!D&B&A)|(!D&C&!B&!A)|
 (!E&!D&!B&!A)| (!E&!D&B&!A);
 Y7=(!D&!C&B&A)|(E&!D&C&!A)|(!D&C&!B)|
 (!E&!D&!C&B);
 Y8=(E&!D&!C&!B&A)|(E&!D&!C&B&!A)|
 (!E&!D&!C&!B);
 digitalWrite(3,Y6);
 digitalWrite(4,B);
 digitalWrite(5,Y7);
 digitalWrite(6,Y8);}


 


