//Autor:Dario Jorge Iglesias
boolean START,STOP,Z,Z1;
void setup()
{ 
 pinMode(2,INPUT);
 pinMode(3,INPUT);
 pinMode(4,OUTPUT);
}
void loop()
{ 
 START=digitalRead(2);
 STOP=digitalRead(3);
 Z=Z1&!STOP;
 Z1=START|(Z1&!STOP);
 digitalWrite(4,Z1);
 }



