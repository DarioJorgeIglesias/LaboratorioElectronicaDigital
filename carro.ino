//Autor:Dario Jorge Iglesias
boolean FCI,FCD,SWI,SWD,MD,MI;
void setup(){
 pinMode(8,INPUT_PULLUP);//Entrada final carrera izq.
 pinMode(9,INPUT_PULLUP);//Entrada final carrera der.
 pinMode(10,INPUT_PULLUP);//Pulsador izquierdo
 pinMode(11,INPUT_PULLUP);//Pulsador derecha
 pinMode(5,OUTPUT);//Motor hacia izquierda
 pinMode(6,OUTPUT);}//Motor hacia derecha
void loop() 
{
 FCI=digitalRead(8);
 FCD=digitalRead(9);
 SWI=digitalRead(10);
 SWD=digitalRead(11);
 MD=!FCD&!SWI&SWD;
 digitalWrite(6,MD);
 MI=!FCI&SWI&!SWD;
 digitalWrite(5,MI);
}




