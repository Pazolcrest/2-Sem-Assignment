// Write a c++ program to reverse the number.

#include<iostream>

using namespace std;

int main()
{
    // Write a code here
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int reverse=0,x;
    while(num!=0){
        x=num%10;
        reverse=reverse*10+x;
        num=num/10;
    }
    cout << "The reverse of given number is : " << reverse ;

    return 0;
}
