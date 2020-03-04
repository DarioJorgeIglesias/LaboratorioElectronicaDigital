//Autor:Dario Jorge Iglesias
boolean A,B,W,X,Y,Z,E;//Dec. var.
void setup()      {//PINES I/O
 pinMode(8,INPUT);  //A
 pinMode(9,INPUT);  //B
 pinMode(10,INPUT); //E
 pinMode(7,OUTPUT); //W
 pinMode(6,OUTPUT); //X
 pinMode(5,OUTPUT); //Y
 pinMode(4,OUTPUT);}//Z
void loop(){//ciclo infinito
 A=digitalRead(8);B=digitalRead(9);
 E=digitalRead(10);//leemos pines de ent.
 Z=(E&!A&!B); digitalWrite(4,Z);         
 Y=(E&!A&B);  digitalWrite(5,Y);  
 X=(E&A&!B);  digitalWrite(6,X);  
 W=(E&A&B);   digitalWrite(7,W);}

   
 






