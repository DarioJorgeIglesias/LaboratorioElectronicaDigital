//Autor:Dario Jorge Iglesias
boolean BVII,BVI,BV,BIV,BIII,BII,BI,BO,AVII,AVI,AV,AIV,AIII,AII,AI,AO,Y;
void setup(){  
 pinMode(15,INPUT_PULLUP);pinMode(14,INPUT_PULLUP);pinMode(13,INPUT_PULLUP);
 pinMode(12,INPUT_PULLUP);pinMode(11,INPUT_PULLUP);pinMode(10,INPUT_PULLUP);
 pinMode(9,INPUT_PULLUP);pinMode(8,INPUT_PULLUP);pinMode(7,INPUT_PULLUP);
 pinMode(6,INPUT_PULLUP);pinMode(5,INPUT_PULLUP);pinMode(4,INPUT_PULLUP);
 pinMode(3,INPUT_PULLUP);pinMode(2,INPUT_PULLUP);pinMode(1,INPUT_PULLUP);
 pinMode(0,INPUT_PULLUP);pinMode(A0,OUTPUT);}
void loop(){
 BVII=digitalRead(15);BVI=digitalRead(14);BV=digitalRead(13);
 BIV=digitalRead(12);BIII=digitalRead(11);BII=digitalRead(10);
 BI=digitalRead(9);BO=digitalRead(8);AVII=digitalRead(7);
 AVI=digitalRead(6);AV=digitalRead(5);AIV=digitalRead(4);
 AIII=digitalRead(3);AII=digitalRead(2);AI=digitalRead(1);
 AO=digitalRead(0);
 Y=(!BVII&AVII)|!(BVII^AVII)&(!BVI&AVI)|!(BVII^AVII)&!(BVI^AVI)&(!BV&AV)|
 !(BVII^AVII)&!(BVI^AVI)&!(BV^AV)&(!BIV&AIV)|!(BVII^AVII)&!(BVI^AVI)&!(BV^AV)&!(BIV^AIV)&(!BIII&AIII)|
 !(BVII^AVII)&!(BVI^AVI)&!(BV^AV)&!(BIV^AIV)&!(BIII^AIII)&(!BII&AII)|
 !(BVII^AVII)&!(BVI^AVI)&!(BV^AV)&!(BIV^AIV)&!(BIII^AIII)&!(BII^AII)&(!BI&AI)|
 !(BVII^AVII)&!(BVI^AVI)&!(BV^AV)&!(BIV^AIV)&!(BIII^AIII)&!(BII^AII)&!(BI^AI)&(!BO&AO);//Y=A>B
 digitalWrite(A0,Y);//actualizamos salida
}
