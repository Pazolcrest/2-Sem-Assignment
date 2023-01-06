// Write a c++ program that reads a number and tests whether it is multiple of 5 and 11.

#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "Enter the number:";
	cin >> x;
	if(x%5==0 && x%11==0){
		cout << "The given number is multiple of 5 and 11.";
	}
	else{
		cout << "The given number is not multiple of 5 and 11.";
	}
}
