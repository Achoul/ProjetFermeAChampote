#ifndef __DHT11_Hum
#define __DHT11_Hum

#include "Service_DHT11.h"


class Humidity : public DHT{
  public:

  float GetData() override;

};

#endif