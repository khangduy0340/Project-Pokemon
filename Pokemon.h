#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
using namespace std;

class Pokemon {
 protected:
  int Health;
  string Element;
  int Speed;
  string Name;

 public:
  Pokemon();
  Pokemon(int Health, int Element, int Speed,string Name);
  virtual void takeDamage(int D);
  virtual int getHealth();
  virtual int getSpeed();
  virtual string getElement();
  virtual string getName();
 
};
#endif