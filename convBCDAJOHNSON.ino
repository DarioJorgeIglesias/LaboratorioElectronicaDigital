//Autor:Dario Jorge Iglesias
boolean D,C,B,A,J4,J3,J2,J1,J0;
void setup()
{ 
 pinMode(8,INPUT);  //entrada D
 pinMode(9,INPUT);  //entrada C
 pinMode(10,INPUT); //entrada B
 pinMode(11,INPUT); //entrada A
 pinMode(6,OUTPUT); //Pin 6 Out J4
 pinMode(5,OUTPUT); //Out J3
 pinMode(4,OUTPUT); //Out J2
 pinMode(3,OUTPUT); //Out J1
 pinMode(2,OUTPUT);}//Out J0
void loop() 
{
 D=digitalRead(8);  
 C=digitalRead(9);
 B=digitalRead(10); 
 A=digitalRead(11);
 J0=(!D&!C&A)|(C^B); 
 digitalWrite(2,J0);
 J1=(C^B)|(B&!A);    
 digitalWrite(3,J1);
 J2=(B&A)|C;        
 digitalWrite(4,J2);
 J3=C|(D&!A);      
 digitalWrite(5,J3);
 J4=C&(A|B)|D;      
 digitalWrite(6,J4);
 }

 


