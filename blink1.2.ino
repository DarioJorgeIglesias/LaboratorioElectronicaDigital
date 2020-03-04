//Autor:Dario Jorge Iglesias
void setup()//Conf. de pines
{
pinMode(3, OUTPUT);//Pin3 OUT
}
void loop()//Ciclo infinito
{
  digitalWrite(3, HIGH);//5V 
  delay(25);//Espera 25mSeg.
  digitalWrite(3, LOW);//0V
  delay(25);//Espera 25mSeg.
}




