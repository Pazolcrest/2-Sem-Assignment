// Write a c++ program to find the second largest number (or middle) among three numbers.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	
	int num1,num2,num3;
	cout << "Enter the first number:";
	cin >> num1;
	cout << "Enter the second number:";
	cin >> num2;
	cout << "Enter the thrid number:";
	cin >> num3;
	
	if(num1>num2)
	{
		if(num1>num3){
			if(num2>num3){
				cout << "The second largest number is : " << num2;
			}
			else{
				cout << "The second largest number is : " << num3;
			}
		}
		else{
			cout << "The second largest number is : " << num1;
		}
	}
	else{
		if(num2>num3){
			if(num1>num3){
				cout << "The second largest number is : " << num1;
			}
			else{
				cout<< "The second largest number is : " << num3;
			}
		}
		else{
			cout << "The second largest number is : " << num2;
		}
	}
	getch();
}
