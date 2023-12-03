#include "capteurNiveauEau.h"

CapteurNiveauEau cEau;

void setup() {
  // put your setup code here, to run once:
  cEau.capteurEau_Init(INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  cEau.setLevel();
  delay(200);
  cEau.getLevel();
  delay(1000);
}
