//Autor:Dario Jorge Iglesias
boolean IQn,INOQn,INOS,INOR,IIQn,IINOQn,IINOS,IINOR;
void setup(){pinMode(9,INPUT_PULLUP);//INOS
 pinMode(10,INPUT_PULLUP);//INOR
 pinMode(13,OUTPUT);//IQn
 pinMode(12,OUTPUT);//INOQn
 digitalWrite(13,LOW);
 digitalWrite(12,LOW);
 pinMode(A0,INPUT_PULLUP);//IINOS
 pinMode(A1,INPUT_PULLUP);//IINOR
 pinMode(A2,OUTPUT);//IIQn
 pinMode(A3,OUTPUT);//IINOQn
 digitalWrite(A2,LOW);
 digitalWrite(A3,LOW);}
void loop(){INOS=digitalRead(9);INOR=digitalRead(10); 
  IQn=digitalRead(13);INOQn=digitalRead(12);
  IINOS=digitalRead(A0);IINOR=digitalRead(A1);
  IIQn=digitalRead(A2);IINOQn=digitalRead(A3);
  IIQn=!(IINOS&IINOQn);digitalWrite(A2,IIQn);
  IINOQn=!(IINOR&IIQn);digitalWrite(A3,IINOQn);}
  
