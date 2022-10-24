// Include the required header files.

#include <iostream>
#include <string>

#include "animal.h"
#include "hunter.h"
#include "sort_by_animalID.h"
#include "sort_by_name.h"
#include "vegie.h"
#include "zoo.h"

using namespace std;

// Define the main function.

int main() {
  // Create an animal object for vegie.

  animal *v[3] = {new vegie("sheep", 1), new vegie("cow", 3),
                  new vegie("elephant", 2)};

  cout << "\nInitial data Vegie class:";

  cout << endl;

  // Display the vegie object details.

  for (int i = 0; i < 3; i++)

  {
    cout << "\nID: " << v[i]->get_animalID() << ", name:" << v[i]->get_name();
  }

  cout << endl;

  // Create an animal object for hunter.

  animal *a[3] = {new hunter("lion", 5), new hunter("tiger", 7),
                  new hunter("cat", 4)};

  cout << "\nInitial data hunter class:";

  cout << endl;

  // Display the hunter object details.

  for (int i = 0; i < 3; i++)

  {
    cout << "\nID: " << a[i]->get_animalID() << ", name:" << a[i]->get_name();
  }

  cout << endl;

  // Call the function to sort the vegie objects by name.

  sort_by_name::sort(v, 3);

  // Display the sorted list.

  cout << "\nVegie class after sort by name:";

  cout << endl;

  for (int i = 0; i < 3; i++)

  {
    cout << "\nID: " << v[i]->get_animalID() << ", name:" << v[i]->get_name();
  }

  // Call the function to sort the vegie objects by animalID.

  sort_by_animalID::sort(v, 3);

  cout << endl;

  // Display the sorted list.

  cout << "\nVegie class after sort by animalID:";

  cout << endl;

  for (int i = 0; i < 3; i++)

  {
    cout << "\nID: " << v[i]->get_animalID() << ", name:" << v[i]->get_name();
  }

  cout << endl << "\nZOO DETAILS:" << endl;

  // Create the Zoo object.

  zoo obj("City Zoo", 3, 3);

  // Display the zoo details.

  cout << "\nZoo name: " << obj.get_name() << endl;

  cout << "\nNumber of animals in the Zoo:" << obj.get_number_of_animals()
       << endl;

  cout << "\nAnimals in the zoo: " << endl;

  animal **animals;

  animals = obj.get_animals();

  for (int i = 0; i < obj.get_number_of_animals(); i++) {
    cout << "\nID: " << animals[i]->get_animalID() << ", name: "

         << animals[i]->get_name() << endl;
  }

  return 0;
}