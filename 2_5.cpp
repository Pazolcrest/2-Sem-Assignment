// Write a c++ program that will obtain the length and width of a rectangle from the user and compute its area and perimeter.

#include<iostream>
using namespace std;

int main()
{
	float length,width;
	cout << "Enter the lenght : ";
	cin >> length;
	cout << "Enter the width : ";
	cin >> width;
	
	float area = length * width;
	float perimeter = (length+width)*2;
	
	cout << "The area of the rectangle is : " << area << endl;
	cout << "The perimeter of the rectangle is : " << perimeter;
	
	return 0;
	
}
