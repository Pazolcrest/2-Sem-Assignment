// Write a c++ program that reads two numbers and swap them.

#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	int temp=num1;
	num1=num2;
	num2=temp;
	cout << "The swapped numbers are : " << num1 << " and " << num2 << ".";
}
