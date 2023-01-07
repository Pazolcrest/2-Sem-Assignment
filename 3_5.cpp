// Write a c++ program to to evaluate the series S = 1+2*1+3*1+...............+N*N-1.

#include<iostream>
using namespace std;

int main()
{
    // Write a code here
    int n,i; 
    cout << "Enter the value of number: ";
    cin >> n;
    int sum=0;
    for(i=1; i<=n; i++){
        sum=sum + i * i-1;
    }
    cout << "The sum of given serires is : " << sum;

    return 0;
}
