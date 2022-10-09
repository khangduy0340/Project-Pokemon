#include <iostream>
#include "Charizard.h"
#include "Pokemon.h"
#include "Moves.h"
using namespace std;
Charizard::Charizard(string nickname) {
    Health = 10;
    Element = "Fire";
    Speed = 10;
    Name = nickname;
    M1.getMoveName() = "Bite";
  }

 