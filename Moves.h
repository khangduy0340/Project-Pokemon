#ifndef MOVES_H
#define MOVES_H
#include <iostream>
using namespace std;

class Moves {
 private:
  string moName;
  string Type;
  int Power;
 public:
  Moves();
  string getMoveName();
  string getType();
  int getMovePower();
};
#endif