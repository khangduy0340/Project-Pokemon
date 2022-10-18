#ifndef MOVES_H
#define MOVES_H
#include <iostream>
using namespace std;
class Moves {
 private:
 // A Move is made of name, type and power
 // Each type produce different damage according to its mechanic
  string moName;
  string Type;
  int Power;

 public:
 // Calling the default constructor for move
  Moves();


 // Setter and Getter functions
  void setMoveName(string mName);
  void setMoveType(string mType);
  void setPower(int power);
  string getMoveName();
  string getType();
  int getPower();
  
};
#endif