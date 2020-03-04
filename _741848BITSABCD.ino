//Autor:Dario Jorge Iglesias//ok
//Definición de variables de entrada y salida
boolean a1,b1,c1,d1,e1,a2,b2,c2,d2,e2,a3;
boolean b3,c3,d3,e3,Y1,Y2,Y3,Y4,Y5,Y6,Y7;
boolean Y8,YY1,YY2,YY3,YY4,YY5,YY6,YY7,YY8;
boolean YYY1,YYY2,YYY3,YYY4,YYY5,YYY6,YYY7;
boolean YYY8,i7,i6,i5,i4,i3,i2,i1,i0;
byte BCDLSB,BCDMSB,BCDMEDIO;
void setup(){pinMode(2,INPUT_PULLUP);//entrada i0
 pinMode(3,INPUT_PULLUP);//entrada i1
 pinMode(4,INPUT_PULLUP);//entrada i2
 pinMode(5,INPUT_PULLUP);//entrada i3
 pinMode(6,INPUT_PULLUP);//entrada i4
 pinMode(7,INPUT_PULLUP);//entrada i5
 pinMode(8,INPUT_PULLUP);//entrada i6
 pinMode(9,INPUT_PULLUP);//entrada i7
 Serial.begin(9600);}//Velocidad baudios
