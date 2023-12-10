#include "Champipote.h"

#define pin_dht D3
#define type_dht DHT11
#define pin_led D8
#define pin_btn D4
#define pin_ventilo D7
#define pin_pompe D5
#define pin_capt_eau A0
#define seuil_EAU 260
#define nb_Column 16
#define nb_row 2


Champipote champ(pin_dht, type_dht, pin_ventilo, pin_pompe, pin_led, pin_btn, pin_capt_eau, seuil_EAU, nb_Column, nb_row);

void setup() {
  // put your setup code here, to run once:
  champ.InitChampipote();
}

void loop() {
  champ.BoucleChampipote();
 
}
  
