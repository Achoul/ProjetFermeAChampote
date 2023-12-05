
#ifndef __BB1
#define __BB1

#include <Arduino.h>


using namespace std;

//on veux que le bouton conserve un niveau haut ou bas si il est presser
class Blue_Button{
  private:
  bool ButtonState = false;
  bool LedState = false;
  int LedPin;
  int ButtonPin;
  


  public:

  Blue_Button(int LedPin, int ButtonPin);

  void SetLedState(bool state);

  bool GetButtonState();


};

static Blue_Button * x = nullptr;

#endif