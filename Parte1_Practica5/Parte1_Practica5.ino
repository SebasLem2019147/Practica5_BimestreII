 /*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Dev: Sebastian Enrique Lemus Salvador
   Fecha: 03 de mayo 2024
   
   link de la simulacion: https://www.tinkercad.com/things/8Z59Hs9sqhd-parte-1-practica-5-bimestre-ii?sharecode=y_Q2RApNfuClYeK4oFTDRijp4ibziUZZ-r-xGnLce30
*/


float kilogramos_a_libras(float kg) {
    return kg * 2.20462;
}

float amperios_a_microAmperios(float amperios) {
    return amperios * 1000000; 
}

const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;

const int N = 4;
const int entradas[N] = {A, B, C, D};

const int numeros[5][N] = {
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {1, 0, 1, 0},
  {1, 1, 1, 0},
  {1, 0, 0, 1}
};

void pines_salidas(){
  for (int i = 0; i < N; i++) {              
    pinMode(entradas[i], OUTPUT);
    digitalWrite(entradas[i], HIGH);
  }
}

void setup() {
  
  pines_salidas();
  
  float kg = 65.0; 
  float libras = kilogramos_a_libras(kg);
  
  float amperios = 56.0; 
  float microAmperios = amperios_a_microAmperios(amperios);
    
  Serial.begin(9600); 
  Serial.print("Cantidad kg: ");
  Serial.println(kg);
  Serial.print("Conversion lb: ");
  Serial.println(libras);
  Serial.println(" \n");
  Serial.print("Cantidad amp: ");
  Serial.println(amperios);
  Serial.print("Conversion microAmperios: ");
  Serial.println(microAmperios);
}

void loop() {
  for (int j = 0; j < 5; j++) {
    for (int k = 0; k < N; k++) { 
      digitalWrite(entradas[k], numeros[j][k]);
    }
    delay(1000);
  }
  for (int k = 0; k < N; k++) { 
    digitalWrite(entradas[k], HIGH);
  }
}
