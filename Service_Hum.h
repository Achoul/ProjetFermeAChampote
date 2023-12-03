#ifndef __DHT11_Hum
#define __DHT11_Hum

#include "Service_DHT11.h"


using namespace std;

class Humidity : public DHT11{
  private:
  char humidity;
  public:
  Humidity();
  float GetData() override;

};

#endif