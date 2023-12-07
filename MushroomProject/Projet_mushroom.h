#ifndef PROJET_MUSHROOM_H
#define PROJET_MUSHROOM_H

#include "Service_DHT11.h"
#include "Service_Temp.h"
#include "Service_Hum.h"
#include "LCD.h"


class mushroom {
  public :

    void mushroom_init();
    void mushroom_loop();

  private :
    Temperature temperature;
    Humidity humidity;
    LCD lcd;
};

#endif