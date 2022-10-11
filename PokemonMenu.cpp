#include "PokemonMenu.h"
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include "Charizard.h"
#include "Function.h"
#include "Moves.h"
#include "Pokemon.h"
using namespace std;
void PokemonMenu() {
  int playerChoice;
  Charizard Charizard("Charizard");
  Pokemon Geninja(8, 1, 5,"Geninja",0);
  
  welcomeScreen();
  cin >> playerChoice;
  // Pokemon choice Menu which will call different battle function
  lineBreak();
  if (playerChoice == 1) {
    //while (Charizard.getHealth() > 0 && Geninja.getHealth() > 0) {
      battleF(Charizard, Geninja);
      //break;
    
  } else if (playerChoice == 2) {
    while (Geninja.getHealth() > 0 && Geninja.getHealth() > 0) {
      battleW(Geninja, Geninja);
      break;
    }
  } 
}

