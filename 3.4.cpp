// Write a c++ program to display the series:  ½  2/3  ¾  4/5  5/6…………………..n-1/n

#include <iostream>

int main() {
  // Read the value of n from the user
  int n;
  std::cout << "Enter the value of n: ";
  std::cin >> n;

  // Print the series
  for (int i = 1; i <= n; ++i) {
    std::cout << i - 1 << '/' << i << ' ';
  }
  std::cout << std::endl;
  return 0;
}
