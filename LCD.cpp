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
  lcd.noDisplay();
}

LCD::~LCD(){
  lcd.noDisplay();
}

void LCD::LCD_ShutDown(bool d){
  if(d) lcd.noDisplay();
  else lcd.display();
}

void LCD::LCD_DisplayData(float temperature, float humidity, bool waterLevel){

  String m;
  char* message;



  if(waterLevel){
    lcd.setCursor(0,0);
    m = "Max level water ";

    lcd.setRGB(150, 0, 0);

    message = new char[m.length() + 1]; 
    strcpy(message, m.c_str());

    lcd.print(message);
    lcd.setCursor(0,1);
    lcd.print("                ");
  }

  delay(1000);


  lcd.setColorWhite();

  lcd.setCursor(0,0);

  m = "Temp : ";
  m += temperature;
  m += "   ";

  message = new char[m.length() + 1]; 
  strcpy(message, m.c_str());

  lcd.print(message);

  lcd.setCursor(0,1);

  m = "Humidity : ";
  m += humidity;

  message = new char[m.length() + 1]; 
  strcpy(message, m.c_str());


  lcd.print(message);

  delay(1000);

  delete [] message;

}