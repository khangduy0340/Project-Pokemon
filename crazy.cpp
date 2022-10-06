#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>
#include <windows.h>
using namespace std;
// Class Definitions
class Pokemon {
 protected:
  int Health;
  int Element;
  int Speed;
  string pElement;
 public:
  void takeDamage(int D) { Health = Health - D; }
  int getHealth(void) { return Health; }
  int getSpeed(void) { return Speed; }
  int getElement(void) { return Element; }
  
  // resets stats (not available)
  //void rest(int H, int S, int M, int P) {
  //  Health = H;
  //  Speed = S;
  //  Magic = M;
  //}
};
class Charizard : public Pokemon {
 public:
  Charizard(int H, int S, int E) {
    Health = H;
    Speed = S;
    Element = E;
    
  }
  int attack(void) {
    srand(time(NULL));
    int attack = 1;
    cout << "You attacked for " << attack << " damage " << endl;
    return attack;
  }
  int elementAttack(void) {
    srand(time(NULL));
    int elementAttack = 2;
    cout << "You casted a spell for " << elementAttack << " damage"
         << endl;
    return elementAttack;
  }
  int charizardAction(void) {
    int option = 0;
    cout << endl;
    cout << "*******************************************" << endl;
    cout << "*     Pick an action:  " << endl;
    cout << "* 1.  Normal attack   " << endl;
    cout << "* 2.  Special attack   " << endl;
    cout << "* 3.  Swap (Not available)    " << endl;
    cout << "Your choice: ";
    cin >> option;
    cout << endl;

    switch (option) {
      case 1:
        return attack();
        break;

      case 2:
        return elementAttack();
        break;

        // Not yet availabe! case 3:
        // return swap();
        // break;
      default:
        cout << "Wrong Input " << endl;
    }
    return 0;
  }
  
};

class Geninja : public Pokemon {
 public:
  Geninja(int H, int S, int E) {
    Health = H;
    Speed = S;
    Element = E;
  }

  int attack(void) {
    srand(time(NULL));
    int attack = 1;
    cout << "Genninja strikes you for" << attack << " damage" << endl;
    return attack;
  }
  int specialAttack(void) {
    srand(time(NULL));
    int specialDamage = 2;
    cout << "Genninja use special attack " << specialDamage << " damage "
         << endl;
    Health = Health - 5;
    return specialDamage;
  }

  int enemyAction(void) {
    srand(time(NULL));
    int action = 1 + (rand() % 3);
    if (action == 1) {
      return attack();
    }

    if (action == 2) {
      return specialAttack();
    }
    return 0;
  }
};

// Functions
void titleScreen(void) { cout << "Title screen!" << endl; }
void story(void) { cout << "You are walking around then a pokemon show up(Geninja)!" << endl; }
void PokemonCreation(void) {
  cout << "Choose a pokemon: (type in charizard)" << endl;
}
void chooseCharizard(void) { cout << "Choose Charizard" << endl; }
void gameOver(void) { cout << "game over" << endl; }
void winnerGenninja(void) { cout << "Winner Genninja!" << endl; }
void winnerCharizard(void) { cout << "Winner charizard" << endl; }
void genninjaEncounter(void) { cout << "Encounter Geninja!" << endl; }
void lineBreak(void) {
  cout << "*******************************************************************" << endl;
}

// This is the functions that show info about the player and monster aswell as
// inventory
void showHealth(int health) {
  int hearts = health;
  cout << "Health [";
  for (int i = 0; i < hearts; i++) {
    cout << "o  ";
  }
  cout << "]: " << health << endl;
}

void showSpeed(int speed) {
  cout << "Speed [";
  for (int i = 0; i < speed; i++) {
    cout << "o ";
  }
  cout << "]: " << speed << endl;
}

void showElement(int element) {
  cout << "Element: ";
}

void showStats(int PH, int PS, int PE, int EH, int ES, int EE) {
  cout << "Charizard                                                              Geninja" << endl;
  showHealth(PH);
  cout << "                                                                    "
          "   ";
  showHealth(EH);
  showSpeed(PS);
  cout << "                                                                    "
          "   ";
  showSpeed(ES);
  showElement(PE);
  cout << "                                                                    "
          "   ";
  showElement(EE);
}

// Contols intro sequence
void welcomeScreen(void) {
  titleScreen();
  Sleep(3);
  story();
  lineBreak();
  Sleep(3);
  PokemonCreation();
}

// Functions that control battle mechanics an loop that will only end if the
// player or the enemy dies
void battleCharizard(Charizard& C, Geninja& S) {
  while (C.getHealth() >= 0 && S.getHealth() >= 0) {
    showStats(C.getHealth(), C.getSpeed(), C.getElement(), S.getHealth(),
              S.getSpeed(), S.getElement());
    //chooseCharizard();
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
  }
}

int main() {
  string playerChoice;
  Charizard Charizard(10, 5, 2);
  Geninja Geninja(8, 10, 2);

  // Depending on what the player selects is the charater they will play
  welcomeScreen();
  cin >> playerChoice;
  lineBreak();

  if (playerChoice == "Charizard" || playerChoice == "charizard") {
    while (Charizard.getHealth() > 0) {
      genninjaEncounter();
      battleCharizard(Charizard, Geninja);
      cout << "Ok"<<endl;
      break;
    }
  }

  return 0;
}