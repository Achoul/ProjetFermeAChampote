#include "Service_Hum.h"

using namespace std;

Humidity::Humidity(){}

float Humidity::GetData(){
  float h = dht->readHumidity();

  if(isnan(h)){
    throw ERR_DHT11_Humidity;
  }

  return h;
}