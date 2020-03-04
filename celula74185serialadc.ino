//Autor:Dario Jorge Iglesias
boolean A,B,C,D,E,Y1,Y2,Y3;
boolean Y4,Y5,Y6,Y7,Y8;
boolean b5,b4,b3,b2,b1,b0;
int BCDLSB,BCDMSB,pote;
void setup(){ Serial.begin(9600);}
void loop(){pote=analogRead(A0);
 pote=map(pote,0,1023,0,39);
 b0=pote&0x01/1;    b1=(pote&0x02)/2;
 b2=(pote&0x04)/4;  b3=(pote&0x08)/8;
 b4=(pote&0x10)/16; b5=(pote&0x20)/32;
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
 BCDLSB=(Y3*8+Y2*4+Y1*2+b0*1);
 BCDMSB=(Y5*2+Y4*1);
 Serial.println("Numero BCD MSB");
 Serial.println(BCDMSB);
 Serial.println("Numero BCD LSB");
 Serial.println(BCDLSB);delay(1000);}



