#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
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
  void takeDamage(int D);
  int getHealth();
  int getSpeed();
  int getElement();
  string getName();
 
};
#endif