

#include "Service_DHT11.h"
#include "Service_Hum.h"
#include "Service_Temp.h"
#include "Blue_Button.h"
// Led_Button D8
// Pin_Button D4
bool test = true;
Blue_Button butt1(D8,D4);
void setup() {
  // put your setup code here, to run once:
   

}

void loop() {
  // put your main code here, to run repeatedly:
  test = butt1.GetButtonState();
}
