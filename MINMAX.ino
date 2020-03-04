//Autor:Dario Jorge Iglesias
boolean D,C,B,A,F1,F2;
void setup() 
{
 pinMode(0,INPUT_PULLUP);//entrada D
 pinMode(1,INPUT_PULLUP);//entrada C
 pinMode(2,INPUT_PULLUP);//entrada B
 pinMode(3,INPUT_PULLUP);//entrada A
 pinMode(8,OUTPUT);//F1 PARA MINITÉRMINOS
 pinMode(9,OUTPUT);//F2 PARA MAXITÉRMINOS
}
void loop() 
{
 D=digitalRead(0);//Variables de entrada
 C=digitalRead(1);
 B=digitalRead(2);
 A=digitalRead(3);
 //FUNCIÓN MINITÉRMINOS
 F1=(!D&!C)|(C&A)|(D&C&!B);
 //FUNCIÓN MAXITÉRMINOS
 F2=(D|!C|A)&(!C|!B|A)&(!D|C);
 digitalWrite(8,F1);//Actualizaciones 
 digitalWrite(9,F2);//de salidas
}





