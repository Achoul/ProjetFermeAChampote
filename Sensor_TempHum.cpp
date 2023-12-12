#include "Sensor_TempHum.h"


using namespace std;


TempHum::TempHum(uint8_t DHTPIN, uint8_t DHTTYPE) : dht(DHTPIN, DHTTYPE){
  this->PIN = DHTPIN;
  this->PIN = DHTTYPE;
}

float TempHum::GetHum(){
  float h = dht.readHumidity(); 
  if (!isnan(h)){
    return h;
  }
  throw NoDataH;
}

float TempHum::GetTemp(){
  float h = dht.readTemperature(); 
  if (!isnan(h) || h <= 2){
    return h;
  }
  throw NoDataT;
}
