// Include the required header files.
#include "zoo.h"
// Define the constructor.
zoo::zoo(string n, int cows, int lions)
{
  name = n;
  number_of_animals = cows + lions;
  animals = new animal*[number_of_animals];
  for (int i = 0; i < number_of_animals; i++) {
    if (i < cows) {
      vegie* temp = new vegie("Daisy", 100);
      animals[i] = temp;
    }
    else {
      hunter* temp = new hunter("Clarence", 50);
      animals[i] = temp;
    }
  }
}
// Define the member functions.
string zoo::get_name() { return name; }
int zoo::get_number_of_animals() { return number_of_animals; }
animal** zoo::get_animals() { return animals; }