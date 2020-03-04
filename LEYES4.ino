//Autor:Dario Jorge Iglesias
boolean C,B,A,Z1,Z2;
void setup(){ 
 pinMode(1,INPUT_PULLUP);//entrada C
 pinMode(2,INPUT_PULLUP);//entrada B
 pinMode(3,INPUT_PULLUP);//entrada A
 pinMode(8,OUTPUT);//Z1=(C.A)+(C.B)
 pinMode(9,OUTPUT);}//Z2=C.(A+B)
void loop(){C=digitalRead(1);//In
 B=digitalRead(2);
 A=digitalRead(3);
 Z1=(C&A)|(C&B);//FUNCIÓN Z1
 Z2=C&(A|B);//FUNCIÓN Z2
 digitalWrite(8,Z1);//Actualizaciones
 digitalWrite(9,Z2);}//de salidas

 
             



