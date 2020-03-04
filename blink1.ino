//Autor:Dario Jorge Iglesias
void setup()//Configuración de pines
{
  pinMode(13, OUTPUT);//Pin 13 salida
}
void loop()//Ciclo infinito
{//Inicio loop
  digitalWrite(13,HIGH);//Saca "1"=5V en pin 13
  delay(1000);          //Espera 1 Segundo
  digitalWrite(13,LOW); //Saca "0"=0V en pin 13
  delay(1000);          //Espera 1 Segundo
}//Fin loop





