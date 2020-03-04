//Autor:Dario Jorge Iglesias
boolean a0,a1,I0,I1,I2,I3;     
void setup(){  //Configuración I/O
 pinMode(4,INPUT_PULLUP);//I3
 pinMode(5,INPUT_PULLUP);//I2
 pinMode(6,INPUT_PULLUP);//I1
 pinMode(7,INPUT_PULLUP);//I0
 pinMode(8,OUTPUT);//a1
 pinMode(9,OUTPUT);//a2
            }
void loop()//ciclo infinito
{
 I3=digitalRead(4);
 I2=digitalRead(5);
 I1=digitalRead(6);
 I0=digitalRead(7);
 a0=I1|I3;a1=I2|I3;
 digitalWrite(8,a1); 
 digitalWrite(9,a0);
}


