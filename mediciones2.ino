//Autor:Darío Jorge Iglesias
int lectura;//var. ADC
boolean A;
void setup(){
Serial.begin(9600); 
pinMode(13,OUTPUT);
pinMode(12,INPUT);}
void loop(){
lectura=analogRead(A0);
A=digitalRead(12);
Serial.print(lectura);
Serial.print("Salida:");
Serial.println(A);
digitalWrite(13,A);
delay(1000);}






