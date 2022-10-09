#include "PokemonMenu.h"
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include "Charizard.h"
#include "Function.h"
#include "Geninja.h"
#include "Moves.h"
#include "Pokemon.h"
using namespace std;
void PokemonMenu() {
  int playerChoice;
  Charizard Charizard("Charizard");
  Geninja Geninja(8, 10, 1,"Geninja");
  cout << "Charizard has first skill: " << Charizard.getM1()->getMoveName();
  welcomeScreen();
  cin >> playerChoice;
  lineBreak();
  if (playerChoice == 1) {
    while (Charizard.getHealth() > 0 && Geninja.getHealth() > 0) {
      battle(Charizard, Geninja);
      break;
    }
  } else if (playerChoice == 2) {
    cout << "c2" << endl;
    while (Geninja.getHealth() > 0 && Geninja.getHealth() > 0) {
      battle(Geninja, Geninja);
      break;
    }
  } 
}
