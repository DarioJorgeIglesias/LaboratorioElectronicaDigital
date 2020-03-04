//Autor:Dario Jorge Iglesias
boolean Qn,NQn,NOS,NOR;
void setup(){
 pinMode(9,INPUT_PULLUP);//NOS
 pinMode(10,INPUT_PULLUP);//NOR
 pinMode(13,OUTPUT);//Qn
 pinMode(12,OUTPUT);//NQn
 digitalWrite(13,LOW);
 digitalWrite(12,LOW);}
void loop(){
  NOS=digitalRead(9);
  NOR=digitalRead(10);
  Qn=digitalRead(13);
  NQn=digitalRead(12);
  Qn=!(NOS&NQn);
  digitalWrite(13,Qn);
  NQn=!(NOR&Qn);
  digitalWrite(12,NQn);}

  

  
  
