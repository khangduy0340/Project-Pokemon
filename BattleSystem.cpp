 #include <iostream>
 #include <ctime>
 #include "BattleSystem.h"
int normalMove(int t) {
    int attack = 1;
    if(t==1){
    cout << "You attacked for " << attack << " damage " << endl;
    return attack;}
    else if(t==2){
    cout << "Enemy strikes for " << attack << " damage " << endl;
    return attack;}
    return 0;
  }
  int elementMove(int t) {
  
    int elementAttack = 2;
    cout << "You used a special attack that deal" << elementAttack << " damage" << endl;
    return elementAttack;
  }
  int actionBoard(int t) {
    int option = 0;
    cout << endl;
    cout << "*******************************************************************" << endl;
    cout << "*     Pick an action:  " << endl;
    cout << "* 1.  Normal attack   " << endl;
    cout << "* 2.  Special attack   " << endl;
    cout << "* 3.  Swap (Not available)    " << endl;
    cout << "Your choice: ";
    cin >> option;
    cout << endl;
    switch (option) {
      case 1:
        return normalMove(t);
        break;

      case 2:
        return normalMove(t);
        break;
      default:
        cout << "Wrong Input " << endl;
    }
    return 0;
  }

  int enemyAction(int t) {
    int action = 1;
    if (action == 1) {
      return normalMove(t);
    }

    if (action == 2) {
      return normalMove(t);
    }
    return 0;
  };
