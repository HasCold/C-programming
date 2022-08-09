#include<iostream>
using namespace std; 

int main()
{
//     int marks[4]; // allocate space for 4 integrs;
//     cout<<"Enter the value of marks[0] "<<marks[0]<<endl;    // memory allocation starts from [0] in C/C++;
//    cin>>marks[0];
//     cout<<"Enter the value of marks[1] "<<marks[1]<<endl;    
//    cin>>marks[1];
//     cout<<"Enter the value of marks[2] "<<marks[2]<<endl;    
//    cin>>marks[2];
//    cout<<"Enter the value of marks[3] "<<marks[3]<<endl;    
//    cin>>marks[3];

// cout<<"You have entered the values of marks "<<marks[0]<<","<<marks[1]<<","<<marks[2]<<","<<marks[3]<<endl;

int marks[6];
for (int  i = 0; i < 6; i++)
{
    cout<<"Enter the value of marks of student "<<i+1<<" is "<<marks[i]<<endl;    
    cin>>marks[i];
}


for (int  i = 0; i < 6; i++)
{
    cout<<"The value of marks of student "<<i+1<<" is "<<marks[i]<<endl;    
}

    return 0;
}