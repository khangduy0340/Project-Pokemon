#ifndef VEGIE_H

#define VEGIE_H

// Include the required header files.

#include <string>

#include "animal.h"

using namespace std;

// Define the class.

class vegie : public animal {
 private:
  // Declare the member variables.

  string favourite_food;

  static int nextID;

 public:
  // Declare the constructor.

  vegie(string, int);

  // Declare the member functions.

  string getFavourite();

  void setFavourite(string n);

  string get_name();
};

#endif