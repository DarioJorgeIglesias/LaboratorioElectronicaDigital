//Autor:Dario Jorge Iglesias
boolean Z,E,D,C,B,A;
void setup() 
{
 pinMode(2,INPUT_PULLUP);//entrada A
 pinMode(3,INPUT_PULLUP);//entrada B
 pinMode(4,INPUT_PULLUP);//entrada C
 pinMode(5,INPUT_PULLUP);//entrada D
 pinMode(6,INPUT_PULLUP);//entrada E
 pinMode(13,OUTPUT);//salida Z
}
void loop() 
{
 A=digitalRead(2);B=digitalRead(3);
 C=digitalRead(4);D=digitalRead(5);
 E=digitalRead(6);
 Z= (D&C&B)|(C&B&A)|(D&C&A)|(E&D&C)|(E&C&A)|
 (E&C&B)|(D&B&A)|(E&D&B)|(E&B&A)|(E&D&A);
 digitalWrite(13,Z);
}


