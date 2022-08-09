#include<iostream>
using namespace std; 

    void printarray(int *ptr, int n){    // Function prototype and function definition
     for(int i = 0; i<n; i++){
        cout<<"the value of element "<<i + 1<<" is "<<*(ptr+i)<<endl;
     }         // you wil use ptr+i while  ptr++ both has same concept 
    }

int main()
{
    int arr[] = {23, 464, 656, 56, 46};  // This array size is 5;
    printarray(arr, 5);   // if we put the wronng size then our compiler make the garbage value by themselve.

    return 0;
}