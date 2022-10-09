#include <iostream>
#include "Charizard.h"
#include "Pokemon.h"
#include "Moves.h"
using namespace std;
Charizard::Charizard(string nickname) {
    Health = 10;
    Element = 1;
    Speed = 10;
    Name = nickname;
    M1->getMoveName() = "Bite";
    M1->getType() = "Normal";
    M1->getMovePower() == 1;

    M2->getMoveName() = "Fire Breath";
    M2->getType() = "Element";
    M2->getMovePower() == 2;

    M3->getMoveName() = "Blast Burn";
    M3->getType() = "Unique";
    M3->getMovePower() == 3;

    M3->getMoveName() = "Guard";
    M3->getType() = "Defense";
    M3->getMovePower() == 0;
  }

 