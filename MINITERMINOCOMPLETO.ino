//Autor:Dario Jorge Iglesias //MINITÉRMINOS
boolean C,B,A,Z;//Variables de entrada y salida
void setup() //Configuración
{
 pinMode(9,INPUT);//C
 pinMode(10,INPUT);//B
 pinMode(11,INPUT);//A
 pinMode(6,OUTPUT);//Pin 6 salida Z
}
void loop()        { //Super lazo infinito
 C=digitalRead(9); //Lee peso 4
 B=digitalRead(10);//Lee peso 2
 A=digitalRead(11);//Lee peso 1
 Z=(!C&!B&A)|(!C&B&A)|(C&!B&!A)|(C&!B&A);
 digitalWrite(6,Z);}//Refresca salida Z
           

