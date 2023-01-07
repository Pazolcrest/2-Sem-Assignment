// Write a c++ program to find sum of digits of number.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // Write a code here
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int sum=0, x;
    while(num!=0){
        x=num%10;
        sum=sum + x;
        num=num/10;
    }
    cout << "The sum of digits of given number is : " << sum << endl;

    getch();
    return 0;
}
