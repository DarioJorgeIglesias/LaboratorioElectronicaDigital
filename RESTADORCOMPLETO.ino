//Autor:Dario Jorge Iglesias
boolean a0,b0,P0,D,P1;
void setup(){
 pinMode(9,INPUT_PULLUP); //A0
 pinMode(10,INPUT_PULLUP);//B0
 pinMode(11,INPUT_PULLUP);//P1
 pinMode(12,OUTPUT); //D
 pinMode(13,OUTPUT);}//P0
void loop() 
{
 a0=digitalRead(9);
 b0=digitalRead(10);
 P1=digitalRead(11);
 D=a0^b0^P1;
 P0=(!a0&P1)|(b0&P1)|(!a0&b0);
 digitalWrite(12,D);
 digitalWrite(13,P0);
}







