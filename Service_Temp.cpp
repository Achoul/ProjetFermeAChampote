#include "Service_Temp.h"

using namespace std;



Temperature :: Temperature(int DHTPIN, int DHTTYPE) : DHT11(DHTPIN, DHTTYPE){
  temperature = 0;
  Serial.println(F("DHT11 temperature ON")); //pour voir ce qui ce passe
  

}

float Temperature :: GetData(){
    float t = dht.readTemperature();
    if(isnan(t)){
    throw Temperature :: NoData();
  }
  return t;
}