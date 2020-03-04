boolean Z,A,B=HIGH;
void setup()//Configuración de pines
{
  pinMode(13, OUTPUT);//Pin 13 salida
  pinMode(12, INPUT);//Pin 12 entrada
}
void loop()//Ciclo infinito
{
  A=digitalRead(12);
  Z=A&B;//and entre constante B=HIGH y entrada A
  digitalWrite(13, Z);// "1" o "0" lógico por pin 13 
  delay(1000); // Espera 1 Segundo
  digitalWrite(13, LOW);// Saca "0" lógico por pin 13
  delay(1000); // Espera 1 Segundo
}






