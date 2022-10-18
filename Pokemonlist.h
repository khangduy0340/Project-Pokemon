#ifndef POKEMONLIST_H
#define POKEMONLIST_H
#include <ctime>
#include <iostream>
#include "grassPokemon.h"
#include "firePokemon.h"
#include "waterPokemon.h"
using namespace std;

// Create children class that are inheritaged directly from bigger class 
// Pokemon -> firePokemon -> Charizard
// Each pokemon is inheritaged special moves from their element
class Charizard: public firePokemon  {
public:
  Charizard();
  void setName(string nickname);
  };


class Blastoise: public waterPokemon  {
public:
  Blastoise();
  void setName(string nickname);
  };


class Bulbasaur: public grassPokemon  {
public:
  Bulbasaur();
  void setName(string nickname);
  };
#endif