#ifndef MOVES_H
#define MOVES_H
#include <iostream>
using namespace std;

class Moves {
 protected:
  string moName;
  string Type;
  int Power;

 public:
  int enemyAction(int t);
  int normalMove(int t);
  int elementMove(int t);
  int actionBoard(int t);
};
#endif