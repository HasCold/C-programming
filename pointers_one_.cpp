#include<iostream>
using namespace std; 

int main()
{
    /* What is pointers?
     Ans-->>. Pointer is a data type Which holds the addresses of other data types.
     For example*/

     int a=3;
     int* b=&a;    // address of a, b k andr agya ha. Every variable has some address in the memory. 
     cout<<"The address of a "<<&a<<endl;
                                         // 'b' is a pointer which stores the address of a.
    cout<<"The address of a "<<b<<endl;  // same as above output;
    cout<<"The value at address b  "<<*b<<endl; 
     
     /* &--->> (address of) operator

     * --->>> (value at) Dereference  operator*/


    // *********Pointer to pointer variable*****************
    // Our b has store some address of a and also there is a address of b that can stores by other variable.Like

    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
     cout<<"the address of b is "<<c<<endl;
     cout<<"The value at address c is "<<*c<<endl;
     cout<<"The value at address value_at(value_at(c))  is "<<**c<<endl;

    return 0;
}