#include<iostream>
using namespace std; 

int main()
{
   int marks[4];
   int *ptr;
   ptr = &marks[0];   // & for reference;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter the value of marks for student "<<i + 1<<" is ";
        cin>>marks[i];
        // *ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<"You have entered the value of marks for student "<<i + 1<<" is "<<*ptr<<endl;
        ptr++;
    }
    


    return 0;
}