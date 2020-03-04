//Autor:Dario Jorge Iglesias
//Variables de IN y OUT
boolean D,C,B,A,a,b,c,d,e,f,g;
boolean Q0,Q1,Q2,Q3,Q4,Q5,Q6;
boolean Q7,Q8,Q9,S,R,Qn,NOQn;  
int temp;
void setup(){//Configuración
 pinMode(7,OUTPUT);//rele
 pinMode(6,OUTPUT);//6 salida a
 pinMode(5,OUTPUT);//b
 pinMode(4,OUTPUT);//c
 pinMode(3,OUTPUT);//d
 pinMode(2,OUTPUT);//e
 pinMode(1,OUTPUT);//f
 pinMode(0,OUTPUT);}//g
void loop(){//Super lazo infinito
 temp=analogRead(A0); 
 if((temp>=20)&&(temp<=81)){
 temp=map(temp,20,81,0,9);
 D=boolean((temp&0x08)/8);
 C=boolean((temp&0x04)/4);
 B=boolean((temp&0x02)/2);
 A=boolean((temp&0x01)/1);
 a=!(C^A)|(B)|(D); //función de seg.
 digitalWrite(6,a);//Refresca seg.
 b=(!C)|!(B^A);digitalWrite(5,b);    
 c=A|C|(!B);digitalWrite(4,c);
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);
 digitalWrite(3,d);e=(!C&!A)|(B&!A);
 digitalWrite(2,e);f=(!B&!A)|(C&!B)|(C&!A)|D;
 digitalWrite(1,f);g=(C^B)|(B&!A)|D;
 digitalWrite(0,g);//fin conv. Decodifica
 Q0=!(!D&!C&!B&!A);Q1=!(!D&!C&!B&A);
 Q2=!(!D&!C&B&!A); Q3=!(!D&!C&B&A);
 Q4=!(!D&C&!B&!A); Q5=!(!D&C&!B&A);
 Q6=!(!D&C&B&!A);  Q7=!(!D&C&B&A);
 Q8=!(D&!C&!B&!A); Q9=!(D&!C&!B&A);
 S=!Q0&Q1&Q2&Q3&Q4&Q5&Q6&Q7&Q8&Q9;
 R=Q0&Q1&Q2&Q3&Q4&Q5&Q6&Q7&Q8&!Q9;
 Qn=!(R|NOQn);NOQn=!(S|Qn);
 digitalWrite(7,NOQn);}}
 
  



