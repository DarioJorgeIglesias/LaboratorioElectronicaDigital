//Autor:Dario Jorge Iglesias
boolean R7,R6,R5,R4,R3,R2,R1,R0;
byte dato;
void setup(){Serial.begin(9600);}
void loop() 
{
 dato=analogRead(A0);
 R0=dato&0x01;R1=dato&0x02;R2=dato&0x04;R3=dato&0x08;
 R4=dato&0x10;R5=dato&0x20;R6=dato&0x40;R7=dato&0x80;
 Serial.println("DATO");
 Serial.print(R7);Serial.print(R6);Serial.print(R5);
 Serial.print(R4);Serial.print(R3);Serial.print(R2);
 Serial.print(R1);Serial.println(R0);
 delay(1000);
 
}

