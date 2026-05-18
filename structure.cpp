#include <iostream>
using namespace std;
struct Slot {
     int number;
     string plate;
     bool occupied;
     };
     // Function to park car
     void parkCar(Slot parking[], int size) {
          string plateNumber;
           for (int i = 0; i < size; i++) {
                    if (parking[i].occupied == false) {
                         cout << "Enter plate number: ";
 cin >> plateNumber;
 parking[i].plate = plateNumber;
  parking[i].occupied = true;
  cout << "Car parked in slot " << parking[i].number << endl;
   return;
   }
    } cout << "Parking Full!\n";
    }
    // Function to remove car
    void removeCar(Slot parking[], int size) {
         int slot;
          cout << "Enter slot number: ";
           cin >> slot;
            if (slot >= 1 && slot <= size) {
                    if (parking[slot - 1].occupied == true) {
parking[slot - 1].occupied = false;
 parking[slot - 1].plate = "";
  cout << "Car removed\n";
  }
  else { cout << "Slot already empty\n";
  }
  } else { cout << "Invalid slot\n"; } }
  // Function to show available slots
  void showAvailable(Slot parking[], int size) {
       int empty = 0;
        for (int i = 0; i < size; i++) {
                if (parking[i].occupied == false) {
                     empty++; } }
cout << "Empty slots: " << empty << endl;
 for (int i = 0; i < size; i++) {
        cout << "Slot " << parking[i].number << ": ";
 if (parking[i].occupied == true) {
        cout << parking[i].plate << " Occupied\n";
} else { cout << "Empty\n";
}
 }
  }
//main function
int main() {
     const int size = 5;
      Slot parking[size];

       for (int i = 0; i < size; i++) {
                parking[i].number = i + 1;
       parking[i].occupied = false;
       }
       int choice;
        do {

cout << "\n1. Park Car\n";
 cout << "2. Remove Car\n";
  cout << "3. Show Available\n";
   cout << "4. Exit\n";

    cout << "Enter choice: ";
     cin >> choice;
      if (choice == 1) {
            parkCar(parking, size);
 } else if (choice == 2) {
      removeCar(parking, size);
      } else if (choice == 3) {
           showAvailable(parking, size);
           }
                } while (choice != 4);
return 0;
}
