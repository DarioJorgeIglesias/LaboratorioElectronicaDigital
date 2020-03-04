//Autor:Dario Jorge Iglesias
boolean Qn,NQn,S,R;
void setup() {
 pinMode(9,INPUT);
 pinMode(10,INPUT);//S Y R
 pinMode(13,OUTPUT);//Qn
 pinMode(12,OUTPUT);//NQn
 digitalWrite(13,LOW);
 digitalWrite(12,LOW);}
void loop() {
  S=digitalRead(9);
  R=digitalRead(10);
  Qn=digitalRead(13);
  NQn=digitalRead(12);
  Qn=!(R|NQn);NQn=!(S|Qn);
  digitalWrite(13,Qn);
  digitalWrite(12,NQn);}
  


