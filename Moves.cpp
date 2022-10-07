 #include <iostream>
 #include <ctime>
 #include "Moves.h"

 int Moves::normalMove() {
    int attack = 1;
    cout << "You attacked for " << attack << " damage " << endl;
    return attack;
  }
  int Moves::elementMove() {
  
    int elementAttack = 2;
    cout << "You used a special attack that deal" << elementAttack << " damage" << endl;
    return elementAttack;
  }
  int Moves::actionBoard() {
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
        return Moves::normalMove();
        break;

      case 2:
        return Moves::elementMove();
        break;
      default:
        cout << "Wrong Input " << endl;
    }
    return 0;
  }

