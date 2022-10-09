#ifndef GENINJA_H
#define GENINJA_H
#include <ctime>
#include <iostream>
#include "Moves.h"
#include "Pokemon.h"
using namespace std;

class Geninja : public Pokemon {
 public:
  Geninja(int H, int S, int E,string N);
};
#endif