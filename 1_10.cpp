// Write a program that reads a year ( eg. 2012) and checks whether the entered year is leap year or not.

#include <iostream>

using namespace std;

int main() {
  // Read in the year
  int year;
  cout << "Enter a year: ";
  cin >> year;

  // Check if the year is a leap year
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    cout << year << " is a leap year." << endl;
  } else {
    cout << year << " is not a leap year." << endl;
  }

  return 0;
}
