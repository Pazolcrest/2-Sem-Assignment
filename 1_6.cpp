// Write a program to read any two numbers and performs simple arithmetic oprations (additions, subtraction, division,multiplication)

#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cout << "Enter two numbers:";
	cin >> x >> y;
	int additions,subtraction,multiplication;
	int division;
	additions=x+y;
	subtraction=x-y;
	multiplication=x*y;
	division=x/y;
	cout << "The additions of two given numbers is : " << additions << endl;
	cout << "The subtractions of two given numbers is : " << subtraction << endl;
	cout << "The divisions of two given numbers is : " << division << endl;
	cout << "The multiplication two given numbers is : " << multiplication << endl;
	return 0;
	
}
