
#include "Service_DHT11.h"


using namespace std;

// DHTPIN D5     // Digital pin connected to the DHT sensor
// DHTTYPE DHT11   // DHT 11




void DHT::DHT11_init(int pin){
  dht = new DHT11(pin);
}