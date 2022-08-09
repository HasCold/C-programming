#include<iostream>
using namespace std; 

    /*Write a 2-D array by taking input from the user. write a display function to print the content of this 2-D array 
    on the screen*/ 

  void display(int num1, int num2){
     int marks[num1][num2];
   for (int i = 0; i < num1; i++)
   {
    for (int j = 0; j < num2; j++)
    {
        cout<<"You have entered the marks of student "<<i+1<<" in subject "<<j+1<<" is "<<marks[i][j]<<endl;

            }  
  }
  }
  
int main()
{
   int a, b;
   int i, j;
   cout<<"Enter the number of students "<<endl;
   cin>>a;
cout<<"Enter the number of subjects "<<endl;
   cin>>b;
   int marks[a][b];
   for (int i = 0; i < a; i++)
   {
    for (int j = 0; j < b; j++)
    {
        cout<<"Enter the marks of student "<<i+1<<" in subject "<<j+1<<" is ";
        cin>>marks[i][j];
    }
    
   }
   display(a, b);
    return 0;
}