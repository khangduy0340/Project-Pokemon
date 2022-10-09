#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
#include <windows.h>
#include "Pokemon.h"
#include "Geninja.h"
#include "Charizard.h"
#include "Moves.h"
using namespace std;
void titleScreen();
void story();
void PokemonCreation();
void chooseCharizard();
void gameOver();
void winMessage(string P);
void enemyEncounter(string P);
void lineBreak();
void showHealth(int health);
void showSpeed(int speed);
void showElement(int element);
void showStats(int PH, int PS, int PE, int EH, int ES, int EE,string PN,string EN);
void welcomeScreen(void); 
void battle(Pokemon& C, Pokemon& S);
int actionBoard(int t);

#endif