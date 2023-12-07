#ifndef LCD_H
#define LCD_H

#include <Arduino.h>
#include <Wire.h>
#include "rgb_lcd.h"

class LCD{
    public:
        
        void LCD_init();

        void LCD_DisplayData(const String message);

        void LCD_Control(const float temperature, const float humidity, const bool waterLevel);

        void LCD_DisplayError(const String message);

    private:
      rgb_lcd lcd;

};

#endif