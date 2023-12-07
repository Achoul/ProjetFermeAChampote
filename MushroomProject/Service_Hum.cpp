#include "Service_Hum.h"

using namespace std;

float Humidity::GetData(){
  float h = dht->readHumidity();

  if(h == DHT11::ERROR_CHECKSUM || h == DHT11::ERROR_TIMEOUT){
    throw ERR_DHT11_Humidity;
  }

  return h;
}