#ifndef __DHT11blablabla
#define __DHT11blablabla

#include <Arduino.h>

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <iostream>
#include <stdio.h>




using namespace std;

class TempHum{

  private:
  uint8_t PIN;
  uint8_t TYPE;
  DHT dht;

  public:
  TempHum(uint8_t  DHTPIN, uint8_t DHTTYPE);

  float GetTemp();
  float GetHum();

  class NoDataH{};
  class NoDataT{};


};

#endif