//Autor:Dario Jorge Iglesias
//Es como tener conectado un NOT donde pin 9 
//es Input y pin 13 es la salida.
boolean A,Z;//Variables Booleanas
void setup() //Configuración I/O
{
 pinMode(9,INPUT);//Entrada pin 9
 pinMode(13,OUTPUT);//Salida pin 13
}
void loop() //Super lazo infinito
{
 A=digitalRead(9);//Leo pin y guardo en A
 Z=!A;//Invierto A, asigno a Z
 digitalWrite(13,Z);//Enviamos por pin 13 Z
}







