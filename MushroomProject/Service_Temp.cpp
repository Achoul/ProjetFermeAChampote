#include "Service_Temp.h"

using namespace std;

Temperature::Temperature(){}

float Temperature::GetData(){
    float t = dht->readTemperature();

    if(isnan(t)){
      throw ERR_DHT11_Temperature;
    }

  return t;
}