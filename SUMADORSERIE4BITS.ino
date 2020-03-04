//Autor:Dario Jorge Iglesias
boolean b3,b2,b1,b0,a3,a2,a1,a0,S4;
boolean S3,S2,S1,S0,C1,C2,C3,C4;        
//Declaración de variables booleanas
void setup()//Función de configuración I/O
{
 pinMode(0,INPUT_PULLUP);//b0
 pinMode(1,INPUT_PULLUP);//b1
 pinMode(2,INPUT_PULLUP);//b2
 pinMode(3,INPUT_PULLUP);//b3
 pinMode(4,INPUT_PULLUP);//a0
 pinMode(5,INPUT_PULLUP);//a1
 pinMode(6,INPUT_PULLUP);//a2
 pinMode(7,INPUT_PULLUP);//a3
 pinMode(8,OUTPUT); //S0
 pinMode(9,OUTPUT); //S1
 pinMode(10,OUTPUT);//S2
 pinMode(11,OUTPUT);//S3
 pinMode(12,OUTPUT);//S4
 }
void loop()//ciclo infinito
{
 b0=digitalRead(0);//leemos pines digitales
 b1=digitalRead(1);
 b2=digitalRead(2);
 b3=digitalRead(3);
 a0=digitalRead(4);
 a1=digitalRead(5);
 a2=digitalRead(6);
 a3=digitalRead(7);      
 S0=a0^b0;//lógica sumador
 C1=a0&b0;
 S1=a1^b1^C1;
 C2=(a1&C1)|(a1&b1)|(b1&C1);
 S2=a2^b2^C2;
 C3=(a2&C2)|(a2&b2)|(b2&C2);
 S3=a3^b3^C3;
 C4=(a3&C3)|(a3&b3)|(b3&C3);
 S4=C4;
 digitalWrite(8,S0); //actualizamos salida
 digitalWrite(9,S1); //actualizamos salida
 digitalWrite(10,S2);//actualizamos salida
 digitalWrite(11,S3);//actualizamos salida
 digitalWrite(12,S4);//actualizamos salida
}



