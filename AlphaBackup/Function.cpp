#include <iostream>
#include <windows.h>
#include "Function.h"
#include "Pokemon.h"
#include "Geninja.h"
#include "Charizard.h"
using namespace std;

void Function::titleScreen() { cout << "Title screen!" << endl; }
void Function::story() { cout << "You are walking around then a pokemon show up(Geninja)!" << endl; }
void Function::PokemonCreation() {
  cout << "Choose a pokemon: (type in charizard)" << endl;
}
void Function::chooseCharizard() { cout << "Choose Charizard" << endl; }
void Function::gameOver() { cout << "game over" << endl; }
void Function::winnerGenninja() { cout << "Winner Genninja!" << endl; }
void Function::winnerCharizard() { cout << "Winner charizard" << endl; }
void Function::genninjaEncounter() { cout << "Encounter Geninja!" << endl; }
void Function::lineBreak() {
  cout << "*******************************************************************" << endl;
}

// This is the functions that show info about the player and monster aswell as
// inventory
void Function::showHealth(int health) {
  int hearts = health;
  cout << "Health [";
  for (int i = 0; i < hearts; i++) {
    cout << "o  ";
  }
  cout << "]: " << health << endl;
}

void Function::showSpeed(int speed) {
  cout << "Speed [";
  for (int i = 0; i < speed; i++) {
    cout << "o ";
  }
  cout << "]: " << speed << endl;
}

void Function::showElement(int element) {
  cout << "Element: ";
}

void Function::showStats(int PH, int PS, int PE, int EH, int ES, int EE) {
  cout << "Charizard                                                              Geninja" << endl;
  Function::showHealth(PH);
  cout << "                                                                    "
          "   ";
  Function::showHealth(EH);
  Function::showSpeed(PS);
  cout << "                                                                    "
          "   ";
  Function::showSpeed(ES);
  Function::showElement(PE);
  cout << "                                                                    "
          "   ";
  Function::showElement(EE);
}

void Function::welcomeScreen(void) {
  Function::titleScreen();
  Sleep(3);
  Function::story();
  Function:: lineBreak();
  Sleep(3);
  Function::PokemonCreation();
}

void Function::battleCharizard(Charizard& C, Geninja& S) {
  while (C.getHealth() >= 0 && S.getHealth() >= 0) {
    Function::showStats(C.getHealth(), C.getSpeed(), C.getElement(), S.getHealth(),
              S.getSpeed(), S.getElement());
    S.takeDamage(C.charizardAction());
    cout << endl;
    cout << "EMEMY MOVE: ";
    C.takeDamage(S.enemyAction());
    cout << endl;
    lineBreak();
  }
  if (C.getHealth() >= 0) {
    winnerCharizard();
  } else {
    winnerGenninja();
    gameOver();
  };
