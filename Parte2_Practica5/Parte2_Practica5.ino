/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Dev: Sebastian Enrique Lemus Salvador
   Fecha: 09 de mayo 2024
   
   link de la simulacion: https://www.tinkercad.com/things/lRrXUkI56jP-parte-2-practica-5-bimestre-ii?sharecode=3UPhrWuGyFnl_tnoVu6b6hrD4PASQsa_lu_qQnVadnQ
*/

#define PinBuzzer 10

//la H significa que la nota esta en una octava superior en este caso use la 4ta octava y con H es la 5ts octava
//la S significa que la nota esta sostenida

int Do=261; 
int re=294;
int mi=329;
int fa=349;
int sol=391;
int solS=415;
int la=440;
int laS=455;
int si=466;
int doH=523;
int doSH=554;
int reH=587;
int reSH=622;
int miH=659;
int faH=698;
int faSH=740;
int solH=783;
int solSH=830;
int laH=880;
 
void setup()    {    
  pinMode(PinBuzzer, OUTPUT); // definimos la variable ZumbadorPin como una salida.
}    

void loop(){
  tone(PinBuzzer, la, 500);
  delay(550);
  tone(PinBuzzer, la, 500);
  delay(550);     
  tone(PinBuzzer, la, 500); 
  delay(550);
  tone(PinBuzzer, fa, 350);  
  delay(400);
  tone(PinBuzzer, doH, 150);
  delay(200);    
  tone(PinBuzzer, la, 500);
  delay(550);
  tone(PinBuzzer, fa, 350);
  delay(400);
  tone(PinBuzzer, doH, 150);
  delay(200);
  tone(PinBuzzer, la, 1000);   
  delay(1050);
  tone(PinBuzzer, miH, 500);
  delay(550);
  tone(PinBuzzer, miH, 500);
  delay(550);
  tone(PinBuzzer, miH, 500); 
  delay(550);   
  tone(PinBuzzer, faH, 350);
  delay(400); 
  tone(PinBuzzer, doH, 150);
  delay(200);
  tone(PinBuzzer, solS, 500);
  delay(550);
  tone(PinBuzzer, fa, 350);
  delay(400);
  tone(PinBuzzer, doH, 150);
  delay(200);
  tone(PinBuzzer, la, 1000);
  delay(1050);  
  tone(PinBuzzer, laH, 500);
  delay(550);
  tone(PinBuzzer, la, 350);
  delay(400); 
  tone(PinBuzzer, la, 150);
  delay(200);
  tone(PinBuzzer, laH, 500);
  delay(550);
  tone(PinBuzzer, solSH, 250); 
  delay(350);
  tone(PinBuzzer, solH, 250);
  delay(300);
  tone(PinBuzzer, faSH, 125);
  delay(175);
  tone(PinBuzzer, faH, 125);
  delay(175);    
  tone(PinBuzzer, faSH, 250);
  delay(300);
  tone(PinBuzzer, laS, 250);
  delay(300);    
  tone(PinBuzzer, reSH, 500); 
  delay(550); 
  tone(PinBuzzer, reH, 250); 
  delay(300); 
  tone(PinBuzzer, doSH, 250);
  delay(300);  
  tone(PinBuzzer, doH, 125);
  delay(175);  
  tone(PinBuzzer, si, 125); 
  delay(175); 
  tone(PinBuzzer, doH, 250); 
  delay(300);
  tone(PinBuzzer, fa, 125); 
  delay(175); 
  tone(PinBuzzer, solS, 500); 
  delay(550); 
  tone(PinBuzzer, fa, 375); 
  delay(400); 
  tone(PinBuzzer, la, 125);
  delay(175);  
  tone(PinBuzzer, doH, 500); 
  delay(550);
  tone(PinBuzzer, la, 375);  
  delay(425);
  tone(PinBuzzer, doH, 125); 
  delay(175);
  tone(PinBuzzer, reH, 1000); 
  delay(1050); 
  tone(PinBuzzer, laH, 500);
  delay(550);
  tone(PinBuzzer, la, 350); 
  delay(400);
  tone(PinBuzzer, la, 150);
  delay(200);
  tone(PinBuzzer, laH, 500);
  delay(550);
  tone(PinBuzzer, solSH, 250);
  delay(300); 
  tone(PinBuzzer, solH, 250);
  delay(300);
  tone(PinBuzzer, faSH, 125);
  delay(175);
  tone(PinBuzzer, faH, 125);  
  delay(175);  
  tone(PinBuzzer, faSH, 250);
  delay(300);
  tone(PinBuzzer, laS, 250);  
  delay(300);  
  tone(PinBuzzer, reSH, 500);  
  delay(550);
  tone(PinBuzzer, reH, 250);  
  delay(300);
  tone(PinBuzzer, doSH, 250);
  delay(300);  
  tone(PinBuzzer, doH, 125);  
  delay(175);
  tone(PinBuzzer, si, 125);  
  delay(175);
  tone(PinBuzzer, solH, 250);
  delay(300);      
  tone(PinBuzzer, fa, 250); 
  delay(300); 
  tone(PinBuzzer, solS, 500); 
  delay(550); 
  tone(PinBuzzer, fa, 375);  
  delay(425);
  tone(PinBuzzer, doH, 125); 
  delay(175);        
  tone(PinBuzzer, la, 500); 
  delay(550);           
  tone(PinBuzzer, fa, 375);  
  delay(425);          
  tone(PinBuzzer, Do, 125); 
  delay(175);  
  tone(PinBuzzer, la, 1000);
  delay(1050);       
}
