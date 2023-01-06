// Write a program that read a number and tests whether it is multiple of 5 or not.

#include<iostream>
using namespace std;
int main(){
	
	int x;
	cout << "Enter the number:";
	cin >> x;
	
	if (x%5==0){
		cout << "The given number is multiple of 5.";
	}
	else{
		cout << "The given number is not multiple of 5.";
	}
}
