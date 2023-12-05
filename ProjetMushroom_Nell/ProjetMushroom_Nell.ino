#include <iostream>
#include <sstream>
#include "LCD.h"

using namespace std;

LCD lcd(16,2);

void setup() 
{

}

void loop() 
{
    lcd.LCD_DisplayData(52.3,78.2,true);

    delay(3000);
}