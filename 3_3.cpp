// Write a c++ program to print ASCII value of all ASCII value of all character.

#include<iostream>
using namespace std;

int  main()
{
	for(int i=0; i<=127; i++)
	{
		cout << "ASCII value of ' " << char(i) << " ' is " << i << endl;
	}
}
