// Write a c++ program to read a character from keyboard and convert it into uppercase if it is in lowercase and vice versa.

#include<iostream>
#include<conio.h>
#include<cctype>
using namespace std;
int main()
{
	char x;
	cout << "Enter the character: ";\
	cin >> x;
	
	if(islower(x)){
		x = toupper(x);
	}
	else if(isupper(x)){
		x = tolower(x);
	}
	cout << "The converted character is : " << x << endl;
	
	getch();
}
