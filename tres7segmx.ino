//Autor:Dario Jorge Iglesias
boolean D,C,B,A,a,b,c,d,e,f,g,dig1=HIGH,dig2=HIGH,dig3=HIGH;
int pote,nibbleb,nibblea,nibblem;
void setup(){pinMode(9,OUTPUT);//dig3 decenas
 pinMode(8,OUTPUT);//dig2 decenas
 pinMode(7,OUTPUT);//dig1 unidades
 pinMode(6,OUTPUT);pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);pinMode(1,OUTPUT);pinMode(0,OUTPUT);}
void loop(){ //Super lazo infinito
 pote=analogRead(A0); pote=map(pote,0,1023,0,2457);//
//ojo con el mapeo no es (0,0) a (0,999)
//convierte 999 en BCD 101010101010 en base 10= 2457
 nibblea=pote&0xF00;//nos quedamos con el nibble alto
 nibbleb=pote&0x00F;//nos quedamos con nibble bajo
 nibblem=pote&0x0F0;//nos quedamos con nibble medio
 if(nibbleb>9){nibbleb=nibbleb+6;//sumamos 6 para conv. BCD
 nibblem=nibblem>>4;//desplazamos 4 bits a derecha
 nibblem=nibblem + 1;//sumamos 1 de acarreo
 nibblem=nibblem<<4;//volvemos a correr los 4 a izquierda
 nibbleb=nibbleb&0x00F;}//filtramos para tener 4 bits bajos
 else
 nibbleb=nibbleb&0x00F;//nos quedamos con los 4 bits bajos
 D=boolean((nibbleb&0x08)/8);//limpia bits
 C=boolean((nibbleb&0x04)/4);
 B=boolean((nibbleb&0x02)/2);
 A=boolean((nibbleb&0x01)/1);
 delay(4);dig1=LOW;dig2=HIGH;dig3=HIGH;
 digitalWrite(7,dig1);//habilito unidades
 digitalWrite(8,dig2);//deshabilito decenas
 digitalWrite(9,dig3);//deshabilito centenas
 a=!(C^A)|(B)|(D);digitalWrite(6,a);//Refres out seg. a
 b=(!C)|!(B^A);digitalWrite(5,b);
 c=A|C|(!B);digitalWrite(4,c);
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);digitalWrite(3,d);
 e=(!C&!A)|(B&!A);digitalWrite(2,e);
 f=(!B&!A)|(C&!B)|(C&!A)|D;digitalWrite(1,f);
 g=(C^B)|(B&!A)|D;digitalWrite(0,g);
 if(nibblem>9){nibblem=nibblem+6;//sumo 6, conv. BCD
 nibblem=nibblem&0xF0;}//nos quedamos con la parte alta
 else
 nibblem=nibblem&0xF0;//nos quedamos con nibble alto
 D=boolean((nibblem&0x80)/128);//limpia bits
 C=boolean((nibblem&0x40)/64);
 B=boolean((nibblem&0x20)/32);
 A=boolean((nibblem&0x10)/16);
 delay(4);dig1=HIGH;dig2=LOW;dig3=HIGH;
 digitalWrite(7,dig1);//deshabilito unidades
 digitalWrite(8,dig2);//habilito decenas
 digitalWrite(9,dig3);//deshabilito centenas
 a=!(C^A)|(B)|(D);digitalWrite(6,a);
 b=(!C)|!(B^A);digitalWrite(5,b);
 c=A|C|(!B);digitalWrite(4,c);
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);digitalWrite(3,d);
 e=(!C&!A)|(B&!A);digitalWrite(2,e);
 f=(!B&!A)|(C&!B)|(C&!A)|D;digitalWrite(1,f);
 g=(C^B)|(B&!A)|D;digitalWrite(0,g);
 D=boolean((nibblea&0x800)/2048);//limpia bits
 C=boolean((nibblea&0x400)/1024);
 B=boolean((nibblea&0x200)/512);
 A=boolean((nibblea&0x100)/256);
 delay(4);dig1=HIGH;dig2=HIGH;dig3=LOW;
 digitalWrite(7,dig1);//deshabilito unidades
 digitalWrite(8,dig2);//deshabilito decenas
 digitalWrite(9,dig3);//habilito centenas
 a=!(C^A)|(B)|(D);digitalWrite(6,a);
 b=(!C)|!(B^A);digitalWrite(5,b);
 c=A|C|(!B);digitalWrite(4,c);
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);digitalWrite(3,d);
 e=(!C&!A)|(B&!A);digitalWrite(2,e);
 f=(!B&!A)|(C&!B)|(C&!A)|D;digitalWrite(1,f);
 g=(C^B)|(B&!A)|D;digitalWrite(0,g);}

