//Autor:Dario Jorge Iglesias
int J;
boolean A,B,C,D0,D1,D2,D3,D4,D5,D6,D7,I;
void setup(){pinMode(13,INPUT);//I
pinMode(2,OUTPUT);pinMode(3,OUTPUT);//D0, D1
pinMode(4,OUTPUT);pinMode(5,OUTPUT);//D2, D3
pinMode(6,OUTPUT);pinMode(7,OUTPUT);//D4, D5
pinMode(8,OUTPUT);pinMode(9,OUTPUT);}//D6, D7
void loop()
{//inicio loop
for(J=0;J<=7;J=J+1)
{//inicio for
I=digitalRead(13);//lee dato de entrada
A=boolean(J&0x01);B=boolean((J&0x02)/2);
C=boolean((J&0x04)/4);//Decodifica var. selección
D0=!C&!B&!A&I;D1=!C&!B&A&I;D2=!C&B&!A&I;D3=!C&B&A&I;
D4=C&!B&!A&I; D5=C&!B&A&I; D6=C&B&!A&I; D7=C&B&A&I;
digitalWrite(2,D0);digitalWrite(3,D1);digitalWrite(4,D2);
digitalWrite(5,D3);digitalWrite(6,D4);digitalWrite(7,D5);
digitalWrite(8,D6);digitalWrite(9,D7);delay(1000);
}//fin for
}//fin loop


            

