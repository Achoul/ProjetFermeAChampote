#ifndef __DHT11
#define __DHT11

#include <DHT11.h>

using namespace std;

enum Error {ERR_DHT11_Humidity, ERR_DHT11_Temperature}; //enumeration des exceptions

class DHT{
  public : 

    void DHT11_init(int pin);

    virtual float GetData();

  protected :
    DHT11* dht;
};

#endif