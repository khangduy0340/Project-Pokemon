#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include "Moves.h"
using namespace std;

class Pokemon {
protected:
  int Health;
  int Element;
  int Speed;
  string Name;
public:
  Pokemon();
  Pokemon(int Health, int Element, int Speed,string Name);
  Moves M1,M2,M3,M4;
  virtual void takeDamage(int D);
  virtual int getHealth();
  virtual int getSpeed();
  virtual int getElement();
  virtual string getName();
  
};
#endif