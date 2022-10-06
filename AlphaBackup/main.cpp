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
#include "Pokemon.cpp"
using namespace std;
int main() {
  string playerChoice;
  Charizard Charizard(10, 5, 2);
  Geninja Geninja(8, 10, 2);
  Function a;
  a.welcomeScreen();
  cin >> playerChoice;
  a.lineBreak();
  if (playerChoice == "Charizard" || playerChoice == "charizard") {
    while (Charizard.getHealth() > 0) {
      a.genninjaEncounter();
      a.battleCharizard(Charizard, Geninja);
      cout << "Ok"<<endl;
      break;
    }
  }
  return 0;
}
