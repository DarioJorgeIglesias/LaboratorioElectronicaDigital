//Autor:Dario Jorge Iglesias
boolean a1,b1,c1,d1,e1,a2,b2,c2,d2,e2,b0;
boolean Y1,Y2,Y3,Y4,Y5,YY1,YY2,YY3,YY4,YY5;
byte NUM;
void setup(){
 pinMode(2,INPUT_PULLUP);//b0 BCD LSD
 pinMode(3,INPUT_PULLUP);//a1
 pinMode(4,INPUT_PULLUP);//b1
 pinMode(5,INPUT_PULLUP);//c1
 pinMode(6,INPUT_PULLUP);//d1 BCD MSB
 pinMode(7,INPUT_PULLUP);//e1
 pinMode(8,INPUT_PULLUP);//d2
 pinMode(9,INPUT_PULLUP);//e2
 Serial.begin(9600);}
void loop(){//carga de datos formato BCD
 b0=digitalRead(2);
 a1=digitalRead(3);
 b1=digitalRead(4);
 c1=digitalRead(5);
 d1=digitalRead(6);
 e1=digitalRead(7);
 d2=digitalRead(8);
 e2=digitalRead(9);
 //Lógica primer 74184
 Y1=(!d1&!c1&a1)|(d1&!c1&!a1)|(d1&!b1&!a1);
 Y2=(!e1&!d1&!c1&b1)|(!e1&d1&!c1&!b1&a1)|(!e1&!c1&b1&!a1)|
 (e1&d1&!c1&b1&a1)|(e1&!b1&!a1)|(e1&!d1&!c1&!b1);
 Y3=(!e1&d1&!c1&!b1)|(!e1&d1&!c1&!a1)|(d1&!c1&!b1&!a1)|
 (e1&!d1&!c1&b1)|(!d1&c1&!b1&!a1);
 Y4=(!e1&d1&!c1&b1&a1)|(!e1&d1&c1&!b1&!a1)|(e1&!c1&!b1&!a1)|
 (e1&!d1&!c1)|(!e1&d1&!c1&b1&a1);
 Y5=(e1&d1&!c1&a1)|(e1&d1&!c1&b1)|(e1&d1&c1&!b1&!a1);
 //Conexión entre integrados software
 a2=Y3; b2=Y4; c2=Y5;
 //Segunda lógica 74184
 YY1=(!d2&!c2&a2)|(d2&!c2&!a2)|(d2&!b2&!a2);
 YY2=(!e2&!d2&!c2&b2)|(!e2&d2&!c2&!b2&a2)|
 (!e2&!c2&b2&!a2)|(e2&d2&!c2&b2&a2)|(e2&!b2&!a2)|
 (e2&!d2&!c2&!b2);
 YY3=(!e2&d2&!c2&!b2)|(!e2&d2&!c2&!a2)|
 (d2&!c2&!b2&!a2)|(e2&!d2&!c2&b2)|(!d2&c2&!b2&!a2);
 YY4=(!e2&d2&!c2&b2&a2)|(!e2&d2&c2&!b2&!a2)|
 (e2&!c2&!b2&!a2)|(e2&!d2&!c2)|(!e2&d2&!c2&b2&a2);
 //YY5=(e2&d2&!c2&a2)|(e2&d2&!c2&b2)|
 //(e2&d2&c2&!b2&!a2);
 //Conversión binaria a decimal
 NUM=(YY4*64)+(YY3*32)+(YY2*16)+(YY1*8)+(Y2*4)+(Y1*2)+(b0*1);
 //Muestra datos en monitor
 Serial.println("BINARIO:");
 Serial.println(YY4); Serial.println(YY3);
 Serial.println(YY2); Serial.println(YY1);
 Serial.println(Y2);  Serial.println(Y1);
 Serial.println(b0);  Serial.println("DECIMAL:");
 Serial.println(NUM); 
 delay(1000);}

 



