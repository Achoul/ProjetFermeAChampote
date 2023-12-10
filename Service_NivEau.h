#ifndef __NivEau
#define __NivEau

#include <Arduino.h>

using namespace std;

class NivEau{
  private:
  bool MaxAtteint; //correspond à si oui ou non le niveau d'eau est atteint, c'est
  int NivEauPIN;
  int threshold; //pour tuner le capteur, voir si ca marche ou pas en contact de l'eau.
  public:
  NivEau(int PIN, int seuil);
  bool IsMaxAtteint();

};

#endif
