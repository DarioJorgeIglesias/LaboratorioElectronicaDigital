//Autor:Dario Jorge Iglesias
boolean A,D0,D1,I;
void setup() 
{
  pinMode(6,INPUT);//Entrada I del DMX
  pinMode(7,INPUT);//Var. de control A
  pinMode(8,OUTPUT);//Salida DO
  pinMode(9,OUTPUT);//Salida DI
}
void loop() 
{
  I=digitalRead(6);//Leemos canal 
  A=digitalRead(7);//variable de control
  D0=!A&I;//Funcion Salida DO
  D1=A&I;//Funcion Salida DI
  digitalWrite(8,D0);//Saca dato I por DO
  digitalWrite(9,D1);//Saca dato I por DI
}






