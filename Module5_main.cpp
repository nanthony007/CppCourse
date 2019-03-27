#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

// arrays
string personsArray[10] {};
int numbersArray[10] {};


// prototypes
int menu();
string inputPerson();
int inputPhone();
void printData();
void sortAsc();
void sortDesc();
void search(string name);

int main(int argc, char const *argv[]) {
  cout << "This contact manager is capable of holding 10 people and their cell numbers." << endl;


   // loop counting variable
  int counter = 0;
  int index = 0;

  while (index < 10) {
    // values for input
    string ppl;
    int cell;

    // menu choice
    int choice = menu();

    if (choice == 1) {
        // enter a new person and cell number
        ppl = inputPerson();
        cell = inputPhone();

        //add ppl and cell to arrays
        personsArray[index] = ppl;
        numbersArray[index] = cell;
        cout << "Thank you! " << ppl <<"'s data has been recorded." << endl;
        index++;
        cout << endl;

      } else if (choice == 2) {
        sortAsc();
        cout << "The data has been sorted in ASCENDING order by telephone number." << endl;
        index++;
        cout << endl;

      } else if (choice == 3) {
        sortDesc();
        cout << "The data has been sorted in DESCENDING order by telephone number." << endl;
        cout << endl;

      } else if (choice == 4) {
        printData();
        cout << endl;

      } else if (choice == 5) {
        string name;
        cout << "Enter name of person to search for: \n";
        cin >> name;
        search(name);
        cout << endl;

      } else if (choice == 6) {
        // quit the program
        cout << "Program will exit. Goodbye";
        break;
      }
    }
  return 0;
}

// menu function, returns choice
int menu() {
    int menuChoice;

    cout << "Main Menu" << endl;
    cout << "Choose from one of the following options: ";
    cout << "\n\t 1. Input data";
    cout << "\n\t 2. Sort data Ascending";
    cout << "\n\t 3. Sort data Descending";
    cout << "\n\t 4. Print all data";
    cout << "\n\t 5. Search for an individual in the data";
    cout << "\n\t 6. Exit the program";
    cout << "\n\t Enter your choice (1-6): ";
    cin >> menuChoice;

    // validate the input
    while(menuChoice < 1 or menuChoice > 6) {
        // display an error and show menu again
        cout << "ERROR invalid entry ERROR" << endl;
        cout << "Choose from one of the following options: ";
        cout << "\n\t 1. Input data";
        cout << "\n\t 2. Sort data Ascending";
        cout << "\n\t 3. Sort data Descending";
        cout << "\n\t 4. Print all data";
        cout << "\n\t 5. Search for an individual in the data";
        cout << "\n\t 6. Exit the program";
        cout << "\n\t Enter your choice (1-6): ";
        cin >> menuChoice;
    }
    return menuChoice;
}

// function that gets a name from user
string inputPerson() {
    string person;
    cout << "Enter a person's (first) name: ";
    cin >> person;
    return person;
}

// function that gets 10-digit cell number from user
int inputPhone() {
  int phone;
  cout << "Enter a person's 10-digit cell number (no dashes or parentheses): ";
  cin >> phone;
  return phone;
}

void printData() {
  cout << "Numbers and Names:" << '\n';
  for(int item = 0; item < 10; item++) {
    cout << numbersArray[item] <<", "<< personsArray[item] << '\n';
  }
}

void sortAsc() {
  int temp = -1;
  int index = -1;
  int pass = -1;
  string temp2 = "";

  for (pass = 0; pass < 9; pass++) {
    for (index = 0; index < 9 - pass; index++) {
      if (numbersArray[index] > numbersArray[index + 1]) {
        // reorders numbers array
        temp = numbersArray[index];
        numbersArray[index] = numbersArray[index + 1];
        numbersArray[index + 1] = temp;

        // follows reordering method for names array
        temp2 = personsArray[index];
        personsArray[index] = personsArray[index + 1];
        personsArray[index + 1] = temp2;
      }
    }
  }
}

void sortDesc() {
  int temp = -1;
  int index = -1;
  int pass = -1;
  string temp2 = "";

  for (pass = 0; pass < 9; pass++) {
    for (index = 0; index < 9 - pass; index++) {
      if (numbersArray[index] < numbersArray[index + 1]) {
        // reorders numbers array
        temp = numbersArray[index];
        numbersArray[index] = numbersArray[index + 1];
        numbersArray[index + 1] = temp;

        // follows reordering method for names array
        temp2 = personsArray[index];
        personsArray[index] = personsArray[index + 1];
        personsArray[index + 1] = temp2;
      }
    }
  }
}

void search(string name) {
  int index = -1;
  for(index = 0; index < 10; index++) {
    if (personsArray[index] == name) {
      break;
    }
  }

  if(index > 9) {
    cout << "The person " << name << " was not found." << endl;
  } else {
    cout << name << " has the number: " << numbersArray[index] << endl;
  }
}
