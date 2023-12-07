#ifndef __DHT11_Temp
#define __DHT11_Temp

#include "Service_DHT11.h"


using namespace std;

class Temperature : public DHT11{
  public:

  Temperature();

  float GetData() override;

};

#endif