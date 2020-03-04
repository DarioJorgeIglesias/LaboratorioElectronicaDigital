//Autor:Dario Jorge Iglesias
boolean a1,b1,c1,d1,e1,a2,b2,c2,d2,e2,a3,b3,c3,d3;
boolean e3,Y1,Y2,Y3,Y4,Y5,Y6,Y7,Y8,YY1,YY2,YY3,YY4;
boolean YY5,YY6,YY7,YY8,YYY1,YYY2,YYY3,YYY4,YYY5;
boolean YYY6,YYY7,YYY8,i7,i6,i5,i4,i3,i2,i1,i0;
boolean A,B,C,D,a,b,c,d,e,f,g;
byte BCDLSB,BCDMSB,BCDMEDIO;int POTE;
void setup(){      
 pinMode(0,OUTPUT);
 pinMode(1,OUTPUT);pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);pinMode(6,OUTPUT);
 pinMode(7,OUTPUT); //unidades
 pinMode(8,OUTPUT); //decenas
 pinMode(9,OUTPUT);}//centenas
void loop(){POTE=analogRead(A0);
 POTE=map(POTE,0,1023,0,255);
 i0=(POTE&0x01);    i1=(POTE&0x02)/2; //Nibble bajo
 i2=(POTE&0x04)/4;  i3=(POTE&0x08)/8;
 i4=(POTE&0x10)/16; i5=(POTE&0x20)/32;//Nibble alto
 i6=(POTE&0x40)/64; i7=(POTE&0x80)/128;
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
 (e3&!d3&!c3&!b3&a3)|(e3&!d3&b3&!a3)|
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
 D=YY3; //Lee peso 8
 C=YY2; //Lee peso 4
 B=YY1; //Lee peso 2
 A=i0;  //Lee peso 1
 a=!(C^A)|(B)|(D);digitalWrite(6,a);     
 b=(!C)|!(B^A);digitalWrite(5,b);        
 c=A|C|(!B);digitalWrite(4,c);           
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);
 digitalWrite(3,d);e=(!C&!A)|(B&!A);    
 digitalWrite(2,e);f=(!B&!A)|(C&!B)|(C&!A)|D;    
 digitalWrite(1,f);g=(C^B)|(B&!A)|D;   
 digitalWrite(0,g);digitalWrite(7,LOW);    
 digitalWrite(8,HIGH);digitalWrite(9,HIGH);delay(4);  
 D=YYY3; //Lee peso 8
 C=YYY2; //Lee peso 4
 B=YYY1; //Lee peso 2
 A=YY4;  //Lee peso 1
 a=!(C^A)|(B)|(D);digitalWrite(6,a);
 b=(!C)|!(B^A);digitalWrite(5,b);        
 c=A|C|(!B);digitalWrite(4,c);           
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);
 digitalWrite(3,d);e=(!C&!A)|(B&!A);  
 digitalWrite(2,e);f=(!B&!A)|(C&!B)|(C&!A)|D;    
 digitalWrite(1,f);g=(C^B)|(B&!A)|D;   
 digitalWrite(0,g);digitalWrite(7,HIGH);    
 digitalWrite(8,LOW);digitalWrite(9,HIGH);delay(4);  
 BCDMSB=(YYY5*2+YYY4*1);
 D=LOW; //Lee peso 8
 C=LOW; //Lee peso 4
 B=YYY5;//Lee peso 2
 A=YYY4;//Lee peso 1
 a=!(C^A)|(B)|(D);digitalWrite(6,a);     
 b=(!C)|!(B^A);digitalWrite(5,b);        
 c=A|C|(!B);digitalWrite(4,c);           
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);
 digitalWrite(3,d);e=(!C&!A)|(B&!A);    
 digitalWrite(2,e);f=(!B&!A)|(C&!B)|(C&!A)|D;    
 digitalWrite(1,f);g=(C^B)|(B&!A)|D;    
 digitalWrite(0,g);digitalWrite(7,HIGH);    
 digitalWrite(8,HIGH);digitalWrite(9,LOW);delay(4);}

 

