#include<iostream>
using namespace std;

int main()
{
    /* Loops in c++ 
     1) For loop 
     Syntax of For loop
     for(initialization, condition, updation)   initialization sirf AK BAR run krta ha jab loop start hota ha.
     {
         loop code(C++ code);
     }*/
    
    // for(int i=1; i<=40; i++)      // for loop is used for repition of task and condition applied in the program. 
    // {
    //     cout<<i<<endl;
        
    // }
          // For infinte loop
    //  for(int i=1; 34<=40; i++)      // for loop is used for repition of task and condition applied in the program. 
    // {
    //     cout<<i<<endl;
        
    // }

    // While loop in C++
    // Syntax:
    /* while(condition)
    {
        C++ statemnet;
    } */

    // int i = 1;
    // while(i<=40)
    // {
    //     cout<<i<<endl;       // The block keeps executing as long as the condtion is true.
    //     i++;
    // }

 // For while infinte loop
    // int i = 1;
    //  while(true)     // for loop is used for repition of task and condition applied in the program. 
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // ***********do while loop********
    // int i =1;
    // do{
    //     cout<<i<<endl;
    //     i++;                   // The difference is if condition is false our program must be run atleast once.
    // }while(false);


               // ********QUIZ*************
// Write a multipication table of 6 with the help of do while loop 

// int i = 1, n = 6;
// do{
//     cout<<i*n<<endl;
//     i++;
// }while(i<=10);

int n=6 ;
for(int i = 1; i<=10; i++)
{
  cout<<i*n<<endl;
}

    return 0;
}
