// #include<iostream>
// #include<cmath>
// using namespace std; 

//     // Q1 Write a program using function to find average of three numbers;

// float display(); //  Function Prototype;
// int main()
// {
//    display();  // Function call;
//    cout<<"Hence we got a answer"<<endl;

//     return 0;
// }
// //  Function Definition;
// float display(){
//   int num1,  num2,  num3;
//     cout<<"Enter the num1 num2 num3 "<<endl;
//     cin>>num1;
//     cin>>num2;
//     cin>>num3;
// float a = (float)(num1 + num2 + num3)/3;
// cout<<"The average of three numbers "<<a<<endl;

//   return a;
// }


// #include<iostream>
// #include<cmath>
// using namespace std; 

// // Q2 Write a function to calculate force of attraction on a body of mass m exerted by earth (g = 9.8m/s^2)
// // ********************************* F = mg************************
// float display(float m);  // Function Prototype
// int main()
// {
//     float m;
//     cout<<"Enter the value of m "<<m<<endl;
//     cin>>m;
//      cout<<"The force of attraction in newton "<<display(m)<<endl; // we are showing the display function(m) to 
//     return 0;                                   // continue code commands
// }
// // Function Defintion;
// float display(float m){
//     float force, g = 9.8;
//     force = m * g;
//     return force;

// }


// #include<iostream>
// #include<cmath>
// using namespace std; 

// // Q3 Write a program using recursion to calculate nth element of fibonnaci series;
// //              fib(n) = fib(n - 1) + fib(n - 2)

// int display(int n);  // Function Prototype
// int main()
// {
//     int n;
//     cout<<"The value of n "<<n<<endl;
//     cin>>n;
//     cout<<"The "<<n<<" element of fibonnaci series is "<<display(n)<<endl; // Function Call

//     return 0;
// }
// // Function definition
// int display(int n){
//     int a = n = (n - 1) + (n - 2); 
// if(n == 1 || n == 0){
//     return 0;
// }
// else{
//     n = (n - 1) + (n - 2); 
//    return a; 
// }

// }


// Q4 Write a program using recursive function to print the following pattern (firts n lines);

#include<iostream>
#include<cmath>
using namespace std; 

void pattern(int n);   // Function Prototype
// void function means return nothing;
int main()
{
    int n ;
    cout<<"The value of n "<<n<<endl;
    cin>>n;
pattern(n);

    return 0;
}
// Function Definition;
void pattern(int n){
if(n==1){
    cout<<"* "<<endl;
    return;
}
// 1-1
// 2-3
// 3-5
// (2n-1)
pattern(n-1);   // Agar n=3 ha tu ye three lines print karega; ye pehle n = 1 k liye print karega
    for(int i=0; i<(2*n-1); ++i){

        cout<<"*";
    }
  cout<<"\n";
}
