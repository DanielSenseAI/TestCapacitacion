#include <Arduino.h>

int numeroPresentes = 6;

void funcionPrueba(int numeroEntrada){
  int numeroEscritura = numeroEntrada * 2;
  if (numeroEscritura > 100){
      Serial.print("Es mayor que 100!");
  } else{
    Serial.print("Es menor que 100!");
  }
}

int multiplicacion(int n, int p){
    int resultado = n*p;
    return resultado;
}