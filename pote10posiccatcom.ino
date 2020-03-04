//Autor:Dario Jorge Iglesias
boolean D,C,B,A,a,b,c,d,e,f,g;//Var. I/O
int pote;
void setup(){pinMode(6,OUTPUT);//Conf.
 pinMode(5,OUTPUT);pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);pinMode(2,OUTPUT);
 pinMode(1,OUTPUT);pinMode(0,OUTPUT);}
void loop(){ //Super lazo infinito
 pote=analogRead(A0);//Var. análogica
 pote=map(pote,0,1023,0,9);//acota
 D=boolean((pote&0x08)/8);//decofificó MSB
 C=boolean((pote&0x04)/4);
 B=boolean((pote&0x02)/2);
 A=boolean((pote&0x01)/1);//decodificó LSB
 a=!(C^A)|(B)|(D);
 digitalWrite(6,a);//segmento a
 b=(!C)|!(B^A);
 digitalWrite(5,b);//segmento b
 c=A|C|(!B);
 digitalWrite(4,c);//segmento c
 d=(!C&!A)|(B&!A)|(C&!B&A)|(!C&B);
 digitalWrite(3,d);//segmento d
 e=(!C&!A)|(B&!A);
 digitalWrite(2,e);//segmento e
 f=(!B&!A)|(C&!B)|(C&!A)|D;
 digitalWrite(1,f);//f
 g=(C^B)|(B&!A)|D;
 digitalWrite(0,g);}//Seg. g
 

