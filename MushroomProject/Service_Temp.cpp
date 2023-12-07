#include "Service_Temp.h"

using namespace std;

float Temperature::GetData(){
    float t = dht->readTemperature();

    if(t == DHT11::ERROR_CHECKSUM || t == DHT11::ERROR_TIMEOUT){
      throw ERR_DHT11_Temperature;
    }

  return t;
}