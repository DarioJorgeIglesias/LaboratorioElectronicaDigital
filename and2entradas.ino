//Autor:Dario Jorge 
//Iglesias
boolean A,B,Z;
void setup() 
{
 pinMode(2,INPUT);
 pinMode(3,INPUT);
 pinMode(4,OUTPUT);
}
void loop() 
{
 A=digitalRead(2);
 B=digitalRead(3);
 Z=(A&B);//Z=A.B
 digitalWrite(4,Z);
}




