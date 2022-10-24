// Include the required header files.

#include "hunter.h"

// Define the static member variable.

int hunter::nextID = 1000;

// Define the constructor.

hunter::hunter(string n, int v) : animal(n, v) {
  kills = 0;

  nextID++;

  animalID = nextID;
}

// Define the member functions.

int hunter::get_kill() { return kills; }

void hunter::set_kill(int k) { kills = k; }

string hunter::get_name() { return "Hunter " + name; }