#ifndef ANIMAL_H
#define ANIMAL_H
// Include the required header files.
#include <iostream>
using namespace std;

// Define the class.

class animal {
 protected:
  string name;
  int animalID;
  int volume;
 public:
  // Declare the constructor.
  animal(string n, int v);
  // Define the pure virtual function.
  virtual string get_name() = 0;
  // Declare the member functions.
  void set_name(string n);
  void set_volume(int v);
  int get_volume();
  int get_animalID();
};
#endif