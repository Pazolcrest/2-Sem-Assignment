// Write a c++ program that reads temperature in degree Celsius and convert it into Fahrenheit.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	double celsius;
	cout << "Enter the temperature in celsius: ";
	cin >> celsius;
	double fahrenheit = celsius * 9.0 / 5.0 +32.0;
	cout << celsius << "degrees celsius is equivalent to " << fahrenheit << "degrees fahrenheit" ;
	
	getch();
}
