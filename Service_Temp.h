#ifndef __Service_Temp
#define __Service_Temp

#include <iostream>
#include <stdio.h>

using namespace std;

class Service_Temp : public DHT11{
  private:
  int temperature;
  public:
  virtual int GetData();

};

#endif