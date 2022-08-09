#include<iostream>
#include<iomanip>  // It is our another header file;
using namespace std;

int main()
{
    // Manipulators helps in displaying your format 

//     int a = 33, b = 3, c = 4;
//     cout<<"The value of without setw(4) a is "<<a<<endl;
//     cout<<"The value of without setw(4) b is "<<b<<endl;
//     cout<<"The value of without setw(4) c is "<<c<<endl;
// // Her we use setw(4) 
// cout<<"The value of setw(4) a is "<<setw(4)<<a<<endl;  // it means taken width by 4; 
//     cout<<"The value of setw(4) b is "<<setw(4)<<b<<endl;
//     cout<<"The value of setw(4) c is "<<setw(4)<<c<<endl;

//            Operators precedence;
// precedence means which operators is open first.
/* you can also go to the website cpprefrence.com for looking the precedence. Use operators as according to the given 
 table */ 

int a = 3, b = 4;
// int c = (a*b)+b;
int c = ((((a*b)+b)-45)+87);  // associate from left to right;
// agr hm dekhte ha k sare operators same precedence k ha tu associativity lago hoti ha;
cout<<c;


    return 0;
}