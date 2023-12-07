#ifndef __DHT11_Temp
#define __DHT11_Temp

#include "Service_DHT11.h"


using namespace std;

class Temperature : public DHT{
  public:

  float GetData() override;

};

#endif