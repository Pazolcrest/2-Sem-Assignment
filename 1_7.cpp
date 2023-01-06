// Write a c++ program to input time in second convert it into hour, minute and second.

#include<iostream>
using namespace std;

int main()
{
	int timeinseconds;
	cout << "Enter the time in seconds: ";
	cin >> timeinseconds;
	
	int hour, minute, second;
	
	hour = timeinseconds/3600;
	minute = (timeinseconds/3600)%60;
	second = timeinseconds%60;
	
	cout << "Hours : " << hour << endl;
	cout << "Minutes : " << minute << endl;
	cout << "Seconds : " << second << endl;
	
	return 0;
}
