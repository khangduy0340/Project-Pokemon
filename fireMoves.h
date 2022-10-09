#ifndef FIREMOVES_H
#define FIREMOVES_H
#include <iostream>
#include "Moves.h"
using namespace std;

class fireMoves: public Moves {

public:
string fireAttack;
int fireAttack; 
fireMoves(string Mname,string Mtype,int Power);
};
#endif