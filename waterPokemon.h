#ifndef WATERPOKEMON_H
#define WATERPOKEMON_H
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"

using namespace std;
// Get inheritaged by parent class - Pokemon in the aspects of health, speed, element etc
// Generating four different moves
// Call on the default constructor of waterPokemon
class waterPokemon: public Pokemon  {
public:
  Moves M1,M2,M3,M4;
  waterPokemon();
  };
#endif