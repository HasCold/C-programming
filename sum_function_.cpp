#include<iostream>
using namespace std; 

// Write a program to add two values 
// sum is the function which takes input a and b and returns an integer as an output; in void sum didn't give any
// value as a return;

int sum(int a, int b);  // Function Prototype declaration

int main()
{
    int c;
    c = sum(2, 22);    // Function Call   and also sum has a perfect value which gives the return bc of int; 
//  Here (2 and 22) are arguments which are actual values;
cout<<"The value of c is "<<c<<endl;  // a and b are parameters;

    return 0;
}
// Function Definition;
int sum(int a, int b){
    int c;              // Functions varaible and main() variable are different although we use at a same time  
   c= a + b;            // like c variable;  
    return c;
}
// A function can return only one value at a time;