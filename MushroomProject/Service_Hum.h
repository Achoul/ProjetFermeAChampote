#ifndef __DHT11_Hum
#define __DHT11_Hum

#include "Service_DHT11.h"


class Humidity : public DHT11{
  public:

  Humidity();

  float GetData() override;

};

#endif