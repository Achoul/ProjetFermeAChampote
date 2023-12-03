#include "Service_Hum.h"

using namespace std;



Humidity :: Humidity() : DHT11(){
  humidity = 0;
  Serial.println(F("DHT11 humidity ON")); //pour voir ce qui ce passe
  

}

float Humidity :: GetData(){
  float h = dht.readHumidity();
  return h;
}