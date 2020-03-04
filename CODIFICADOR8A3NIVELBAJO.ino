//Autor:Dario Jorge Iglesias
boolean NA0,NA1,NA2,NA3,NA4;//variables 
boolean NA5,NA6,NA7,O0,O1,O2;//booleanas    
void setup(){//CONFIG. I/O
 pinMode(1,INPUT_PULLUP);pinMode(2,INPUT_PULLUP);
 pinMode(3,INPUT_PULLUP);pinMode(4,INPUT_PULLUP);
 pinMode(5,INPUT_PULLUP);pinMode(6,INPUT_PULLUP);
 pinMode(7,INPUT_PULLUP);pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);pinMode(10,OUTPUT);}
void loop(){
 NA1=digitalRead(1);//ciclo infinito
 NA2=digitalRead(2);NA3=digitalRead(3);
 NA4=digitalRead(4);NA5=digitalRead(5);
 NA6=digitalRead(6);NA7=digitalRead(7); 
 O0=!NA1|!NA3|!NA5|!NA7;
 O1=!NA2|!NA3|!NA6|!NA7;
 O2=!NA4|!NA5|!NA6|!NA7;
 digitalWrite(8,O0);
 digitalWrite(9,O1);
 digitalWrite(10,O2);}
 
 
