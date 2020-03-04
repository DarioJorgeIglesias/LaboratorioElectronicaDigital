//Autor:Dario Jorge Iglesias
boolean A,B,T,U,V,W,X,Y,Z;//ENT. A, B
//LA VAR. T ES NOT, VAR. U PARA OR
//LA VAR. V PARA AND, VAR. W PARA XOR
//LA VAR. X PARA NOR, VAR. Y PARA NAND
//LA VARIABLE Z PARA XNOR
void setup() //CONFIGURACIÓN
{
 pinMode(8,INPUT);//ENT. VARIABLE A
 pinMode(9,INPUT);//ENT. VARIABLE B
 pinMode(7,OUTPUT);//SALIDA T
 pinMode(6,OUTPUT);//SALIDA U
 pinMode(5,OUTPUT);//SALIDA V
 pinMode(4,OUTPUT);//SALIDA W
 pinMode(3,OUTPUT);//SALIDA X
 pinMode(2,OUTPUT);//SALIDA Y
 pinMode(1,OUTPUT);//SALIDA Z
}
void loop() 
{
 A=digitalRead(8);//ACTUALIZA A
 B=digitalRead(9);//ACTUALIZA B
 T=!A;
 digitalWrite(7,T);//INV. A, SALE 7
 U=A|B;//OR
 digitalWrite(6,U);//OR ENTRE A Y B
 V=A&B;//AND
 digitalWrite(5,V);//AND ENTRE A Y B
 W=A^B;//XOR
 digitalWrite(4,W);//XOR ENTRE A Y B
 X=!(A|B);//NOR
 digitalWrite(3,X);//NOR ENTRE A Y B
 Y=!(A&B);//NAND
 digitalWrite(2,Y);//NAND ENTRE A Y B
 Z=!(A^B);//XNOR
 digitalWrite(1,Z);//XNOR ENTRE A Y B
}



