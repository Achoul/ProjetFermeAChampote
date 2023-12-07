#include "Service_DHT11.h"

using namespace std;

// DHTPIN D5     // Digital pin connected to the DHT sensor
// DHTTYPE DHT11   // DHT 1

void DHT11::DHT11_init(int pin){
  dht = new DHT(pin, DHTTYPE);
  dht->begin();
}