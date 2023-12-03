#include <Arduino.h> //a mettre en premiere ligne dans tous les fichiers (redefinition du type byte)
#include "capteurNiveauEau.h"

using namespace std;

#define pinCapteur D0

CapteurNiveauEau::CapteurNiveauEau(){
  niveauMax = false;
}

CapteurNiveauEau::~CapteurNiveauEau(){
  //destruction de l'instance du capteur
  //pas de modification particuliere
  Serial.print(F("Capteur de niveau d'eau détruit"));
}

void CapteurNiveauEau::capteurEau_Init(int mode){
  //configuration d'un pin GPIO
  pinMode(pinCapteur, mode);
}

void CapteurNiveauEau::setLevel(){
  niveauMax = digitalRead(pinCapteur);
}

bool CapteurNiveauEau::getLevel(){
  if(niveauMax == true){
    Serial.print(F("Niveau d'eau haut"));
  } else {
    Serial.print(F("Niveau d'eau bas"));
  }
  
  return niveauMax;
}