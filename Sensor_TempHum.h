#ifndef __DHT11blablabla
#define __DHT11blablabla


#include <Adafruit_Sensor.h>
#include <DHT.h>




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

  enum Error{NoDataH, NoDataT};
  //class NoDataH{};
  //class NoDataT{};


};

#endif