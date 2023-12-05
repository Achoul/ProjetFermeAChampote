#ifndef LCD_H
#define LCD_H

#include <Wire.h>
#include "rgb_lcd.h"

class LCD{
    public:

        LCD(const int columns, const int rows);

        ~LCD();

        void LCD_DisplayData(float temperature, float humidity, bool waterLevel);

    private:
      rgb_lcd lcd;

};

#endif