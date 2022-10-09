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
#include "PokemonMenu.h"
using namespace std;
int main() {
 Charizard Charizard("2");
 cout << Charizard.getName()<< endl;
 cout << Charizard.getM1()->getMoveName();
 //PokemonMenu();
 return 0;
}
