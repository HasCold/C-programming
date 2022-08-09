#include<iostream>
using namespace std; 

int main()
{
//     int a = 45;
//     int *ptr = &a;
//     cout<<"The value of ptr is "<<ptr<<endl;
//     cout<<"The value of ptr is "<<ptr<<endl;
// ptr++;

// char c = 45;
//     char *a = &c;
//     cout<<"The value of a is "<<*(&a)<<endl;
//     // cout<<"The value of ptr is "<<ptr<<endl;
// a = a + 1;
// cout<<"The value of a "<<*a<<endl;

int i = 32;
int *a = &i;
a++;
cout<<*a<<endl;
cout<<a<<endl;
cout<<a++<<endl;



    return 0;
}