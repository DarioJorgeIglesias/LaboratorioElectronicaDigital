//Autor:Dario Jorge Iglesias
boolean C,B,A,Z1,Z2;
void setup(){
 pinMode(1,INPUT_PULLUP);//entrada C
 pinMode(2,INPUT_PULLUP);//entrada B
 pinMode(3,INPUT_PULLUP);//entrada A
 pinMode(8,OUTPUT);//Z1=(B+C).(B+A)
 pinMode(9,OUTPUT);}//Z2=B+(C.A)
void loop() 
{
 C=digitalRead(1);//Variables 
 B=digitalRead(2);//de entrada
 A=digitalRead(3);
 Z1=(B|C)&(B|A);//FUNCIÓN Z1
 Z2=B|(C&A);//FUNCIÓN Z2
 digitalWrite(8,Z1);//Actualizaciones 
 digitalWrite(9,Z2);//de salida
}






