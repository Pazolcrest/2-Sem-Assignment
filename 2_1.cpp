// Write a c++ program to read a four digit number and print the sum of its digits.

#include<iostream>
using namespace std;

int main()
{
	
	int num,sum=0,x;
	cout << "Enter a four digit number : ";
	cin >> num ;
	
	while(num!=0)
	{
		x=num%10;
		sum=sum+x;
		num=num/10;
	}
	
	cout << "The sum of four digits number is : " << sum ;
	
	return 0;
	 
}
