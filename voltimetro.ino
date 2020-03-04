//Autor:Darío Jorge Iglesias
float voltaje;
int lectura;//var. ADC
boolean A;
void setup(){
Serial.begin(9600); 
pinMode(13,OUTPUT);
pinMode(12,INPUT);}
void loop(){
lectura=analogRead(A0);
A=digitalRead(12);
voltaje=lectura * (5.0/1023.0);
Serial.print(voltaje);
Serial.print("Salida:");
Serial.println(A);
digitalWrite(13,A);
delay(1000);}





