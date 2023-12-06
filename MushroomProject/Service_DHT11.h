#ifndef __DHT11
#define __DHT11

#include <DHT11.h>

using namespace std;

class DHT{
  public : 

    void DHT11_init(int pin);

  protected :
    DHT11* dht;
};

#endif