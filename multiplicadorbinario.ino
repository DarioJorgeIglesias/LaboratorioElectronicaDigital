//Autor:Dario Jorge Iglesias
boolean b1,b0,a1,a0,M3,M2,M1,M0;
void setup() 
{
 pinMode(8,INPUT);//entrada b1
 pinMode(9,INPUT);//entrada b0
 pinMode(10,INPUT);//entrada a1
 pinMode(11,INPUT);//entrada a0
 pinMode(7,OUTPUT);//salida M3
 pinMode(6,OUTPUT);//salida M2
 pinMode(5,OUTPUT);//salida M1
 pinMode(4,OUTPUT);//salida M0
}
void loop() 
{
 b1=digitalRead(8);
 b0=digitalRead(9);
 a1=digitalRead(10);
 a0=digitalRead(11);
 M3=b1&b0&a1&a0;
 digitalWrite(7,M3);
 M2=(b1&a1&!a0)|(b1&!b0&a1);
 digitalWrite(6,M2);
 M1=(!b1&b0&a1)|(b0&a1&!a0)|
 (b1&!a1&a0)|(b1&!b0&a0);
 digitalWrite(5,M1);
 M0=b0&a0;
 digitalWrite(4,M0);
}




