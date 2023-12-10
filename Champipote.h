#ifndef Champipote_H
#define Champipote_H

#include <arduino.h>
#include "Sensor_TempHum.h"
#include "PowerOutput.h"
#include "Blue_Button.h"
#include "LCD.h"
#include "Service_NivEau.h"

using namespace std;

class Champipote{
  public :
  Champipote(uint8_t DHTPIN, uint8_t DHTTYPE, int PWRPIN1, int PWRPIN2, int BTNLEDPIN, int BTNPIN, int CAPTPIN, int SEUILEAU, int LCDROW, int LCDCOL);
  void InitChampipote();
  void BoucleChampipote();
    
  private :
  float t;
  float h;
  bool OFF;
  bool NivEAU;

  TempHum temp1;//Le DHT est pété, le 5V n'était visiblement pas une bonne idée.
  PowerOutput pwr1; //ventillo
  PowerOutput pwr2; //pompe
  Blue_Button btn1;
  NivEau capt;
  LCD lcd;
};

#endif