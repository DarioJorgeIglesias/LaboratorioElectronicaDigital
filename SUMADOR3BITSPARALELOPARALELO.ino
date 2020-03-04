//Autor:Dario Jorge Iglesias
boolean b2,b1,b0,a2,a1,a0,S3,S2,S1,S0;
byte dato;
void setup() 
{
 pinMode(8,INPUT_PULLUP); //entrada b2
 pinMode(9,INPUT_PULLUP); //entrada b1
 pinMode(10,INPUT_PULLUP);//entrada b0
 pinMode(11,INPUT_PULLUP);//entrada a2
 pinMode(12,INPUT_PULLUP);//entrada a1
 pinMode(13,INPUT_PULLUP);//entrada a0
 pinMode(7,OUTPUT);//salida S3
 pinMode(6,OUTPUT);//salida S2
 pinMode(5,OUTPUT);//salida S1
 pinMode(4,OUTPUT);//salida S0
 Serial.begin(9600);
}
void loop() 
{
 b2=digitalRead(8);
 b1=digitalRead(9);
 b0=digitalRead(10);
 a2=digitalRead(11);
 a1=digitalRead(12);
 a0=digitalRead(13);
 S0=(b0&a1&!a0)|(b0&!a1&!a0)|(b1&!b0&a0)|(!b1&!b0&a0);
 digitalWrite(4,S0);
 S1=(!b1&!b0&a1)|(b1&!a1&!a0)|(!b1&a1&!a0)|(b1&!b0&!a1)|
 (!b1&b0&!a1&a0)|(b1&b0&a1&a0);
 digitalWrite(5,S1);
 S2=(!b2&b1&!a2&a1)|(b2&b1&a2&a1)|(!b2&!b1&a2&!a1)|
 (b2&!b1&!a2&!a1)|(!b2&!b1&!b0&a2)|(b2&!b1&!b0&!a2)|
 (!b2&!b1&a2&!a1)|(b2&!a2&!a1&!a0)|(!b2&b1&b0&!a2&a0)|
 (!b2&b0&!a2&a1&a0)|(!b2&!b1&a2&a1&!a0)|(!b2&b1&!b0&a2&!a1)|
 (b2&b1&b0&a2&a0)|(b2&b0&a2&a1&a0)|(b2&!b1&!a2&a1&!a0)|
 (b2&b1&!b0&!a2&!a1);
 digitalWrite(6,S2);
 S3=(b2&a2)|(b1&a2&a1)|(b2&b1&a1)|(!b2&b1&b0&a2&a0)|
 (b2&b1&b0&!a2&a0)|(b2&b0&!a2&a1&a0);
 digitalWrite(7,S3);
 dato=S3*8+S2*4+S1*2+S0;
 Serial.println(dato);
 delay(1000);
}