void loop(){i0=LOW;//digitalRead(2);//Nibble bajo
 i1=LOW; //digitalRead(3);
 i2=LOW; //digitalRead(4);
 i3=LOW; //digitalRead(5);
 i4=HIGH;//digitalRead(6);//Nibble alto
 i5=HIGH;//digitalRead(7);
 i6=HIGH;//digitalRead(8);
 i7=HIGH;//digitalRead(9);
 //Configuración del integrado soft
 a2=i1;b2=i2;a1=i3;b1=i4;c1=i5;d1=i6;e1=i7;
 //Lógica de primer 74184 por soft
 Y1=(!e1&!d1&!c1&a1)|(!e1&!d1&c1&b1&!a1)|
 (!e1&d1&!c1&!b1&!a1)|(!e1&!c1&b1&a1)|
 (!e1&d1&c1&!b1&a1)|(e1&!c1&b1&!a1)|
 (e1&c1&b1&a1)|(e1&d1&c1&!b1&!a1)|
 (e1&!d1&!c1&!a1)|(e1&!d1&c1&a1);
 Y2=(!e1&!d1&!c1&b1)|(!d1&c1&b1&a1)|
 (!e1&d1&!b1&!a1)|(e1&!d1&c1&!b1)|
 (e1&d1&!c1&b1&a1)|(d1&c1&!b1&!a1)|
 (e1&!d1&!c1&!b1&a1)|(e1&!d1&b1&!a1)|
 (e1&!d1&c1&b1);
 Y3=(!e1&!d1&c1&!b1&!a1)|(!e1&d1&!c1&!b1&a1)|
 (!e1&d1&c1&b1&!a1)|(e1&d1&!c1&!b1&!a1)|
 (e1&d1&c1&!b1&a1)|(e1&!d1&!c1&b1&a1);
 Y4=(!e1&!d1&c1&b1)|(!e1&!d1&c1&a1)|
 (!e1&d1&!c1&!b1)|(!e1&c1&b1&a1)|
 (e1&!c1&a1)|(e1&!c1&b1)|
 (e1&d1&c1&!b1)|(e1&!d1&!c1);
 Y5=(!e1&d1&b1)|(!e1&d1&c1)|
 (e1&!d1&!c1)|(d1&c1&b1);  
 Y6=(e1&d1)|(e1&c1);
 Y7=HIGH;Y8=HIGH;
 //Cableado por soft
 c2=Y1;d2=Y2;e2=Y3;b3=Y4;c3=Y5;d3=Y6;e3=LOW;
 //Segundo 74184 por soft 
 YY1=(!e2&!d2&!c2&a2)|(!e2&!d2&c2&b2&!a2)|
 (!e2&d2&!c2&!b2&!a2)|(!e2&!c2&b2&a2)|
 (!e2&d2&c2&!b2&a2)|(e2&!c2&b2&!a2)|
 (e2&c2&b2&a2)|(e2&d2&c2&!b2&!a2)|
 (e2&!d2&!c2&!a2)|(e2&!d2&c2&a2);
 YY2=(!e2&!d2&!c2&b2)|(!d2&c2&b2&a2)|
 (!e2&d2&!b2&!a2)|(e2&!d2&c2&!b2)|
 (e2&d2&!c2&b2&a2)|(d2&c2&!b2&!a2)|
 (e2&!d2&!c2&!b2&a2)|(e2&!d2&b2&!a2)|
 (e2&!d2&c2&b2);
 YY3=(!e2&!d2&c2&!b2&!a2)|(!e2&d2&!c2&!b2&a2)|
 (!e2&d2&c2&b2&!a2)|(e2&d2&!c2&!b2&!a2)|
 (e2&d2&c2&!b2&a2)|(e2&!d2&!c2&b2&a2);
 YY4=(!e2&!d2&c2&b2)|(!e2&!d2&c2&a2)|
 (!e2&d2&!c2&!b2)|(!e2&c2&b2&a2)|
 (e2&!c2&a2)|(e2&!c2&b2)|
 (e2&d2&c2&!b2)|(e2&!d2&!c2);
 YY5=(!e2&d2&b2)|(!e2&d2&c2)|
 (d2&c2&b2)|(e2&!d2&!c2);  
 YY6=(e2&d2)|(e2&c2);
 YY7=HIGH;YY8=HIGH;
 //Conexionado de líneas
 a3=YY5;
 //Tercer integrado 74184 por soft
 YYY1=(!e3&!d3&!c3&a3)|(!e3&!d3&c3&b3&!a3)|
 (!e3&d3&!c3&!b3&!a3)|(!e3&!c3&b3&a3)|
 (!e3&d3&c3&!b3&a3)|(e3&!c3&b3&!a3)|
 (e3&c3&b3&a3)|(e3&d3&c3&!b3&!a3)|
 (e3&!d3&!c3&!a3)|(e3&!d3&c3&a3);
 YYY2=(!e3&!d3&!c3&b3)|(!d3&c3&b3&a3)|
 (!e3&d3&!b3&!a3)|(e3&!d3&c3&!b3)|
 (e3&d3&!c3&b3&a3)|(d3&c3&!b3&!a3)|
 (e3&!d3&!c3&!b3&a3) |(e3&!d3&b3&!a3)|
 (e3&!d3&c3&b3);
 YYY3=(!e3&!d3&c3&!b3&!a3)|
 (!e3&d3&!c3&!b3&a3)|(!e3&d3&c3&b3&!a3)|
 (e3&d3&!c3&!b3&!a3)|(e3&d3&c3&!b3&a3)|
 (e3&!d3&!c3&b3&a3);
 YYY4=(!e3&!d3&c3&b3)|(!e3&!d3&c3&a3)|
 (!e3&d3&!c3&!b3)|(!e3&c3&b3&a3)|
 (e3&!c3&a3)|(e3&!c3&b3)|
 (e3&d3&c3&!b3)|(e3&!d3&!c3);
 YYY5=(!e3&d3&b3)|(!e3&d3&c3)|
 (d3&c3&b3)|(e3&!d3&!c3);  
 YYY6=(e3&d3)|(e3&c3);
 YYY7=HIGH;YYY8=HIGH;
 //Transformacion a decimal para mostrar
 BCDLSB=(YY3*8+YY2*4+YY1*2+i0*1);
 BCDMEDIO=(YYY3*8+YYY2*4+YYY1*2+YY4*1);
 BCDMSB=(YYY5*2+YYY4*1);
 Serial.print("Numero BCD MSB ");
 Serial.println(BCDMSB);
 Serial.print("Numero BCD MEDIO ");
 Serial.println(BCDMEDIO);
 Serial.print("Numero BCD LSB ");
 Serial.println(BCDLSB);delay(1000);}


