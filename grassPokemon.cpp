#include "grassPokemon.h"

#include <iostream>

#include "Moves.h"
using namespace std;
grassPokemon::grassPokemon() : M1(), M2(), M3(), M4() {
  M1.setMoveName("Charge");

  M2.setMoveName("Bullet Seed");

  M3.setMoveName("Leaf Storm");

  M4.setMoveName("Guard Up");
}