//Autor:Darío Jorge Iglesias
int lectura;//var. ADC
boolean A;
void setup(){
Serial.begin(9600); 
pinMode(13,OUTPUT);
pinMode(12,INPUT);}
void loop(){
lectura=analogRead(A0);
Serial.println(lectura);
A=digitalRead(12);
digitalWrite(13,A);
delay(1000);}


