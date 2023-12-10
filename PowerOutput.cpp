#include "PowerOutput.h"


using namespace std;

PowerOutput :: PowerOutput(int PWRPIN){
  this->OutputPin = PWRPIN;
  this->OutputState = false;
  pinMode(PWRPIN, OUTPUT);
}

void PowerOutput :: SetOutputState(bool state){
  if(state){
    digitalWrite(this->OutputPin, LOW);
    this->OutputState = true;
  }
  else{
    digitalWrite(this->OutputPin, HIGH);
    this->OutputState = false;
  }


  
}

bool PowerOutput :: GetOutputState(){
  return this->OutputState;
}