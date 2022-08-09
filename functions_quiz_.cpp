#include<iostream>   // Library Functions  
using namespace std; 
 
   // Write a program with three function.
   
   /* User defined functions jo hum banate ha like below */ 
   void display1(), display2(), display3();  // Function Proyotype;

int main()    // main() is the entry point for C/C++ programs;
{
    cout<<"Hello everybody \n "<<endl;
    display1();
    display2();    //==>> Function call
    display3();
    cout<<"God bless you Hasan \n"<<endl;
    return 0;
}
// Function defintion;

void display1(){
    cout<<"Good Morning Hasan"<<endl;
}
void display2(){
    cout<<"Good Afternoon Hasan "<<endl;
}
void display3(){
    cout<<"Good Night Hasan \n"<<endl;
}