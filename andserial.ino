//Autor:Dario Jorge Iglesias
boolean A,B,Z;
void setup() {
 pinMode(2,INPUT);
 pinMode(3,INPUT);
 pinMode(4,OUTPUT);
 Serial.begin(9600);}
void loop() 
{
 A=digitalRead(2);
 B=digitalRead(3);
 Z=(A&B);//and lógica
 digitalWrite(4,Z);
 //Imprime datos en forma de tabla
 Serial.print("A=");Serial.print(A);Serial.print("   ");
 Serial.print("B=");Serial.print(B);Serial.print("   ");
 Serial.print("Z=");Serial.print(Z);Serial.println("   ");
 delay(1000);
}



