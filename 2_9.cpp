/* Write a c++ program that reads a number and check whether it is 
Armstrong's number or not.(A number is called Armstrong's number if it is equal to sum of cubes of its digits.)
*/

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number: ";
	cin >> num;
	int x;
	int sum=0;
	int temp=num;
	while(temp!=0)
	{
		x=temp%10;
		sum=sum+x*x*x;
		temp=temp/10;
	}
	if(sum==num)
	{
		cout << "The given number is armstrong number.";
	}
	else
	{
		cout << "The given number is not armstrong number.";
	}
	
}
