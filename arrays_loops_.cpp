#include <iostream>
using namespace std;

int main()
{
    //********************Use of Array and loops*************

    int marks[] = {77, 88, 90, 14};
int mathmarks[4];
mathmarks[0] = 224; 
mathmarks[1] = 332;
mathmarks[2] = 225;
mathmarks[3] = 330;
cout<<"These are the mathmarks "<<endl;
    cout << mathmarks[0] << endl;
    cout <<mathmarks[1] << endl;
    cout << mathmarks[2] << endl;         // In C++ memory block start from 0 
    cout <<mathmarks[3] << endl;
// cout<<"These are the marks "<<endl;
// //   // You can also change the value of an array. Like
// //    marks[2] = 44;
// //    cout << marks[0] << endl;
// //     cout << marks[1] << endl;
// //     cout << marks[2] << endl;
// //     cout << marks[3] << endl;

// // By the help of loop we have changed the items of an Array.
// for (int i = 0; i < 4; i++)
// {
//     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
// }
 
// Quick quiz: Do the same thing using while loop;

int totalmarks[5];
totalmarks[0] = 344;
totalmarks[1] = 556;        // Memory allocation stored from 0 in C++;
totalmarks[2] = 222;
totalmarks[3] = 221;
totalmarks[4] = 443;
cout<<"The total marks are "<<endl;
int i=0;
while(i<5){
cout<<"The value of total marks "<<i<<" is "<<totalmarks[i]<<endl;
i++;
}

    return 0;
}