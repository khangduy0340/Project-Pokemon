#ifndef FUNCTION_H
#define FUNCTION_H
#include <windows.h>

#include <iostream>

#include "Pokemon.h"
#include "firePokemon.h"
#include "grassPokemon.h"
#include "waterPokemon.h"

using namespace std;
// These function assist the display system on Terminal 
// Some of the functions are linked to the sfml system
void titleScreen();
void story();
void PokemonCreation();
void chooseCharizard();
void gameOver();
void winMessage(string P);
void enemyEncounter(string P);
void lineBreak();

// Display the stat of current pokemon
// Display their status after resolving battle
void showHealth(int health);
void showSpeed(int speed);
void showElement(int element);
void showStats(int PH, int PS, int PE, int EH, int ES, int EE, string PN,
               string EN);
void welcomeScreen();

// Return damage deal and take
// These functions are called early after pokemon selecting state
// Each will call different actionBoard functions accordingly to the element
// Result in the final health of the Pokemon
int battleF(int shot, int round, firePokemon& C, Pokemon& S, int option,
             string trainerName,int hea);
int battleW(int shot, int round, waterPokemon& C, Pokemon& S, int option,
             string trainerName,int hea);
int battleG(int shot, int round, grassPokemon& C, Pokemon& S, int option,
             string trainerName,int hea);
#endif