#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H
#include <iostream>
#include "Pokemon.h"
#include "firePokemon.h"
#include "grassPokemon.h"
#include "stdInclude.h"
#include "waterPokemon.h"
using namespace std;
// Initialize the battleField that take in trainerName 
// Assit in making the display system ( message about status of current pokemon )
void BattleField(string trainerName);

// A function that take your pokemon and the enemy pokemon, they typs and powers
// Calculate the damage result based on element counter system 
int pokemonMove(Pokemon& C, Pokemon& S, string Type, int Power);

// Actionboard is designed for different element class, Fire, Water and Grass
// Each one will print out the option
// Call pokemonMove function to calculate damage
// Return current health of battling pokemon
int actionBoardF(int shot, firePokemon& C, Pokemon& S, int option,
                 string trainName);
int actionBoardW(int shot, waterPokemon& C, Pokemon& S, int option,
                 string trainName);
int actionBoardG(int shot, grassPokemon& C, Pokemon& S, int option,
                 string trainName);

// Enemy Moves;
int enemyAction();

#endif