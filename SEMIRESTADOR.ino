//Autor:Dario Jorge Iglesias
boolean a0,b0,P0,D0;
void setup() 
{
 pinMode(9,INPUT_PULLUP); //a0
 pinMode(10,INPUT_PULLUP);//b0
 pinMode(11,OUTPUT);//P0
 pinMode(12,OUTPUT);//D0
}
void loop(){
 a0=digitalRead(9);
 b0=digitalRead(10);
 D0=a0^b0;  P0=!a0&b0;
 digitalWrite(11,P0);
 digitalWrite(12,D0);}


 

