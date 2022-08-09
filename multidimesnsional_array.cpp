#include<iostream>
using namespace std; 

int main()
{
    // An array can be of 2 dimensional/ 3 diemensional/ n diemensional;
int n_students = 3;
int n_subject = 5;
int marks[3][5];   // 2 diemensional array;

for (int  i = 0; i < n_students; i++)
{for (int j = 0; j < n_subject; j++)
{
    cout<<"Enter the marks of students "<<i + 1<<" in subject "<<j + 1<<" is ";
    cin>>marks[i][j];
}

}

for (int  i = 0; i < n_students; i++)
{for (int j = 0; j < n_subject; j++)
{
    cout<<"You have entered the marks of students "<<i + 1<<" in subject "<<j + 1<<" is "<<marks[i][j]<<endl;
}

}
    return 0;
}