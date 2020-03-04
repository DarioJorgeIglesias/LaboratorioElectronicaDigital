//Autor:Dario Jorge Iglesias
boolean C,B,A,Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7,I;
int VALORPOTE=0,PWM;
void setup(){
pinMode(2,OUTPUT);//Out independientes Y0
pinMode(3,OUTPUT);pinMode(4,OUTPUT);//Y1,Y2
pinMode(5,OUTPUT);pinMode(6,OUTPUT);//Y3,Y4
pinMode(7,OUTPUT);pinMode(8,OUTPUT);//Y5,Y6
pinMode(9,OUTPUT);pinMode(11,OUTPUT);//Y7,PWM
pinMode(A2,INPUT_PULLUP);//entrada C
pinMode(A1,INPUT_PULLUP);//entrada B
pinMode(A0,INPUT_PULLUP);//entrada A
pinMode(10,INPUT);}//I
void loop(){
A=digitalRead(A0);//Var. de control
C=digitalRead(A2);B=digitalRead(A1); 
VALORPOTE=analogRead(A5);
PWM=map(VALORPOTE,0,1023,0,255);
analogWrite(11,PWM);I=digitalRead(10);
Y0=(I&!C&!B&!A); digitalWrite(2,Y0);
Y1=(I&!C&!B&A);  digitalWrite(3,Y1);
Y2=(I&!C&B&!A);  digitalWrite(4,Y2);
Y3=(I&!C&B&A);   digitalWrite(5,Y3);
Y4=(I&C&!B&!A);  digitalWrite(6,Y4);
Y5=(I&C&!B&A);   digitalWrite(7,Y5);
Y6=(I&C&B&!A);   digitalWrite(8,Y6);
Y7=(I&C&B&A);    digitalWrite(9,Y7);}



 
            
            

