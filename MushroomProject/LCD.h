#ifndef LCD_H
#define LCD_H

#include <Wire.h>
#include "rgb_lcd.h"

class LCD{
    public:
        LCD();
        
        void LCD_init();

        ~LCD();

        void LCD_DisplayData(const String message);

        void LCD_Control(const float temperature, const float humidity, const bool waterLevel);

    private:
      rgb_lcd lcd;

};

#endif