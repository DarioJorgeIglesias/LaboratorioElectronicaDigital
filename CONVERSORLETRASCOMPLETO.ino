//Autor:Dario Jorge Iglesias
boolean D,C,B,A,a,b,c,d,e,f,g;//Var.I/O
void setup() //Configuración
{
 pinMode(8,INPUT_PULLUP);//Pin 8 entrada
 pinMode(9,INPUT_PULLUP);
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
 D=digitalRead(8); //Lee peso 8
 C=digitalRead(9); //Lee peso 4
 B=digitalRead(10);//Lee peso 2
 A=digitalRead(11);//Lee peso 1
 a=(C&!B)|(D&B&A)|(!D&!A); //Cod. map.
 digitalWrite(6,a);//segmento a
 b=(B&A)|(D&C&!A)|(D&!C&!B)|(!C&!B&!A);   
 digitalWrite(5,b);
 c=!(C^B)|(D&A)|(B&A);
 digitalWrite(4,c);
 d=!(D^A)|(B&!A)|(!D&!C);
 digitalWrite(3,d);
 e=B|(C&!A)|!D;
 digitalWrite(2,e);
 f=(!D&!B&A)|(D&B)|C|(B&!A);
 digitalWrite(1,f);
 g=(C&!B)|(!D&C)|(!D&!B)|(!D&A);
 digitalWrite(0,g);
}



