//Autor:Dario Jorge Iglesias
boolean A,B,C,D,E,Y1,Y2,Y3;
boolean Y4,Y5,Y6,Y7,Y8;
boolean b5,b4,b3,b2,b1,b0;
int BCDLSB,BCDMSB;
void setup(){
 pinMode(2,INPUT_PULLUP);//entrada b0
 pinMode(3,INPUT_PULLUP);//entrada b1
 pinMode(4,INPUT_PULLUP);//entrada b2
 pinMode(5,INPUT_PULLUP);//entrada b3
 pinMode(6,INPUT_PULLUP);//entrada b4
 pinMode(7,INPUT_PULLUP);//entrada b5
 Serial.begin(9600);}
void loop(){
 b0=digitalRead(2);b1=digitalRead(3);
 b2=digitalRead(4);b3=digitalRead(5);
 b4=digitalRead(6);b5=digitalRead(7);
 A=b1;B=b2;C=b3;D=b4;E=b5;
 //Lógica de primer 74185 por soft
 Y1=(!E&!D&!C&A)|(!E&!D&C&B&!A)|
 (!E&D&!C&!B&!A)|(!E&!C&B&A)|
 (!E&D&C&!B&A)|(E&!C&B&!A)|
 (E&C&B&A)|(E&D&C&!B&!A)|
 (E&!D&!C&!A)|(E&!D&C&A);
 Y2=(!E&!D&!C&B)|(!D&C&B&A)|
 (!E&D&!B&!A)|(E&!D&C&!B)|
 (E&D&!C&B&A)|(D&C&!B&!A)|
 (E&!D&!C&!B&A)|(E&!D&B&!A)|
 (E&!D&C&B);
 Y3=(!E&!D&C&!B&!A)|(!E&D&!C&!B&A)|
 (!E&D&C&B&!A)|(E&D&!C&!B&!A)|
 (E&D&C&!B&A)|(E&!D&!C&B&A);
 Y4=(!E&!D&C&B)|(!E&!D&C&A)|
 (!E&D&!C&!B)|(!E&C&B&A)|
 (E&!C&A)|(E&!C&B)|
 (E&D&C&!B)|(E&!D&!C);
 Y5=(!E&D&B)|(!E&D&C)|
 (E&!D&!C)|(D&C&B);           
 Y6=(E&D)|(E&C);
 Y7=HIGH;Y8=HIGH;
 BCDLSB=(Y3*8+Y2*4+Y1*2+b0*1);
 BCDMSB=(Y6*4+Y5*2+Y4*1);
 Serial.println("Numero BCD MSB");
 Serial.println(BCDMSB);
 Serial.println("Numero BCD LSB");
 Serial.println(BCDLSB);delay(1000);}


 
