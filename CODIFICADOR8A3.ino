//Autor:Dario Jorge Iglesias
boolean a0,a1,a2,E0,E1,E2,E3,E4,E5,E6,E7;     
void setup(){
 pinMode(0,INPUT_PULLUP);//conf. I/O
 pinMode(1,INPUT_PULLUP);pinMode(2,INPUT_PULLUP);
 pinMode(3,INPUT_PULLUP);pinMode(4,INPUT_PULLUP);
 pinMode(5,INPUT_PULLUP);pinMode(6,INPUT_PULLUP);
 pinMode(7,INPUT_PULLUP);pinMode(8,OUTPUT);//a0
 pinMode(9,OUTPUT);pinMode(10,OUTPUT);}//a1,a2
 void loop(){//ciclo infinito
 E1=digitalRead(6);//Entrada I1
 E2=digitalRead(5);//Entrada I2
 E3=digitalRead(4);//Entrada I3
 E4=digitalRead(3);//Entrada I4
 E5=digitalRead(2);//Entrada I5
 E6=digitalRead(1);//Entrada I6
 E7=digitalRead(0);//Entrada I7
 a0=E1|E3|E5|E7;//a0=I1+I3+I5+I7;
 a1=E2|E3|E6|E7;//a1=I2+I3+I6+I7;
 a2=E4|E5|E6|E7;//a2=I4+I5+I6+I7
 digitalWrite(8,a0);
 digitalWrite(9,a1);
 digitalWrite(10,a2);}
 
 
 
 
