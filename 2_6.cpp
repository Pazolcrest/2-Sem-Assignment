// Write a c++ program that read radius of circle and finds area and circumference.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	const float PI = 3.14159;
	float radius;
	cout << "Enter the radius: ";
	cin >> radius;
	
	float area = PI * pow(radius,2);
	float circumference = 2 * PI * radius;
	
	cout << "The area of circle is : " << area << endl;
	cout << "The circumference of circle is : " << circumference;
	
	return 0;
	
}
