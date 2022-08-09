#include<iostream>
using namespace std; 

int main()
{
    int i = 56;
    int *j = &i;
cout<<"The value of i is "<<i<<endl;
cout<<"The value of i is "<<*j<<endl;
cout<<"The address of i is "<<&i<<endl;   // & means to store the address of variable;
cout<<"The address of i is "<<j<<endl;
cout<<"The address of j is "<<&j<<endl;  // & means to store the address of variable;
cout<<"The value at address of j is "<<*(&j)<<endl;  // the value at (*) address of(&) j is;  
            
    return 0;
}