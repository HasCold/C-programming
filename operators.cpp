#include<iostream>
using namespace std;

int main()
{
//    int a = 4;   
//    cout<<"The value of c was "<<a<<endl;
//    a = 6;    // Updated value of a;
//    cout<<"The value of c is "<<a<<endl;


/*  Why we use const??  let suppose if a programmer write a pi value 3.142 and you didn't want this value
to change in future either accidentally or doing someone else so you will use a const.*/
const int a = 3;
cout<<"The value of a was "<<a<<endl;
// a = 45;  // It gives error bc the  a value doesn't change;
cout<<"The value of a is "<<a<<endl;
const float b = 30.234;
cout<<"The value of b is "<<b<<endl;
// b  = 23.45;   

    return 0;
}
