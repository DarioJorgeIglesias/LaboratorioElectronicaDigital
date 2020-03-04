//Autor:Dario Jorge Iglesias
boolean A,B,C,D,Z1,Z2,Z3,Z4,ZT;
void setup() 
{
 pinMode(7,INPUT);  //pin A
 pinMode(8,INPUT);  //pin B
 pinMode(9,INPUT);  //pin C
 pinMode(10,INPUT); //pin D
 pinMode(13,OUTPUT);//pin ZT
}
void loop() 
{
 A=digitalRead(7); //Var. A
 B=digitalRead(8); //Var. B
 C=digitalRead(9); //Var. C
 D=digitalRead(10);//Var. D
 Z1=!(!C|D);
 Z2=Z1&B;
 Z3=!(Z2^!A);
 Z4=Z3|D;
 ZT=!(Z4&C);
 digitalWrite(13,ZT);
}


