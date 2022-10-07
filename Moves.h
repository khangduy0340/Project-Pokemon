#ifndef MOVES_H
#define MOVES_H
#include <iostream>
using namespace std;

class Moves {
 protected:
  string Name;
  string Type;
  int Power;

 public:
  int normalMove();
  int elementMove();
  int actionBoard();
};
#endif