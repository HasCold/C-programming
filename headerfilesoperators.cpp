// There are two types of header files:
// 1. System header files: It comes with the compiler.
#include<iostream>
// 2, User defined header file: It is written by the programmer 
//#include"this.h"   // iska mtlb jo file ap use karo wo majood honi chyie apki current directory ma
                   // jaise hamne ak this.h ki file create apni directory ma. Nahi tu error through hoga.

/* This website is useful for you cpp refrence for header files >> cppreference.com */
// You can update yourself to see the header files in the giver website above.


using namespace std;

int main()
{
int a = 4, b = 5;
   cout<<"Opeerators in c++";

   //Following are the types of opearators in C++ 
   //Arithmetic operators
// endl= end + l(line) so use small l letter instead of 1 number. \n or endl has same uses.

   cout<<"The value of a + b is \n"<<a+b<<endl;
cout<<"The value of a - b is \n"<<a-b<<endl;
cout<<"The value of a * b is \n"<<a*b<<endl;
cout<<"The value of a / b is \n"<<a/b<<endl;
cout<<"The value of a % b is \n"<<a%b<<endl;
cout<<"The value of a++ is \n"<<a++<<endl; // a++ == pehle print karo phr increment karo
cout<<"The value of a-- is \n"<<a--<<endl; 
cout<<"The value of ++a is \n"<<++a<<endl; // ++a == pehle increment karo phr print
cout<<"The value of --a is \n"<<--a<<endl;

// //Assignment operators--> used to assign valus to variables
// int a = 3, b = 9;
// char d = 'd';

// Comparison operators

cout<<"The value of a == b is \n"<<(a==b)<<endl;
cout<<"The value of a != b is \n"<<(a!=b)<<endl;  //Use parenthesis () for easily readable for our compiler
cout<<"The value of a <= b is \n"<<(a<=b)<<endl;
cout<<"The value of a >= b is \n"<<(a>=b)<<endl;
cout<<"The value of a < b is \n"<<(a<b)<<endl;
cout<<"The value of a > b is \n"<<(a>b)<<endl;


// Logoical operators


cout<<"The value of ((a == b) && (a<b)) is \n"<<((a==b) && (a<b))<<endl;
cout<<"The value of ((a == b) || (a<b)) is \n"<<((a==b) || (a<b))<<endl;
cout<<"The value of (!(a==b)) is \n"<<(!(a==b)) <<endl;
// cout<<"The value of a != b is \n"<<(a!=b)<<endl;  //Use parenthesis () for easily readable for our compiler
// cout<<"The value of a <= b is \n"<<(a<=b)<<endl;  // always enclose with parenthesis.
// cout<<"The value of a >= b is \n"<<(a>=b)<<endl;
// cout<<"The value of a < b is \n"<<(a<b)<<endl;
// cout<<"The value of a > b is \n"<<(a>b)<<endl;

    return 0;
}
