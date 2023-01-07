// Write a c++ program to find GCD and LCM of two numbers.

#include<iostream>
#include<conio.h>
using namespace std;
int GCD(int ,int);
int LCM(int ,int);
int main()
{
    // Write a code here
    int num1,num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "The GCD of given numbers is : " << GCD(num1,num2) << endl;
    cout << "The LCM of given numbers is : " << LCM(num1,num2) << endl;

    getch();
    return 0;
}

int GCD(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return GCD(y,x%y);
    }
}

int LCM(int a,int b){
    return a * b / GCD(a,b);
}
