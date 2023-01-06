// Write a c++ program that read marks in five subjects and finds total marks, percentage.

#include<iostream>
using namespace std;

int main()
{
	int marks1,marks2,marks3,marks4,marks5;
	cout << "Enter the marks for subject 1 : ";
	cin >> marks1;
	cout << "Enter the marks for subject 2 : ";
	cin >> marks2;
	cout << "Enter the marks for subject 3 : ";
	cin >> marks3;
	cout << "Enter the marks for subject 4 : ";
	cin >> marks4;
	cout << "Enter the marks for subject 5 : ";
	cin >> marks5;
	
	double totalmarks;
	totalmarks = marks1+marks2+marks3+marks4+marks5;
	cout << "The total marks  is : " << totalmarks << endl;
	double percentage;
	percentage = (totalmarks / 500)*100;
	cout << "The percentage is : " << percentage << "%"<< endl;
	
	return 0;
}
