#ifndef SORT_BY_ANIMALID_H
#define SORT_BY_ANIMALID_H
// Include the required header files.
#include <iostream>
#include "animal.h"
using namespace std;
// Define the class.
class sort_by_animalID {
 public:
  // Define the static member function.
  static void sort(animal **animals, int n);
};

#endif