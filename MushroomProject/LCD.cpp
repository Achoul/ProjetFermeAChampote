#include <Arduino.h>

#include <Wire.h>
#include "rgb_lcd.h"
#include <iostream>
#include <sstream>
#include <string>
#include "LCD.h"

using namespace std;

LCD::LCD(){}

void LCD::LCD_init(){
  lcd.begin(16, 2);
  lcd.display();
}

LCD::~LCD(){
  lcd.noDisplay();
}

void LCD::LCD_DisplayData(const String m){
  char * message = new char[m.length() + 1];
  strcpy(message, m.c_str());

  lcd.print(message);

  delete [] message;
}

void LCD::LCD_Control(const float temperature, const float humidity, const bool waterLevel){

  String m;

  lcd.clear();

  if(waterLevel){
    m = "Max level water";

    lcd.setRGB(150, 0, 0);

    LCD_DisplayData(m);
  }

  delay(1000);

  lcd.clear();
  lcd.setColorWhite();
  lcd.setCursor(0,0);

  m = "Temp : ";
  m += temperature;

  LCD_DisplayData(m);

  lcd.setCursor(0,1);

  m = "Humidity : ";
  m += humidity;

  LCD_DisplayData(m);

}