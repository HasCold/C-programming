#include<iostream>
using namespace std; 

// *****************Call by value Call by refrence;*************************
            
            // This will not swap a and b;
//         // formal arguments
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// Call by refrence by using pointers
// void swapPointer(int *a, int *b){  //  Hum log address pass karenge swapPointer function ma yani address;
//     int temp = *a;  //  dedo a ka aur b ka aur ham us address ko dereference karenge;
//     *a = *b;  // The value at address a = the value at address b
//     *b = temp;
// }
 
 // Call by refrence using C++ variables; 
 void swapRefVar(int &a, int &b){  //  Hum log address pass karenge swapPointer function ma yani address;
    int temp = a;  //  dedo a ka aur b ka aur ham us address ko dereference karenge;
    a = b;  // The value at address a = the value at address b
    b = temp;
}
int main()
{
    int x = 4, y = 5; 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y);  // swap function ma hamre actual arguments ha aur ye copy hogae ge formal arguments ma 
    // swapPointer(&x, &y); //address a aur b denge // This will swap a and b using pointer var;
swapRefVar(x, y);
    // Hum ne X and y ka refrence dediya;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    return 0;
}