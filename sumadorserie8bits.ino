//Autor:Dario Jorge Iglesias
boolean b7,b6,b5,b4,b3,b2,b1,b0,a7,a6,a5,a4,a3,a2,a1,a0,S8;
boolean S7,S6,S5,S4,S3,S2,S1,S0,C0,C1,C2,C3,C4,C5,C6,C7,C8;  
int suma;      
void setup(){//Función de configuración de pines de entrada y salida
 pinMode(0,INPUT_PULLUP); pinMode(1,INPUT_PULLUP); //b0, b1
 pinMode(2,INPUT_PULLUP); pinMode(3,INPUT_PULLUP); //b2 y b3
 pinMode(4,INPUT_PULLUP); pinMode(5,INPUT_PULLUP); //b4 y b5
 pinMode(6,INPUT_PULLUP); pinMode(7,INPUT_PULLUP); //b6 y b7
 pinMode(8,INPUT_PULLUP); pinMode(9,INPUT_PULLUP); //a0 y a1
 pinMode(10,INPUT_PULLUP);pinMode(11,INPUT_PULLUP);//a2 y a3
 pinMode(12,INPUT_PULLUP);pinMode(13,INPUT_PULLUP);//a4 y a5
 pinMode(A0,INPUT_PULLUP);pinMode(A1,INPUT_PULLUP);//a6 y a7
 Serial.begin(9600);}
void loop(){
 b0=digitalRead(0);  b1=digitalRead(1);  b2=digitalRead(2);
 b3=digitalRead(3);  b4=digitalRead(4);  b5=digitalRead(5);
 b6=digitalRead(6);  b7=digitalRead(7);  a0=digitalRead(8);                 
 a1=digitalRead(9);  a2=digitalRead(10); a3=digitalRead(11);
 a4=digitalRead(12); a5=digitalRead(13); a6=digitalRead(A0);
 a7=digitalRead(A1); C0=0;               S0=a0^b0^C0;//lóg. sumador
 C1=(a0&C0)|(a0&b0)|(b0&C0);             S1=a1^b1^C1;
 C2=(a1&C1)|(a1&b1)|(b1&C1);             S2=a2^b2^C2;
 C3=(a2&C2)|(a2&b2)|(b2&C2);             S3=a3^b3^C3;
 C4=(a3&C3)|(a3&b3)|(b3&C3);             S4=a4^b4^C4;
 C5=(a4&C4)|(a4&b4)|(b4&C4);             S5=a5^b5^C5;
 C6=(a5&C5)|(a5&b5)|(b5&C5);             S6=a6^b6^C6;
 C7=(a6&C6)|(a6&b6)|(b6&C6);             S7=a7^b7^C7;
 C8=(a7&C7)|(a7&b7)|(b7&C7);             S8=C8;
 suma=S8*256+S7*128+S6*64+S5*32+S4*16+S3*8+S2*4+S1*2+S0*1;
 Serial.println(suma);delay(1000);}



