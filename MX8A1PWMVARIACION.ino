//Autor:Dario Jorge Iglesias
boolean C,B,A,D0,D1,D2,D3,D4;
boolean D5,D6,D7,Y=0;
int PINPOTE=A5,VALORPOTE=0,PWM;
void setup(){
 pinMode(0,INPUT); //entrada D0
 pinMode(1,INPUT); //entrada D1
 pinMode(2,INPUT); //entrada D2
 pinMode(5,INPUT); //entrada D3
 pinMode(4,INPUT); //entrada D4
 pinMode(A4,INPUT);//entrada D5
 pinMode(A3,INPUT);//entrada D6
 pinMode(7,INPUT); //entrada D7
 pinMode(A2,INPUT_PULLUP);//entrada C
 pinMode(A1,INPUT_PULLUP);//entrada B
 pinMode(A0,INPUT_PULLUP);//entrada A
 pinMode(6,OUTPUT);//SALIDA PWM
 pinMode(3,OUTPUT);}//salida Y   
void loop(){
 A=digitalRead(A0);//Var. control
 C=digitalRead(A2); B=digitalRead(A1); 
 D0=digitalRead(0); D1=digitalRead(1);
 D2=digitalRead(2); D3=digitalRead(5);
 D4=digitalRead(4); D5=digitalRead(A4);
 D6=digitalRead(A3);D7=digitalRead(7);
 VALORPOTE=analogRead(PINPOTE);
 PWM=map(VALORPOTE,0,1023,0,255);
 analogWrite(6,PWM);
 Y=(D0&!C&!B&!A)|(D1&!C&!B&A)|(D2&!C&B&!A)|
 (D3&!C&B&A)|(D4&C&!B&!A)|(D5&C&!B&A)|
 (D6&C&B&!A)|(D7&C&B&A);
 digitalWrite(3,Y);}
 
            
            

