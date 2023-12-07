#include "Projet_mushroom.h"

void mushroom::mushroom_init(){
  humidity.DHT11_init(17); //pin 17 (D4)
  lcd.LCD_init();
}

void mushroom::mushroom_loop(){
  try{
    float h = humidity.GetData();

    delay(50);

    float t = temperature.GetData();

    lcd.LCD_Control(t, h, false);

    delay(2000);

  } catch (Error e){
    if(e == ERR_DHT11_Humidity)
      lcd.LCD_DisplayError("Humidity:No data");

    if(e == ERR_DHT11_Temperature)
      lcd.LCD_DisplayError("Temp:No data");
  }
  
}