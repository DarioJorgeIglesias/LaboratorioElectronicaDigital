//Autor:Dario Jorge Iglesias
boolean a1,b1,a2,b2,a3,b3,a4;
boolean b4,Y1,Y2,Y3,Y4,S,E;
void setup(){
 pinMode(0,INPUT_PULLUP);//Inp. a1
 pinMode(1,INPUT_PULLUP);//Inp. b1
 pinMode(2,INPUT_PULLUP);//Inp. a2
 pinMode(3,INPUT_PULLUP);//Inp. b2
 pinMode(4,INPUT_PULLUP);//Inp. a3
 pinMode(5,INPUT_PULLUP);//Inp. b3
 pinMode(6,INPUT_PULLUP);//Inp. a4
 pinMode(7,INPUT_PULLUP);//Inp. b4
 pinMode(A1,INPUT_PULLUP);//Inp. S
 pinMode(A0,INPUT_PULLUP);//Inp. E
 pinMode(8,OUTPUT);  //salida Y1
 pinMode(9,OUTPUT);  //salida Y2
 pinMode(10,OUTPUT); //salida Y3
 pinMode(11,OUTPUT);}//salida Y4
void loop(){
 S=digitalRead(A1);
 E=digitalRead(A0);
 a1=digitalRead(0);//Canales Inp.
 b1=digitalRead(1);
 a2=digitalRead(2);
 b2=digitalRead(3);
 a3=digitalRead(4);
 b3=digitalRead(5);
 a4=digitalRead(6);
 b4=digitalRead(7);
 //SI S=E=0 YN=an
 //SI S=1,E=0 YN=bn
 Y1=(!(S|E)&a1)|(!(!S|E)&b1); 
 Y2=(!(S|E)&a2)|(!(!S|E)&b2);
 Y3=(!(S|E)&a3)|(!(!S|E)&b3);
 Y4=(!(S|E)&a4)|(!(!S|E)&b4);
 digitalWrite(8,Y1);// OUTS
 digitalWrite(9,Y2);
 digitalWrite(10,Y3);
 digitalWrite(11,Y4);}



