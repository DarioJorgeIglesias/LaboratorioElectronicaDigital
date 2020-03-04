//Autor:Dario Jorge Iglesias
boolean a0,a1,Y0,Y1,Y2,Y3;     
void setup(){  //Configuración I/O
 pinMode(4,INPUT_PULLUP);//Y3
 pinMode(5,INPUT_PULLUP);//Y2
 pinMode(6,INPUT_PULLUP);//Y1
 pinMode(7,INPUT_PULLUP);//Y0
 pinMode(8,OUTPUT);//a1
 pinMode(9,OUTPUT);}//a0
 void loop(){//ciclo infinito
 Y3=digitalRead(4);
 Y2=digitalRead(5);
 Y1=digitalRead(6);
 Y0=digitalRead(7);
 a1=(Y2&!Y1&!Y0)|(Y3&!Y1&!Y0);
 a0=(Y3&!Y2&!Y0)|(Y1&!Y0);
 digitalWrite(8,a1); 
 digitalWrite(9,a0);}


