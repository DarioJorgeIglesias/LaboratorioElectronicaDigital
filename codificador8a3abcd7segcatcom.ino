//Autor:Dario Jorge Iglesias
boolean D,C,B,A,a,b,c,d,e,f,g;//I/O
boolean NA0,NA1,NA2,NA3,NA4,NA5;
boolean NA6,NA7,O0,O1,O2;
void setup() //Configuración
{
 pinMode(A1,INPUT_PULLUP);
 pinMode(A2,INPUT_PULLUP);
 pinMode(A3,INPUT_PULLUP);
 pinMode(A4,INPUT_PULLUP);
 pinMode(A5,INPUT_PULLUP);
 pinMode(7,INPUT_PULLUP);
 pinMode(8,INPUT_PULLUP);
 pinMode(6,OUTPUT);//Pin 6 seg. a
 pinMode(5,OUTPUT);//b
 pinMode(4,OUTPUT);//c
 pinMode(3,OUTPUT);//d
 pinMode(2,OUTPUT);//e
 pinMode(1,OUTPUT);//f
 pinMode(0,OUTPUT);//g
}
void loop() //Super lazo infinito
{
 NA1=digitalRead(A1);
 NA2=digitalRead(A2);
 NA3=digitalRead(A3);
 NA4=digitalRead(A4);
 NA5=digitalRead(A5);
 NA6=digitalRead(7);
 NA7=digitalRead(8); 
 O0=!NA1|!NA3|!NA5|!NA7;
 O1=!NA2|!NA3|!NA6|!NA7;
 O2=!NA4|!NA5|!NA6|!NA7;
 D=LOW;
 C=O2;
 B=O1;
 A=O0;
 a=!(C^A)|(B)|(D); //Segmento a 
 digitalWrite(6,a);//Refres. seg. a
 b=(!C)|!(B^A);    
 digitalWrite(5,b);
 c=A|C|(!B);
 digitalWrite(4,c);
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);
 digitalWrite(3,d);
 e=(!C&!A)|(B&!A);
 digitalWrite(2,e);
 f=(!B&!A)|(C&!B)|(C&!A)|D;
 digitalWrite(1,f);
 g=(C^B)|(B&!A)|D;
 digitalWrite(0,g);
}




