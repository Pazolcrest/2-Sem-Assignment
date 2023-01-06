// Write a c++ program that reads a number and finds sum of the square of digits(for example, if the number is 235 then sum=2*2+3*3+5*5=38).

#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int sum=0;
	cout << "Enter the number:";
	cin >> x;
	while(x!=0){
	y=x%10;
	sum=sum+y*y;
	x=x/10;
	}
	cout << "The sum of square of digits of given number is " << sum << ".";

}
