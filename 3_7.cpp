// Write a c++ program to count number of digits in a number.

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // Write a code here
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int count=0,x;

    while(num!=0){
        x=num%10;
        count=count + 1;
        num=num/10;
    }
    cout << "The numbers of digits used in given number is : " << count << endl;

    getch();
    return 0;
}
