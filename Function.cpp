#include <iostream>
#include <windows.h>
#include "Function.h"
#include "Pokemon.h"
#include "Geninja.h"
#include "Charizard.h"
#include "BattleSystem.h"
using namespace std;

void titleScreen() { cout << "Title screen!" << endl; }
void story() { cout << "You are walking around then a pokemon show up(Geninja)!" << endl; }
void PokemonCreation() {
  cout << "Choose a pokemon: " << endl;
  cout << "1. Charizard" << endl;
  cout << "2. Geninja" << endl;
  cout << "Your choice: ";
}
void gameOver() { cout << "game over" << endl; }
void winMessage(string P) { cout << P << " wins!" << endl; }
void enemyEncounter(string P) { cout << "Encounter " << P << endl;
cout <<"*******************************************************************"<<endl; }
void lineBreak() {
  cout << "*******************************************************************" << endl;
}

// This is the functions that show info about the player and monster aswell as
// inventory
void showHealth(int health) {
  int hearts = health;
  cout << "Health [";
  for (int i = 0; i < hearts; i++) {
    cout << "o ";
  }
  cout << "]: " << health;
}

void showSpeed(int speed) {
  cout << "Speed  [";
  for (int i = 0; i < speed; i++) {
    cout << "o ";
  }
  cout << "]: " << speed;
}

void showElement(int element) 
{ if(element==1){
  cout << "Element: Water";}
  else if(element==2){
  cout << "Element: Fire";}
  }


void showStats(int PH, int PS, int PE, int EH, int ES, int EE,string PN,string EN) {
  cout << "Your Pokemon: "<< PN << endl;                                                      
  showHealth(PH);
  cout << endl;
  showSpeed(PS);
  cout <<endl;
  showElement(PE);
  cout << endl;
  cout << "*******************************************************************" << endl;
  cout << "Wild Pokemon: "<< EN << endl;
  showHealth(EH);
  cout << endl;
  showSpeed(ES);
  cout << endl;                          
  showElement(EE);
  cout << endl;
  cout << "*******************************************************************";
  cout << endl;
}

void welcomeScreen(void) {
  titleScreen();
  Sleep(3);
  story();
  lineBreak();
  Sleep(3);
  PokemonCreation();
}

  void battle(Charizard& C, Pokemon& S) {
  int k =0;
  enemyEncounter(S.getName());
  while (C.getHealth() >= 0 && S.getHealth() >= 0) {
    showStats(C.getHealth(), C.getSpeed(), C.getElement(), S.getHealth(),
    S.getSpeed(), S.getElement(),C.getName(),S.getName());
    S.takeDamage(actionBoard(1,C,S));
    cout << endl;
    cout << "EMEMY MOVE: ";
    C.takeDamage(enemyAction());
    cout << endl;
    k++;
    lineBreak();
    cout << "END ROUND: " << k <<endl;
    lineBreak();
  }
  if (C.getHealth() >= 0) {
    winMessage(C.getName());
  } else {
    winMessage(S.getName());
    gameOver();
  };
}
