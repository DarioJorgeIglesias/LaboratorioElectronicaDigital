//Autor:Dario Jorge Iglesias
boolean b1,b0,a1,a0,Y,Z,W;//Decl. de var.
void setup()       
{ //configuración de pines I/O
 pinMode(8,INPUT);pinMode(9,INPUT);
 pinMode(10,INPUT);pinMode(11,INPUT);
 pinMode(7,OUTPUT);pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);}
void loop(){ //ciclo infinito
 b1=digitalRead(8);//leemos pines dig.
 b0=digitalRead(9);
 a1=digitalRead(10);
 a0=digitalRead(11);
 Y=(!b1&!b0&a0)|(!b1&a1)|(!b0&a1&a0);//Y=A>B
 digitalWrite(7,Y);//actualizamos salida
 Z=(!b1&!b0&!a1&!a0)|(!b1&b0&!a1&a0)|(b1&b0&b1&a0)
 |(b1&!b0&a1&!a0);//Z=A=B
 digitalWrite(6,Z);//actualizamos salida
 W=(b0&!a1&!a0)|(b1&!a1)|(b1&b0&!a0);//W=A<B
 digitalWrite(5,W);//refrescamos salida
}//FIN LLAVE LOOP






