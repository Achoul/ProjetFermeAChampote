#include "Projet_mushroom.h"

void mushroom::mushroom_init(){
  humidity.DHT11_init(D5); //pin D5
  lcd.LCD_init();
  Serial.begin(9600);
}

void mushroom::mushroom_loop(){
  try{
    //float h = humidity.GetData();

    delay(50);

    //float t = temperature.GetData();

    Serial.print("humidity : ");
    //Serial.println(h);
    Serial.println("temperature : ");
    //Serial.println(t);

    //lcd.LCD_Control(t, h, false);

    delay(2000);

  } catch (Error e){
    if(e == ERR_DHT11_Humidity)
      lcd.LCD_DisplayError("Humidity:No data");

    if(e == ERR_DHT11_Temperature)
      lcd.LCD_DisplayError("Temp:No data");
  }
  
}