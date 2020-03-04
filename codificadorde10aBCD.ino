//Autor:Dario Jorge Iglesias
boolean NA0,NA1,NA2,NA3,NA4,NA5,NA6,NA7;
boolean NA8,NA9,O0,O1,O2,O3;//dec.boolean      
void setup(){ 
 pinMode(0,INPUT_PULLUP);//Config. I/O
 pinMode(1,INPUT_PULLUP);pinMode(2,INPUT_PULLUP);
 pinMode(3,INPUT_PULLUP);pinMode(4,INPUT_PULLUP);
 pinMode(5,INPUT_PULLUP);pinMode(6,INPUT_PULLUP);
 pinMode(7,INPUT_PULLUP);pinMode(8,INPUT_PULLUP);
 pinMode(A0,OUTPUT);//Salidas 
 pinMode(A1,OUTPUT);
 pinMode(A2,OUTPUT);
 pinMode(A3,OUTPUT);}
void loop(){//ciclo infinito
 NA1=digitalRead(0);//Variables de entrada
 NA2=digitalRead(1);   NA3=digitalRead(2);
 NA4=digitalRead(3);   NA5=digitalRead(4);
 NA6=digitalRead(5);   NA7=digitalRead(6); 
 NA8=digitalRead(7);   NA9=digitalRead(8);
 O0=!NA1|!NA3|!NA5|!NA7|!NA9;
 O1=!NA2|!NA3|!NA4|!NA7;
 O2=!NA4|!NA5|!NA6|!NA7;
 O3=!NA8|!NA9;
 digitalWrite(A0,O0);
 digitalWrite(A1,O1);
 digitalWrite(A2,O2);
 digitalWrite(A3,O3);}

 
