#include <arduino.h>
#include "Sensor_TempHum.h"



float t = 0;
float h = 0;
TempHum temp1(D8,DHT11);//Le DHT est pété, le 5V n'était visiblement pas une bonne idée.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  try{
    h = temp1.GetHum();
  }
  catch(TempHum :: NoDataH){
    h = 69;
  }

  try{
    t = temp1.GetTemp();
  }
  catch(TempHum :: NoDataT){
    t = 23;
  }
  
  Serial.println(h);
  Serial.println(t);
}
