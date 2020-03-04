//Autor:Dario Jorge Iglesias
boolean E,D,C,B,A,Q0,Q1,Q2,Q3,Q4,Q5,Q6;
boolean Q7,Q8,Q9,Q10,Q11,Q12,Q13,Q14,Q15;
boolean Q16,Q17,Q18,Q19,Q20,Q21,Q22,Q23;
boolean Q24,Q25,Q26,Q27,Q28,Q29,Q30,Q31;
int pote;
void setup() //Configuración
{
 pinMode(13,OUTPUT);pinMode(16,OUTPUT);
 pinMode(12,OUTPUT);pinMode(1,OUTPUT);
 pinMode(11,OUTPUT);pinMode(18,OUTPUT);
 pinMode(10,OUTPUT);pinMode(19,OUTPUT);
 pinMode(9,OUTPUT); pinMode(20,OUTPUT);
 pinMode(8,OUTPUT); pinMode(21,OUTPUT);
 pinMode(7,OUTPUT); pinMode(22,OUTPUT);
 pinMode(6,OUTPUT); pinMode(23,OUTPUT);
 pinMode(5,OUTPUT); pinMode(24,OUTPUT);
 pinMode(4,OUTPUT); pinMode(25,OUTPUT);
 pinMode(3,OUTPUT); pinMode(26,OUTPUT);
 pinMode(2,OUTPUT); pinMode(27,OUTPUT);
 pinMode(1,OUTPUT); pinMode(28,OUTPUT);
 pinMode(0,OUTPUT); pinMode(29,OUTPUT);
 pinMode(14,OUTPUT);pinMode(30,OUTPUT);
 pinMode(15,OUTPUT);pinMode(31,OUTPUT);
}
void loop() //Super lazo infinito
{
 pote=analogRead(A0);pote=map(pote,0,1023,0,31);
 E=boolean((pote&0x10)/16);D=boolean((pote&0x08)/8);
 C=boolean((pote&0x04)/4); B=boolean((pote&0x02)/2);
 A=boolean((pote&0x01)/1);
 Q0=!E&!D&!C&!B&!A;digitalWrite(13,Q0);
 Q1=!E&!D&!C&!B&A; digitalWrite(12,Q1);
 Q2=!E&!D&!C&B&!A; digitalWrite(11,Q2);
 Q3=!E&!D&!C&B&A;  digitalWrite(10,Q3);
 Q4=!E&!D&C&!B&!A; digitalWrite(9,Q4);
 Q5=!E&!D&C&!B&A;  digitalWrite(8,Q5);
 Q6=!E&!D&C&B&!A;  digitalWrite(7,Q6);
 Q7=!E&!D&C&B&A;   digitalWrite(6,Q7);
 Q8=!E&D&!C&!B&!A; digitalWrite(5,Q8);
 Q9=!E&D&!C&!B&A;  digitalWrite(4,Q9);
 Q10=!E&D&!C&B&!A; digitalWrite(3,Q10);
 Q11=!E&D&!C&B&A;  digitalWrite(2,Q11);
 Q12=!E&D&C&!B&!A; digitalWrite(1,Q12);
 Q13=!E&D&C&!B&A;  digitalWrite(0,Q13);
 Q14=!E&D&C&B&!A;  digitalWrite(14,Q14);
 Q15=!E&D&C&B&A;   digitalWrite(15,Q15);
 Q16=E&!D&!C&!B&!A;digitalWrite(16,Q16);
 Q17=E&!D&!C&!B&A; digitalWrite(17,Q17);
 Q18=E&!D&!C&B&!A; digitalWrite(18,Q18);
 Q19=E&!D&!C&B&A;  digitalWrite(19,Q19);
 Q20=E&!D&C&!B&!A; digitalWrite(20,Q20);
 Q21=E&!D&C&!B&A;  digitalWrite(21,Q21);
 Q22=E&!D&C&B&!A;  digitalWrite(22,Q22);
 Q23=E&!D&C&B&A;   digitalWrite(23,Q23);
 Q24=E&D&!C&!B&!A; digitalWrite(24,Q24);
 Q25=E&D&!C&!B&A;  digitalWrite(25,Q25);
 Q26=E&D&!C&B&!A;  digitalWrite(26,Q26);
 Q27=E&D&!C&B&A;   digitalWrite(27,Q27);
 Q28=E&D&C&!B&!A;  digitalWrite(28,Q28);
 Q29=E&D&C&!B&A;   digitalWrite(29,Q29);
 Q30=E&D&C&B&!A;   digitalWrite(30,Q30);
 Q31=E&D&C&B&A;    digitalWrite(31,Q31);}


