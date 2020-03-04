//Autor:Dario Jorge Iglesias
boolean A,B,W,X,Y,Z;//Declaración de variables booleanas
void setup()//Funcion de configuración de pines de I/O
{
 pinMode(8,INPUT); //A
 pinMode(9,INPUT); //B
 pinMode(7,OUTPUT);//W
 pinMode(6,OUTPUT);//X
 pinMode(5,OUTPUT);//Y
 pinMode(4,OUTPUT);//Z
}
void loop()                    //ciclo infinito
{
 A=digitalRead(8);//leemos pines digitales
 B=digitalRead(9);
 Z=!A&!B;          //minitérmino
 digitalWrite(4,Z);//actualizamos salida
 Y=!A&B;           //minitérmino
 digitalWrite(5,Y);//actualizamos salida
 X=A&!B;           //minitérmino
 digitalWrite(6,X);//refrescamos salida
 W=A&B;            //minitérmino
 digitalWrite(7,W);//refrescamos salida
}



