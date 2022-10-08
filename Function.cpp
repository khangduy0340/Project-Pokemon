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
  cout << "Choose a pokemon: " << endl;
  cout << "1. Charizard" << endl;
  cout << "2. Geninja" << endl;
  cout << "Your choice: ";
}
void Function::chooseCharizard() { cout << "Choose Charizard" << endl; }
void Function::gameOver() { cout << "game over" << endl; }
void Function::winMessage(string P) { cout << P << " wins!" << endl; }
void Function::enemyEncounter(string P) { cout << "Encounter " << P << endl;
cout <<"*******************************************************************"<<endl; }
void Function::lineBreak() {
  cout << "*******************************************************************" << endl;
}

// This is the functions that show info about the player and monster aswell as
// inventory
void Function::showHealth(int health) {
  int hearts = health;
  cout << "Health [";
  for (int i = 0; i < hearts; i++) {
    cout << "o ";
  }
  cout << "]: " << health;
}

void Function::showSpeed(int speed) {
  cout << "Speed  [";
  for (int i = 0; i < speed; i++) {
    cout << "o ";
  }
  cout << "]: " << speed;
}

void Function::showElement(int element) 
{ if(element==1){
  cout << "Element: Water";}
  else if(element==2){
  cout << "Element: Fire";}
  }


void Function::showStats(int PH, int PS, int PE, int EH, int ES, int EE,string PN,string EN) {
  cout << "Your Pokemon: "<< PN << endl;                                                      
  Function::showHealth(PH);
  cout << endl;
  Function::showSpeed(PS);
  cout <<endl;
  Function::showElement(PE);
  cout << endl;
  cout << "*******************************************************************" << endl;
  cout << "Wild Pokemon: "<< EN << endl;
  Function::showHealth(EH);
  cout << endl;
  Function::showSpeed(ES);
  cout << endl;                          
  Function::showElement(EE);
  cout << endl;
  cout << "*******************************************************************";
  cout << endl;
}

void Function::welcomeScreen(void) {
  Function::titleScreen();
  Sleep(3);
  Function::story();
  Function:: lineBreak();
  Sleep(3);
  Function::PokemonCreation();
}

  void Function::battle(Pokemon& C, Pokemon& S, Moves& M) {
  int k =0;
  Function::enemyEncounter(S.getName());
  while (C.getHealth() >= 0 && S.getHealth() >= 0) {
    Function::showStats(C.getHealth(), C.getSpeed(), C.getElement(), S.getHealth(),
    S.getSpeed(), S.getElement(),C.getName(),S.getName());
    S.takeDamage(M.actionBoard(1));
    cout << endl;
    cout << "EMEMY MOVE: ";
    C.takeDamage(M.enemyAction(2));
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