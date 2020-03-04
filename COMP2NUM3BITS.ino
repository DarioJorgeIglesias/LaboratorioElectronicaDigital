//Autor:Dario Jorge Iglesias
boolean b2,b1,b0,a2,a1,a0,Y,Z,W;//Decl. de var.
void setup(){  //Configuración de pines I/O
 pinMode(8,INPUT); pinMode(9,INPUT);
 pinMode(10,INPUT);pinMode(11,INPUT);
 pinMode(12,INPUT);pinMode(7,INPUT);
 pinMode(6,OUTPUT);pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);}
void loop(){
 b2=digitalRead(12);b1=digitalRead(8);
 b0=digitalRead(9); a2=digitalRead(7);
 a1=digitalRead(10);a0=digitalRead(11);
 Y=(!b2&a2)|(!b1&a2&a1)|(!b1&!b0&a2&a0)|
 (!b2&!b0&a1&a0)|(b1&!b0&a2&a1&a0)|
 (!b2&!b1&!b0&a0)|(!b2&!b1&a1);//Y=A>B
 digitalWrite(6,Y);//actualizamos salida
 Z=!(b2^a2)&!(b1^a1)&!(b0^a0);
 digitalWrite(5,Z);//Z=(A=B)
 W=(b2&!a2)|(b2&b0&!a1&!a0)|(b2&b1&b0&a1&!a0)|
 (b2&b1&!a1)|(b1&!a2&!a1)|(b1&b0&!a2&!a0)|
 (b0&!a2&!a1&!a0);//W=B>A
 digitalWrite(4,W);}//refrescamos salida

 

 



