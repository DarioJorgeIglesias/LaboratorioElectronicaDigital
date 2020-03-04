//Autor:Dario Jorge Iglesias
boolean JROJO,JVERDE,ZVERDE,ZROJO;
boolean Y1,Y2,Y3,Y4;
void setup(){
 digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 pinMode(9,INPUT_PULLUP);
 pinMode(10,INPUT_PULLUP);
 pinMode(13,OUTPUT);//ROJO
 pinMode(12,OUTPUT);}//verde
void loop(){ 
 Y2=!(JROJO&ZROJO);
 Y4=!(JVERDE&ZVERDE);
 Y1=!(Y4&ZROJO);
 Y3=!(ZVERDE&Y2);
 JROJO=digitalRead(9);
 JVERDE=digitalRead(10);
 ZROJO=digitalRead(13);
 ZVERDE=digitalRead(12);
 digitalWrite(13,Y3);
 digitalWrite(12,Y1);}





 
