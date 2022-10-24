#ifndef SORT_BY_NAME_H

#define SORT_BY_NAME_H

// Include the required header files.

#include <iostream>

#include "animal.h"

using namespace std;

// Define the class.

class sort_by_name {
 public:
  // Define the static member function.

  static void sort(animal **animals, int n);
};

#endif