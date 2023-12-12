#include <Arduino.h> //a mettre en premiere ligne dans tous les fichiers (redefinition du type byte)
#include "Champipote.h"


using namespace std;

Champipote::Champipote(uint8_t DHTPIN, uint8_t DHTTYPE, int PWRPIN1, int PWRPIN2, int BTNLEDPIN, int BTNPIN, int CAPTPIN, int SEUILEAU, int LCDROW, int LCDCOL ) : temp1(DHTPIN, DHTTYPE), pwr1(PWRPIN1), pwr2(PWRPIN2), btn1(BTNLEDPIN,BTNPIN), capt(CAPTPIN, SEUILEAU), lcd(LCDROW, LCDCOL){


}

void Champipote::InitChampipote(){
  Serial.begin(9600);
  this->t = 0;
  this->h = 0;
  this->OFF = true;
  this->NivEAU = false;

  //Serial.println("init finie");
  
}

void Champipote::BoucleChampipote(){
  if(OFF && !btn1.GetButtonState()){
    this->OFF = false;
    btn1.SetLedState(false);
    //Serial.println("ON");
    lcd.LCD_ShutDown(false);
    delay(1000);
  }
  else if(!OFF && !btn1.GetButtonState()){
    this->OFF = true;
    btn1.SetLedState(true);
    //Serial.println("OFF");
    lcd.LCD_ShutDown(true);
    delay(1000);
  }

  if(!OFF){
    //Mesure du niveau d'eau
    this->NivEAU = capt.IsMaxAtteint();
    if(this->NivEAU){
      //Serial.println("Max eau atteint");
      pwr2.SetOutputState(false); //éteint la pompe si niv max atteint
      pwr1.SetOutputState(true); //allume le ventillo
    }

    //mesure de la temperature
    try{
      this->t = temp1.GetTemp();
    }
    catch(TempHum::Error e){
      if(e == TempHum::NoDataT)
        this->t = 23;
    }

    //mesure de l'humidité
    try{
      this->h = temp1.GetHum();
    }
    catch(TempHum::Error e){
      if(e == TempHum::NoDataH)
        this->h = 23;
    }
  }

  if(!OFF && !NivEAU && (this->h<70)){ //si ON, pas de débordement d'eau dans le bac et humidité < 70%
    pwr2.SetOutputState(true); //si manque d'humidité, allume la pompe
    pwr1.SetOutputState(false); // et éteint le ventillo
    //Serial.println("pompe on, ventillo off");
  }
  else if(!OFF && !NivEAU && (this->h>90)){
    pwr2.SetOutputState(false); //inversement si le niveau d'humidité est supérieur à 90%
    pwr1.SetOutputState(true); //allume le ventillo
    //Serial.println("pompe off, ventillo on");
  }

  if(!OFF){
    //Serial.println("info pour debug :");
    //Serial.print("NivEau  ");
    //Serial.println(this->NivEAU);
    //Serial.print("t  ");
    //Serial.println(this->t);
    //Serial.print("h  ");
    //Serial.println(this->h);
    lcd.LCD_DisplayData(this->t, this->h, this->NivEAU);
  }


}