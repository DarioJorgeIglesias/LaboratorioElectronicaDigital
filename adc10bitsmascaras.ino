//Autor:Dario Jorge Iglesias
boolean R9,R8,R7,R6,R5,R4,R3,R2,R1,R0;
int dato;
void setup(){Serial.begin(9600);}
void loop(){dato=analogRead(A0);
//DECODIFICACIÓN MASK DE DATOS
 R0=dato&0x0001;R1=dato&0x0002;
 R2=dato&0x0004;R3=dato&0x0008;
 R4=dato&0x0010;R5=dato&0x0020;
 R6=dato&0x0040;R7=dato&0x0080;
 R8=dato&0x0100;R9=dato&0x0200;
 //IMPRESION EN MONITOR DE 10 BITS
 Serial.println("DATO");
 Serial.print(R9);Serial.print(R8);
 Serial.print(R7);Serial.print(R6);
 Serial.print(R5);Serial.print(R4);
 Serial.print(R3);Serial.print(R2);
 Serial.print(R1);Serial.println(R0); 
 //DEMORA PARA ANÁLISIS
 delay(1000);}





 

