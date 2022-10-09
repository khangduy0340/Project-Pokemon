#include <iostream>
#include "Charizard.h"
#include "Pokemon.h"
using namespace std;
Moves::Moves(string Mname,string Mtype,int Mpower){
    this->moName = Mname;
    this->Type = Mtype;
    this->Power = Mpower; 
 }
Moves M1("Tail Swip","Normal",4);
Charizard::Charizard(int H, int S, int E,string N) {
    Health = H;
    Speed = S;
    Element = E;
    Name = N;
  }
  
 