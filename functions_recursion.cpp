#include<iostream>
using namespace std; 

    // ************FUNCTIONS AND RECURSIONS****************

    // Sometime our program get bigger in size and its not possible for a programmer to track which piece of 
    // code is doing what. Function is a  way to break our code into chunks so that it is possible for a programmer 
    // to     reuse them;

    /* A function is a block of code which performs a particular task */

    void display();   // ===>> Function prototype;
// Void ka matlb kuch return nahi krta aur argument bhi nahi leta;
int main()          // main() function always preserve the order.
{              
    cout<<"Initilizing display \n "<<endl;
   display();   // ==>> Function call;
    cout<<"Display function iniializing works end \n"<<endl;

    return 0;
}
// Function definition;
void display(){
    cout<<"That is C++ display \n "<<endl;
}