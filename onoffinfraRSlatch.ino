boolean R,S,Qn,NOQn;
void setup() 
{
pinMode(13,OUTPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
}
void loop() 
{
R=digitalRead(7);//leemos sensor A
S=digitalRead(6);//leemos sensor B
//sensor normalmente entrega HIGH
R=!R;//negamos asegurando LOW
S=!S;//negamos asegurando LOW
//Salidas simple y complementada
Qn=!(R|NOQn);
NOQn=!(S|Qn);
digitalWrite(13,NOQn);}//aseguramos LOW






