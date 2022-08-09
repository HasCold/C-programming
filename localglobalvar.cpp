#include<iostream>
using namespace std;

                //BUILTIN DATA TYPES

int glo=5;          // ===>>> global variable; 
void sum(){
   int a;
   cout<<glo;

/* Executing process first our compiler see that their is any local variable(glo) in the sum so we didn't create
   any glo variabble locally then second thing the compiler can watch globally that if any global variable is present 
   so they can print in the sum function*/  
}

int main()
{
    bool is_true = true;  // bool is_true = false;   // bool = boolean true refers to 1 and false refers to 0;     
    int glo = 10;   //===>> local variable;
   glo = 78;        // local variable always preceeds first from global variable;  
    sum();          // we called sum() a function and ak function ke andr banaya hua variable jo hota ha wo  
   cout<<glo;       // local variale kehlata ha. 
cout<<glo<<true;
    return 0;
}