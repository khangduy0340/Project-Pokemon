#ifndef CHARIZARD_H
#define CHARIZARD_H
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"
#include "firePokemon.h"
using namespace std;

class Charizard: public firePokemon  {
public:
  Charizard(string nickname);
  Moves M1,M2,M3,M4;
  };

string returnM1Name();
#endif
