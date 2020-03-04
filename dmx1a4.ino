//Autor:Dario Jorge Iglesias
boolean A,B,D0,D1,D2,D3,I;
void setup(){
  pinMode(6,INPUT);  //pin 6 es la entrada I
  pinMode(7,INPUT);  pinMode(8,INPUT);//pin7 A, pin8 B
  pinMode(9,OUTPUT); pinMode(10,OUTPUT);//pin 9 D0,10 D1
  pinMode(11,OUTPUT);pinMode(12,OUTPUT);//11 D2,12 D3
            }
void loop()
{
  I=digitalRead(6);//Entrada I en 6
  A=digitalRead(7);//Entrada A en 7 
  B=digitalRead(8);//Leemos variable de control B
  D0=!A&!B&I; digitalWrite(9,D0);//Saca dato I por D0
  D1=!B&A&I;  digitalWrite(10,D1);//Saca dato I por D1
  D2=!A&B&I;  digitalWrite(11,D2);//Saca dato I por D2
  D3=A&B&I;   digitalWrite(12,D3);//Saca dato I por D3
}


  
  
  
  


