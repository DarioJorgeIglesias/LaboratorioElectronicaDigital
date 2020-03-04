//Autor:Dario Jorge Iglesias
boolean a0,b0,Z,Y,W;//Variables de 1 bit
void setup() //Configuración de pines
{
 pinMode(9,INPUT);//Entrada bit a0
 pinMode(10,INPUT);//Entrada bit b0
 pinMode(7,OUTPUT);//Salida Y para a0>b0
 pinMode(6,OUTPUT);//Salida Z para a0=b0
 pinMode(5,OUTPUT);//Salida W para a0<b0
}
void loop()//ciclo infinito
{ //inicio loop
 a0=digitalRead(9);// Leemos entrada a0
 b0=digitalRead(10);//Leemos entrada b0
 Y=a0&!b0;//Operación a0>b0
 digitalWrite(7,Y);//Actualizamos salida
 Z=!(a0^b0);//Operación a0=b0
 digitalWrite(6,Z);//Actualizamos salida
 W=!a0&b0;//Operación a0<b0
 digitalWrite(5,W);//Actualizamos salida
}//fin loop











