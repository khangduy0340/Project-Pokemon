#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include "Moves.h"
using namespace std;

class Pokemon {
protected:
  // Basic attributes of pokemon
  int Health;
  int Element;
  int Speed;
  int Armor;
  string Name;
public:
  // A Pokemon is made of 4 moves and 5 attributes
  // Function for a pokemon is made virtual so it can be overide by other function
  Pokemon();
  Pokemon(int Health, int Element, int Speed,string Name,int Armor);
  Moves M1,M2,M3,M4;

  // Virtual Getter and Setter for pokemon
  virtual void takeDamage(int D);
  virtual int getHealth();
  virtual int getSpeed();
  virtual int getElement();
  virtual int getArmor();
  virtual void setArmor(int Armor);
  virtual string getName();

};
#endif