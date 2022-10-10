#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H
#include <iostream>
#include "Pokemon.h"
#include "Charizard.h"
using namespace std;
  int pokemonMove(Charizard& C,Pokemon& S,string Type,int Power);
  int actionBoard(int t,Charizard& C,Pokemon& S);
  int enemyAction();
#endif