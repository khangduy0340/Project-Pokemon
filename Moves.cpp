 #include <iostream>
 #include <ctime>
 #include "Moves.h"
 using namespace std;

Moves::Moves(){
    moName = "None";
    Type = "Normal";
    Power = 10;
};
 string Moves::getMoveName(){return moName;};
 string Moves::getType(){return Type;}; 
 int Moves::getMovePower(){return Power;};