//Autor:Dario Jorge Iglesias
boolean C,B,A,a,b,c,d,e,f,g;//I/O
void setup() //Configuración
{
 pinMode(9,INPUT_PULLUP);//9 IN
 pinMode(10,INPUT_PULLUP);
 pinMode(11,INPUT_PULLUP);
 pinMode(6,OUTPUT);//Pin 6 salida
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(1,OUTPUT);
 pinMode(0,OUTPUT);
}
void loop() //Super lazo infinito
{
 C=digitalRead(9); //Lee peso 4
 B=digitalRead(10);//Lee peso 2
 A=digitalRead(11);//Lee peso 1
 a=C^A; //Codificación de mapas
 digitalWrite(6,a);//seg. a
 b=!(C^B)|A;    
 digitalWrite(5,b);
 c=!(C^B)|A;
 digitalWrite(4,c);
 d=A^B^C;
 digitalWrite(3,d);
 e=1;f=1;
 digitalWrite(2,e);
 digitalWrite(1,f);
 g=!(A^B^C);
 digitalWrite(0,g);delay(100);}


