
#include "Service_NivEau.h"

using namespace std;


NivEau :: NivEau(int PIN, int threshold){
  this->MaxAtteint = false;
  this->NivEauPIN = PIN;
  this->threshold = threshold;
  pinMode(PIN, INPUT);
}

bool NivEau :: IsMaxAtteint(){
  if(analogRead(this->NivEauPIN) < threshold){
    this->MaxAtteint = true;
  }
  else{
    this->MaxAtteint = false;
  }
  return this->MaxAtteint;
}