//Autor:Dario Jorge Iglesias
void setup()//Config. de pin
{
  pinMode(3, OUTPUT);//3 OUT
}
void loop()//Ciclo infinito
{//Inicio loop
digitalWrite(3, HIGH);//5V
delay(10);// Espera 10mSeg.
digitalWrite(3, LOW);//0V
delay(10);// Espera 10mSeg.
}//Fin loop



