#include "firePokemon.h"

#include <iostream>

#include "Moves.h"
using namespace std;
// create a class of firePokemon with different moves
firePokemon::firePokemon() : M1(), M2(), M3(), M4() {
  Health = 1;
  Element = 2;
  Speed = 7;
    
  M1.setMoveName("Bite");

  M2.setMoveName("Fire Spray");

  M3.setMoveName("Fire Burst");

  M4.setMoveName("Guard Up");
}