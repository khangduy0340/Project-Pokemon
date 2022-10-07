#ifndef CHARIZARD_H
#define CHARIZARD_H
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"
using namespace std;

class Charizard : public Pokemon,public Moves {
public:
  Charizard(int H, int S, int E);
};
#endif