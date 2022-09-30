#include <funcionSimon.h>
#include <esp32WS2811.h>

int numeroEscritura = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  numeroEscritura = Serial.parseInt();
  funcionPrueba(multiplicacion(numeroEscritura,numeroPresentes));
  delay(700);
}