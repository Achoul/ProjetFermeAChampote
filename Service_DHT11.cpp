
#include "Service_DHT11.h"


using namespace std;

#define DHTPIN D5     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11


DHT dht(DHTPIN, DHTTYPE); //macro pour l'init du dht11


DHT11 :: DHT11(){
  Serial.begin(9600); //communication série ON
  dht.begin(); //init du DHT11, voir bibliotèque DHT.h

  float test = dht.readHumidity();
  if (isnan(test)) {
    Serial.println(F("Y'a un problème avec le DHT11 man"));
  }
  else{
    Serial.println(F("DHT11 ON")); //pour voir ce qui ce passe
  }
  
}