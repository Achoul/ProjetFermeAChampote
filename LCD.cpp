#include <Arduino.h>

#include <Wire.h>
#include "rgb_lcd.h"
#include <iostream>
#include <sstream>
#include <string>
#include "LCD.h"

using namespace std;

LCD::LCD(int columns, int rows){
  lcd.begin(columns, rows);
  lcd.display();
}

LCD::~LCD(){
  lcd.noDisplay();
}

void LCD::LCD_DisplayData(float temperature, float humidity, bool waterLevel){

  String m;
  char* message;

  lcd.clear();

  if(waterLevel){
    m = "Max level water";

    lcd.setRGB(150, 0, 0);

    message = new char[m.length() + 1]; 
    strcpy(message, m.c_str());

    lcd.print(message);
  }

  delay(1000);

  lcd.clear();

  lcd.setColorWhite();

  lcd.setCursor(0,0);

  m = "Temp : ";
  m += temperature;

  message = new char[m.length() + 1]; 
  strcpy(message, m.c_str());

  lcd.print(message);

  lcd.setCursor(0,1);

  m = "Humidity : ";
  m += humidity;

  message = new char[m.length() + 1]; 
  strcpy(message, m.c_str());


  lcd.print(message);

  delete [] message;

}