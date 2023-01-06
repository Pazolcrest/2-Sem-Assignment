// Write a c++ programt that reads P,T and R and find simple interest and amount.

#include<iostream>
using namespace std;

int main()
{
	float P,T,R;
	cout << "Enter the principal amount: ";
	cin >> P;
	cout << "Enter the time in years: ";
	cin >> T;
	cout << "Enter the rate of interest: ";
	cin >> R;
	
	float interest = (P*T*R)/100;
	float amount = interest + P;
	
	cout << "The simple interest is : " << interest << endl;
	cout << "The total amount is : " << amount ;
}
