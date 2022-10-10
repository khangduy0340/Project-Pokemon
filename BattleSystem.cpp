 #include <iostream>
 #include <ctime>
 #include "BattleSystem.h"
 #include "Pokemon.h"
 #include "Moves.h"
 #include "Charizard.h"
 #include <string.h>


  
  
  int actionBoard(int t,Charizard& C,Pokemon& S) {
    int option = 0; 
    cout << endl;
    cout << "*******************************************************************" << endl;
    cout << "* Pick a Move:  " << endl;
    cout << "* 1. " << C.M1.getMoveName() << endl;
    cout << "* 2. " << C.M2.getMoveName() << endl;
    cout << "* 3. " << C.M3.getMoveName() << endl;
    cout << "* 4. " << C.M4.getMoveName() << endl;
    cout << "Your choice: ";
    cin >> option;
    cout << endl;
    switch (option) {
      case 1:
        return pokemonMove(C,S,C.M1.getType(),C.M1.getPower());
        break;
      case 2:
        return pokemonMove(C,S,C.M2.getType(),C.M2.getPower());
        break;
      case 3:
        return pokemonMove(C,S,C.M3.getType(),C.M3.getPower());
        break;
      case 4:
        return pokemonMove(C,S,C.M4.getType(),C.M4.getPower());
        break;
      default:
        cout << "Wrong Input " << endl;
    }
    return 0;
  }

  int pokemonMove(Charizard& C,Pokemon& S,string Type,int Power){
    int damage = 1;
    if(Type.compare("Normal")==0){return 1;};
    if(Type.compare("Defense")==0){return 10;};

    if(Type.compare("Unique")==0){return C.M3.getPower();};
 
    if(C.getElement()==1){
      if(S.getElement()==2){return S.M2.getPower() - damage;};
      if(S.getElement()==3){return S.M2.getPower() + damage;};
    }
    if(C.getElement()==2){
      if(S.getElement()==3){return S.M2.getPower() - damage;};
      if(S.getElement()==1){return S.M2.getPower() + damage;};
    }
    if(C.getElement()==3){
      if(S.getElement()==1){return S.M2.getPower() - damage;};
      if(S.getElement()==2){return S.M2.getPower() + damage;};
    }
  return 0;
  }


 int enemyAction() {
    return 1;
  };
