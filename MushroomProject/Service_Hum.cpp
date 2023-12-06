#include "Service_Hum.h"

using namespace std;

float Humidity::GetData(){
  float h = dht->readHumidity();

  if(isnan(h)){
    //throw ERR_DHT11_NoData;
  }

  return h;
}