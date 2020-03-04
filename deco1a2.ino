//Autor:Dario Jorge Iglesias
boolean a0,c0,c1,E;
void setup(){
pinMode(5,OUTPUT);//Salida c0 del decodificador
pinMode(6,OUTPUT);//Salida c1 del decodificador
pinMode(7,INPUT);//Variable de control A
pinMode(8,INPUT_PULLUP); //entrada A0
pinMode(9,INPUT_PULLUP);}//entrada E
void loop(){
a0=digitalRead(8);//Leemos entrada 
E=digitalRead(9);//Leemos habilitación
c0=!a0&E;
c1=a0&E;
digitalWrite(5,c0);//Salida deco menos significativa
digitalWrite(6,c1);}//Salida deco más significativa







