#ifndef MOVES_H
#define MOVES_H
#include <iostream>
#include "Pokemon.h"
using namespace std;

class Moves:public Pokemon {
 protected:
  string moName;
  string Type;
  int Power;

 public:
  Moves(string Mname,string Mtype,int Power);
  string getMoveName();
  string getType();
  int getMovePower();
};
#endif