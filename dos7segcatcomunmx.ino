//Autor:Dario Jorge Iglesias
boolean D,C,B,A,a,b,c,d,e,f,g,dig1=HIGH,dig2=HIGH;//I/O
int pote,nibbleb,nibblea;
void setup(){ //Configuración
 pinMode(8,OUTPUT);//dig2 decenas
 pinMode(7,OUTPUT);//dig1 unidades
 pinMode(6,OUTPUT);pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);pinMode(1,OUTPUT);
 pinMode(0,OUTPUT);}
void loop(){ //Super lazo infinito
 pote=analogRead(A0);pote=map(pote,0,1023,0,153);
//ojo con el mapeo no es (0,0) a (0,99)
//convierte 99 en BCD 10011001 y en decimal es 153
 nibbleb=pote&0x0F;//nos quedamos con nibble bajo
 nibblea=pote&0xF0;//nos quedamos con nibble alto
 if(nibbleb>9) {
 nibbleb=nibbleb+6;//sumamos 6 para conversión BCD
 nibblea=nibblea>>4;//desplazamos 4 bits a derecha
 nibblea=nibblea + 1;//sumamos 1 de acarreo
 nibblea=nibblea<<4;//corremos los 4 a izquierda
 nibbleb=nibbleb&0x0F;}//quedamos con 4 bits bajos
 else
 nibbleb=nibbleb&0x0F;//quedamos con los 4 bits bajos
 D=boolean((nibbleb&0x08)/8);//limpia bits
 C=boolean((nibbleb&0x04)/4);
 B=boolean((nibbleb&0x02)/2);
 A=boolean((nibbleb&0x01)/1);
 delay(10);dig1=LOW;dig2=HIGH;
 digitalWrite(7,dig1);//habilito unidades
 digitalWrite(8,dig2);//deshabilito decenas
 a=!(C^A)|(B)|(D);digitalWrite(6,a);
 b=(!C)|!(B^A);digitalWrite(5,b);
 c=A|C|(!B);digitalWrite(4,c);
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);digitalWrite(3,d);
 e=(!C&!A)|(B&!A);digitalWrite(2,e);
 f=(!B&!A)|(C&!B)|(C&!A)|D;digitalWrite(1,f);
 g=(C^B)|(B&!A)|D;digitalWrite(0,g);
 if(nibblea>9){
 nibblea=nibblea+6;//sumo 6 para convertir BCD
 nibblea=nibblea&0xF0;}//quedamos con la parte alta
 else
 nibblea=nibblea&0xF0;//nos quedamos con nibble alto
 D=boolean((nibblea&0x80)/128);//limpia bits
 C=boolean((nibblea&0x40)/64);
 B=boolean((nibblea&0x20)/32);
 A=boolean((nibblea&0x10)/16);
 delay(10);dig1=HIGH;dig2=LOW;
 digitalWrite(7,dig1);//deshabilito unidades
 digitalWrite(8,dig2);//habilito decenas
 a=!(C^A)|(B)|(D);digitalWrite(6,a);
 b=(!C)|!(B^A);digitalWrite(5,b);
 c=A|C|(!B);digitalWrite(4,c);
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);digitalWrite(3,d);
 e=(!C&!A)|(B&!A);digitalWrite(2,e);
 f=(!B&!A)|(C&!B)|(C&!A)|D;digitalWrite(1,f);
 g=(C^B)|(B&!A)|D;digitalWrite(0,g);}



