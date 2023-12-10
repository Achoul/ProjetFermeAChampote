
#include "Blue_Button.h"

using namespace std;



Blue_Button :: Blue_Button(int LedPin, int ButtonPin){
  this->LedPin = LedPin;
  this->ButtonPin = ButtonPin;
  pinMode(ButtonPin, INPUT);
  pinMode(LedPin, OUTPUT);
}

//(void (*)())[&](){this->OnOFFButtonHandler();}

bool Blue_Button :: GetButtonState(){
  ButtonState = digitalRead(ButtonPin);
  return this->ButtonState;
}

void Blue_Button :: SetLedState(bool state){
  if(state){
    this->LedState = false;
    digitalWrite(this->LedPin, LOW);
  }
  else{
    this->LedState = true;
    digitalWrite(this->LedPin, HIGH);
  }   
}