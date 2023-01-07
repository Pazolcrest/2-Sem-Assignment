// Write a c++ program to find cube and square of first ten natural number.

#include<iostream>

using namespace std;

int main()
{
    // Write a code here
     int i;
     cout << "The cubes of first ten natural number is : " << endl;
     for(int i=1; i<=10; i++){
        cout << "The cube of " << i << " is "<<  i*i*i << "." << endl;  
     }

    cout << "The squares of first ten natural numbers is : " << endl;
    for(int i=1; i<=10; i++){
        cout << "The square of " << i << " is " << i*i << "." << endl;
    }

    return 0;
}
