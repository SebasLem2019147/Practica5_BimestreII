/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica_3 Bimestre II
   Dev: Sebastian Enrique Lemus Salvador
   Fecha: 09 de mayo de 2024
   
   Link de la simulación en Tinkercad: https://www.tinkercad.com/things/lm2seBApzSo-parte-3-practica-5-bimestre-ii?sharecode=tWsjKVrQutsrC_deecbt-q0YOQRXhcaexioeSZmtrYc
   
*/
 
int foco = A0;
int tiempo = 1000;
const int A = 2;
const int B = 4;
const int C = 5;
const int D = 6;

const int N = 4;
const int entradas[N] = {A, B, C, D};

const int numeros[10][N] = {
  {1, 0, 0, 1},
  {0, 0, 0, 1},
  {1, 1, 1, 0},
  {0, 1, 1, 0},
  {1, 0, 1, 0},
  {0, 0, 1, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {1, 0, 0, 0},
  {0, 0, 0, 0}
};

void simulador_misil(){
  for (int j = 0; j < 10; j++) {
    for (int k = 0; k < N; k++) { 
      digitalWrite(entradas[k], numeros[j][k]);
    }
    delay(tiempo);
  }
  for (int k = 0; k < N; k++) { 
    digitalWrite(entradas[k], HIGH);
  }
  tone(10, 250);
  digitalWrite(foco, HIGH);
  delay(tiempo*3);
  digitalWrite(foco, LOW);
  noTone(10);
  delay(tiempo*5);
}

void setup(){
  pinMode(foco, OUTPUT);
  digitalWrite(foco, LOW);
  pinMode(10, OUTPUT);
  for (int i = 0; i < N; i++) {              
    pinMode(entradas[i], OUTPUT);
    digitalWrite(entradas[i], HIGH);
  }
}

void loop(){
  simulador_misil();
}
