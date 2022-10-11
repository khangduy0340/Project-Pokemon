#include "waterPokemon.h"

#include <iostream>

#include "Moves.h"
using namespace std;
waterPokemon::waterPokemon() : M1(), M2(), M3(), M4() {
  M1.setMoveName("Charge");

  M2.setMoveName("Aqua Jet");

  M3.setMoveName("Hydro Pump");

  M4.setMoveName("Guard Up");
}