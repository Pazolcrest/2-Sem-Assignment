/* Write a c++ program to read the numbers and print the following results 
	a. sum of the values
	b. average of three values
	c. largest of the three
	d. smallest of the three
*/

	
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

  int sum = a + b + c;

  double average = sum / 3.0;

  int max = a;
  max = (b > max) ? b : max;  
  max = (c > max) ? c : max;  

  
  int min = a;
  min = (b < min) ? b : min;  
  min = (c < min) ? c : min;  

  cout << "Sum: " << sum << endl;
  cout << "Average: " << average << endl;
  cout << "Largest: " << max << endl;
  cout << "Smallest: " << min << endl;

  return 0;
}	
