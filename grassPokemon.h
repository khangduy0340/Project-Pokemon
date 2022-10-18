#ifndef GRASSPOKEMON_H
#define GRASSPOKEMON_H
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"
using namespace std;
class grassPokemon: public Pokemon  {
public:
  // Get inheritaged by parent class - Pokemon in the aspects of health, speed, element etc
  // Generating four different moves
  // Call on the default constructor of grassPokemon
  Moves M1,M2,M3,M4;
  grassPokemon();
  };
#endif