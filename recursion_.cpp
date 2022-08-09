#include<iostream>
using namespace std; 

    // ************RECURSION****************

    // factorial(n) = factorial(n-1) * n;

int factorial(int x);   // Function prototype;
// A program to calculate factorial using recursion;
int main()
{
   int a ;
   cout<<"Enter the value of a "<<a<<endl;
   cin>>a;  
   cout<<"The value of factorial "<<a<<" is \n"<<factorial(a);     // Function Call;
    
    
    return 0;
}
// Function definition;
int factorial(int x){
cout<<"Calling factorial "<<x<<endl;
    if(x == 1 || x == 0){
        return 1;         // retrun 1 means function kahatm, nahi dekhege uske baad aur value lekr lautjao ga;
    }
    else{
        return factorial(x - 1) * x;   // Factorial(n) = Factorial(n - 1) * n;
    }
    
}