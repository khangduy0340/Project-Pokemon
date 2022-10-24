#ifndef HUNTER_H

#define HUNTER_H

// Include the required header files.

#include <string>

#include "animal.h"

using namespace std;

// Define the class.

class hunter : public animal

{
 private:
  // Declare the member variables.

  int kills;

  static int nextID;

 public:
  // Declare the constructor.

  hunter(string n, int v);

  // Declare the member functions.

  string get_name();

  int get_kill();

  void set_kill(int k);
};

#endif