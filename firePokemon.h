#ifndef FIREPOKEMON_H
#define FIREPOKEMON_H
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"

using namespace std;

class firePokemon: public Pokemon  {
public:
  // Get inheritaged by parent class - Pokemon in the aspects of health, speed, element etc
  // Generating four different moves
  // Call on the default constructor of firePokemon
  Moves M1,M2,M3,M4;
  firePokemon();
  };
#endif
