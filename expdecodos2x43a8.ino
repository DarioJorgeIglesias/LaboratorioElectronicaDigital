//Autor:Dario Jorge Iglesias
boolean A,B,W1,X1,Y1,Z1,E,W2,X2,Y2,Z2;//Dec. Var.
void setup()       { //Conf. I/O
 pinMode(8,INPUT); pinMode(9,INPUT);//A y B
 pinMode(10,INPUT);pinMode(7,OUTPUT);//E y W1
 pinMode(6,OUTPUT);pinMode(5,OUTPUT);//X1 y Y1
 pinMode(4,OUTPUT);pinMode(3,OUTPUT);//Z1 y W2
 pinMode(2,OUTPUT);pinMode(1,OUTPUT);//X2 y Y2
 pinMode(0,OUTPUT);}//Z2
void loop(){//ciclo infinito
 A=digitalRead(8);B=digitalRead(9);
 E=digitalRead(10);//leemos pines digitales
 Z1=(!E&!A&!B); Z2=(E&!A&!B);//minitérmino
 digitalWrite(4,Z1);digitalWrite(0,Z2);//act. salida
 Y1=(!E&!A&B);Y2=(E&!A&B);//minitérmino
 digitalWrite(5,Y1);digitalWrite(1,Y2);//act. salida
 X1=(!E&A&!B); X2=(E&A&!B);//minitérmino
 digitalWrite(6,X1);digitalWrite(2,X2);//refres. salida
 W1=(!E&A&B);W2=(E&A&B);//minitérmino
 digitalWrite(7,W1); digitalWrite(3,W2);}//refres. salida





