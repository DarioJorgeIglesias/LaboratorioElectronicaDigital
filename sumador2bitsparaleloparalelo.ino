//Autor:Dario Jorge Iglesias
boolean b1,b0,a1,a0,S2,S1,S0;
void setup() {
 pinMode(8,INPUT);  //entrada b1
 pinMode(9,INPUT);  //entrada b0
 pinMode(10,INPUT); //entrada a1
 pinMode(11,INPUT); //entrada a0
 pinMode(7,OUTPUT); //salida S2
 pinMode(6,OUTPUT); //salida S1
 pinMode(5,OUTPUT);}//salida S0
void loop(){ 
 b1=digitalRead(8);
 b0=digitalRead(9);
 a1=digitalRead(10);
 a0=digitalRead(11);
 S2=(b0&a1&a0)|(b1&a1)|(b1&b0&a0);
 digitalWrite(7,S2);
 S1=(!b1&!b0&a1)|(!b1&a1&!a0)|(!b1&b0&!a1&a0)|
 (b1&b0&b1&a0)|(b1&!a1&!a0)|(b1&!b0&!a1);
 digitalWrite(6,S1);
 S0=a0^b0;
 digitalWrite(5,S0);
 }




