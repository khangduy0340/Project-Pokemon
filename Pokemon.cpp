#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>
#include <windows.h>
#include "Pokemon.h"
#include "Moves.h"
#include "Function.h"
Pokemon::Pokemon():M1(),M2(),M3(),M4(){
    Health = 0;
    Element = 0;
    Speed = 0;    
    M1.setMoveName("1");
    M2.setMoveName("2");
    M3.setMoveName("3");
    M4.setMoveName("4");
}
Pokemon::Pokemon(int Health1,int Element1,int Speed1,string Name1){
    this->Health = Health1;
    this->Element = Element1;
    this->Speed = Speed1;
    this->Name = Name1;
} 
void Pokemon::takeDamage(int D) { Health = Health - D; }
int Pokemon::getHealth(void) { return Health; }
int Pokemon::getSpeed(void) { return Speed; }
int Pokemon::getElement(void) { return Element; }
string Pokemon::getName(){return Name;}







