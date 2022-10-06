#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
#include <windows.h>
#include "Pokemon.h"
#include "Geninja.h"
#include "Charizard.h"
using namespace std;
class Function{
public:

void titleScreen(){};
void story() {};
void PokemonCreation() {};
void chooseCharizard() {};
void gameOver() {};
void winnerGenninja() {};
void winnerCharizard() {};
void genninjaEncounter() {};
void lineBreak() {};
void showHealth(int health) {} ;
void showSpeed(int speed) {};
void showElement(int element){};
void showStats(int PH, int PS, int PE, int EH, int ES, int EE) {};
void welcomeScreen(void) {};
void battleCharizard(Charizard& C, Geninja& S) {};
};
#endif