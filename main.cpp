#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>
#include <windows.h>
#include "Pokemon.h"
#include "Charizard.h"
#include "Geninja.h"
#include "Function.h"
#include "Moves.h"
using namespace std;
int main() {
  int playerChoice;
  Charizard Charizard(10, 5, 2);
  Geninja Geninja(8, 10, 1);
  Moves Move;
  Function a;
  a.welcomeScreen();
  cin >> playerChoice;
  a.lineBreak();
  if (playerChoice == 1) {
    while (Charizard.getHealth() > 0) {
      a.genninjaEncounter();
      a.battleCharizard(Charizard,Geninja,Move);
      break;
    }
  }
  return 0;
}
