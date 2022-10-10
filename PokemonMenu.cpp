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
  Pokemon Geninja(8, 10, 1,"Geninja");
  //Moves M1;
  //M1.setMoveName("Bite");
  cout << "Charizard has first skill: "  << endl;
  welcomeScreen();
  cin >> playerChoice;
  lineBreak();
  if (playerChoice == 1) {
    while (Charizard.getHealth() > 0 && Geninja.getHealth() > 0) {
      battle(Charizard, Geninja);
      break;
    }
  //} else if (playerChoice == 2) {
    //while (Geninja.getHealth() > 0 && Geninja.getHealth() > 0) {
      //battle(Geninja, Geninja);
      //break;
    //}
  //} 
}
