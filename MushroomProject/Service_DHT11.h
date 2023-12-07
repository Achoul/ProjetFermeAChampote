#ifndef __DHT11
#define __DHT11

#include "DHT.h"

using namespace std;

#define DHTTYPE 11 //DHT11

enum Error {ERR_DHT11_Humidity, ERR_DHT11_Temperature}; //enumeration des exceptions

class DHT11{
  public : 

    void DHT11_init(int pin);

    virtual float GetData();

  protected :
    DHT* dht;
};

#endif