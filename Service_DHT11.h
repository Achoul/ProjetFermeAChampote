#ifndef __DHT11
#define __DHT11

#include <iostream>
#include <stdio.h>

using namespace std;

class DHT11{
  public:
  virtual int valeur;
  private:
  virtual int GetData();

};

#endif