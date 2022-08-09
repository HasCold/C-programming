#include<iostream>
using namespace std; 

int main()
{
    // *************Uses of Array and pointers in C++********* 
    
                // 0   1   2   3
    int marks[] = {44, 99, 88, 67};
    int* p = marks;   // we didn't use address(&) operator in array. * -->> Dereference operator.
    cout<<*(p++)<<endl;
     cout<<*(++p)<<endl;
    // marks[1] = 95;    // if u want to change any value then do it before running the program.
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;
      

    return 0;
}