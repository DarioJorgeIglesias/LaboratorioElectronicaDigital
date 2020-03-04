//Autor:Dario Jorge Iglesias
boolean Qn,S,R,Q;
void setup() {
 pinMode(9,INPUT);//S
 pinMode(10,INPUT);//R
 pinMode(13,OUTPUT);//Qn
 digitalWrite(13,LOW);}
void loop() {
 S=digitalRead(9);
 R=digitalRead(10);
 Q=digitalRead(13);
 Qn=S|(!R&Q);
 digitalWrite(13,Qn);}
 


