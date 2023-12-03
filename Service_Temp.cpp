#include "Service_Temp.h"

using namespace std;



Temperature :: Temperature() : DHT11(){
  temperature = 0;
  Serial.println(F("DHT11 temperature ON")); //pour voir ce qui ce passe
  

}

float Temperature :: GetData(){
    float t = dht.readTemperature();
  return t;
}