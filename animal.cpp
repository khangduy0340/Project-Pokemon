// Include the required header files.
#include "animal.h"
// Define the constructor.
animal::animal(string n, int v) {
  animalID++;
  name = n;
  volume = v;
}
// Define the member functions.
void animal::set_name(string n) { name = n; }
void animal::set_volume(int v) { volume = v; }
int animal::get_volume() { return volume; }
int animal::get_animalID() { return animalID; }