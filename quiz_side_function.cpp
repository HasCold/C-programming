#include<iostream>
#include<cmath>
using namespace std; 

// Use the library functions to calculate the area of a square with side a. 

int main()
{
    int a;  // a =>> side;
    cout<<"The value of a is "<<a<<endl;
    cin>>a;
    // Area os square = side * side;
    cout<<"The area of square is "<<pow(a,2)<<endl;   //pow()function retruns double 


    return 0;
}