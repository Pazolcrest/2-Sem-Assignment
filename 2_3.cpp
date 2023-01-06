// Write a c++ program to read two integer values m and n and to decide and print whether m is a multiple of n.

#include <iostream>

using namespace std;

int main() {
  int m, n;

  cout << "Enter the first number (m): ";
  cin >> m;
  cout << "Enter the second number (n): ";
  cin >> n;

  if (n == 0) {
    cout << "Error: n cannot be 0." << endl;
    return 1;
  }

  if (m % n == 0) {
    cout << m << " is a multiple of " << n << "." << endl;
  } else {
    cout << m << " is not a multiple of " << n << "." << endl;
  }
}

