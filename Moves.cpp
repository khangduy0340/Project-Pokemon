 #include <iostream>
 #include <ctime>
 #include "Moves.h"
 using namespace std;

Moves::Moves(string Mname,string Mtype,int Mpower){
    this->moName = Mname;
    this->Type = Mtype;
    this->Power = Mpower; 
 }
 string Moves::getMoveName(){return moName;};
 string Moves::getType(){return Type;}; 
 int Moves::getMovePower(){return Power;};