#ifndef CHARIZARD_H
#define CHARIZARD_H
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"
using namespace std;

class Charizard: public Pokemon  {
protected:
Moves M1,M2,M3,M4;
public:
  Charizard(string nickname);
  Moves getM1(){return M1;};
  };
#endif
