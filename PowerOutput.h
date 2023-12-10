
#ifndef __PowerOutput
#define __PowerOutput

#include <Arduino.h>


using namespace std;

class PowerOutput{
  private:
  bool OutputState = false;
  int OutputPin;

  public:
  PowerOutput(int PWRPIN);
  void SetOutputState(bool state);
  bool GetOutputState();


};

#endif