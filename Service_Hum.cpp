#include "Service_Hum.h"

using namespace std;



Humidity :: Humidity(int DHTPIN, int DHTTYPE) : DHT11(DHTPIN, DHTTYPE){
  humidity = 0;
  Serial.println(F("DHT11 humidity ON")); //pour voir ce qui ce passe
  

}

float Humidity :: GetData(){
  float h = dht.readHumidity();
  if(isnan(h)){
    throw Humidity :: NoData();
  }
  return h;
}