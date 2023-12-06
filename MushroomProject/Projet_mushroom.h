#ifndef PROJET_MUSHROOM_H
#define PROJET_MUSHROOM_H

#include "LCD.h"

enum Error {ERR_DHT11_NoData}; //enumeration des exceptions

class mushroom {
  public :

    void mushroom_init();
    void mushroom_loop();

  private :

    LCD lcd;
};

#endif