// Given three numbers, write a c++ program to read three numbers from keyword and print out the largest of them without using if statement.

#include <iostream>

using namespace std;

int main() {
  int a, b, c;

  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;
  cout << "Enter the third number: ";
  cin >> c;

  int max = a;
  max = (b > max) ? b : max;  // ternary operator to select the larger of b and max
  max = (c > max) ? c : max;  // ternary operator to select the larger of c and max

  cout << "The largest number is: " << max << endl;

  return 0;
}
