#include<iostream>
using namespace std;

int c = 45;     // Global scope variable;

int main()
{          //************Build in Data types****************
//     int a, b , c;                         //--->> local scope variale;
//     cout<<"Enter the value of a is "<<a<<endl;  
//     cin>>a;
//     cout<<"Enter the value of b is "<<b<<endl;
//     cin>>b;
//     c= a + b;
//     cout<<"The sum is"<<c<<endl;     // If we want global c value then we use scope resolution operator(::)
//     cout<<"The sum of global c is"<<::c<<endl;

          //************Float, double and long double literals****************

// float d = 34.4f;   // for float == 34.4f; we can also use capital F suffix 
// long double e = 34.4l;  // for long doule == 34.4l; we can also use capital L  suffix
// cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
// cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;

// cout<<"The value of d is"<<d<<endl<<"The value of e is"<<e<<endl;


          //************Reference Variables****************
// //  For Example >>  ali -->> montu -->>> dangerorus coder
// float x = 450;
// float &y = x;   // & is used for refrence for y; also called refrence variable.
// cout<<x<<endl;
// cout<<y<<endl;

          //*************Typecasting***************

// Typecasting means convert one data type to another.
int a = 50;
float b  = 6.2450;
cout<<"The value of a is "<<(float)a<<endl;   /* This is called typecasting converting int to float or float to int*/
cout<<"The value of a is "<<float(a)<<endl;   // same as above 
cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;    // same as above
int c = int(b);  // it is also valid
cout<<"The value of c is "<<c<<endl;

cout<<"The expression is "<<a + b<<endl;
cout<<"The expression is "<<a + int(b)<<endl; // we convert b into an integer
cout<<"The expression is "<<a + (int)b<<endl;

    return 0;

}
