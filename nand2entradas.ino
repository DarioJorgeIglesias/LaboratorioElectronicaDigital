//Autor:Dario Jorge 
//Iglesias
boolean A,B,Z;
void setup() 
{
 pinMode(9,INPUT);
 pinMode(10,INPUT);
 pinMode(13,OUTPUT);
}
void loop() 
{
 A=digitalRead(9);
 B=digitalRead(10);
 Z=!(A&B);//Z='(A.B)
 digitalWrite(13,Z);
}


