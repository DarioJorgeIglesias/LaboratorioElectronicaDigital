//Autor:Dario Jorge Iglesias
//Declaración de variables booleanas
boolean b3,b2,b1,b0,a3,a2;
boolean a1,a0,Y,Z,W,R,S,T,U;         
boolean A,B,C,D,IZ,IW,IY;
//Y ES A>B, Z ES A=B, W ES A<B
void setup(){//configuración I/O
 pinMode(2,INPUT_PULLUP);//a3
 pinMode(3,INPUT_PULLUP);//a2
 pinMode(4,INPUT_PULLUP);//a1
 pinMode(5,INPUT_PULLUP);//a0
 pinMode(6,INPUT_PULLUP);//b3
 pinMode(7,INPUT_PULLUP);//b2
 pinMode(8,INPUT_PULLUP);//b1
 pinMode(9,INPUT_PULLUP);//b0
 pinMode(10,INPUT_PULLUP);//IY
 pinMode(11,INPUT_PULLUP);//IZ
 pinMode(12,INPUT_PULLUP);//IW
 pinMode(A0,OUTPUT);//Y=A>B
 pinMode(A1,OUTPUT);//Z=A=B
 pinMode(A2,OUTPUT);}//W=A<B
void loop(){//ciclo infinito
 a3=digitalRead(2);//read pines digitales
 a2=digitalRead(3);
 a1=digitalRead(4);
 a0=digitalRead(5);
 b3=digitalRead(6);
 b2=digitalRead(7);
 b1=digitalRead(8);
 b0=digitalRead(9);
 IY=digitalRead(10);
 IZ=digitalRead(11);
 IW=digitalRead(12);
 IW=IY=LOW;//PARA PRIMER MÓDULO IZ=H,IW=IY=L
 A=!(a3&b3);
 B=!(a2&b2);
 C=!(a1&b1);
 D=!(a0&b0);
 R=!((a3&A)|(b3&A));
 S=!((a2&B)|(b2&B));
 T=!((a1&C)|(b1&C));
 U=!((a0&D)|(b0&D));
 //Y=A>B//Z=A=B//W=A<B
 Y=!(A&b3)&!(b2&B&R)&!(b1&C&R&S)&!
 (b0&D&R&S&T)&!(R&S&T&U&IW)&!(R&S&T&U&IZ);
 W=!(A&a3)&!(a2&B&R)&!(a1&C&R&S)&!
 (a0&D&R&S&T)&!(R&S&T&U&IY)&!(R&S&T&U&IZ);
 Z=(R&S&IZ&T&U);
 digitalWrite(A0,Y);//actualizamos salida
 digitalWrite(A1,Z);//actualizamos salida
 digitalWrite(A2,W);}//actualizamos salida



