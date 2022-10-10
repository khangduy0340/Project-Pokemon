#include <iostream>
#include "Charizard.h"
#include "Pokemon.h"
#include "firePokemon.h"
#include "Moves.h"
using namespace std;
Charizard::Charizard(string nickname):M1(),M2(),M3(),M4() {
    Health = 10;
    Element = 1;
    Speed = 10;
    Name = nickname;

    M1.setMoveName("Bite");
    M1.setMoveType("Normal");
    M1.setMovePower(1);

    M2.setMoveName("Fire Spray");
    M2.setMoveType("Element");
    M2.setMovePower(2);

    M3.setMoveName("Fire Burst");
    M3.setMoveType("Unique");
    M3.setMovePower(3);

    M4.setMoveName("Guard Up");
    M4.setMoveType("Defense");
    M4.setMovePower(4);
  }

 
 