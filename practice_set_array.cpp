// #include<iostream>
// using namespace std; 

// int main()
// {
//     int arr[10];
//     int *ptr = &arr[0];
//     ptr = ptr + 2;
//     if(ptr==&arr[2]){
//        cout<<"These points to the same location in memory "<<endl;
//     }
// else{
//     cout<<"These points do not  on the same location in memory "<<endl;
// }

//     return 0;
// }

// #include<iostream>
// using namespace std; 
// Write a program to create an array of 10 integers and store multiplication table of 5 in it.

// int main()
// {
//     int num[10];
//     for (int  i = 0; i < 10; i++)
//     {
//         num[i] = 5*(i+1);
//         cout<<"5 x "<<i+1<<" = "<<num[i]<<endl;

//     }

//     return 0;
// }

// Q Repeat problem 3 for a general input provided by the user using cin;

// #include<iostream>
// using namespace std; 

// int main()
// {
//     int num[10];
//         int n;
//         cout<<"What table do you want? "<<endl<<"Enter the that number "<<endl;
//         cin>>n;
//     for (int i = 0; i < 10; i++)
//     {
//         int num[i] = {n*(i+1)};
//     cout<<n<<" x "<<i+1<<" = "<<n*(i+1)<<endl;
    
//     }
//     return 0;
// }


// // Write a program containing a function which reverses the array passed to it;
// #include<iostream>
// using namespace std; 

// void reverse(int *arr, int n); // Function Prototype

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};   // int *arr = arr; value contains
//     reverse (arr, 8);     // Function call;
// for (int i = 0; i<8; i++){
// cout<<"The value of element "<<i+1<<" is "<<arr[i]<<endl;
// }
//     return 0;
// }
// // Function Definition;
// void reverse(int *arr, int n){
// for (int i = 0; i < n; i++)
// {
//      arr[i] = n - i ; 
// }
// }

// Q Write a program containing functions which counts the number of positive integers an array;  

// #include<iostream>
// using namespace std; 

// // Function to calculate positve number;
// int count_num(int *arr, int n){
//       int positivenum = 0, negativenum = 0, zero = 0;
//       for (int i = 0; i < n; i++)
//       {
//         if (arr[i] > 0){    
                               
//        positivenum++;
//         }
//         if ( arr[i]<0)
//         {
           
//             negativenum++;
//         }
//                 if(arr[i]==0){
              
//                    zero++;
//                 }
//       }
//       cout<<"Count positive number:- "<< positivenum++ <<endl;
//             cout<<"Count negative number:- "<< negativenum++ <<endl;
//                    cout<<"Count zero number:- "<< zero++ <<endl;
// return positivenum, negativenum, zero;
// }

// void printarray(int *arr, int n){
//     cout<<"Array:- ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<", "<<endl;
//     }
    
// }

// int main()
// {
//    int arr[] = {2, 33, -4, 0, -7, 56, 1};
//    int n = 7;
//    printarray(arr, n);
// count_num(arr, n);

//     return 0;
// }


// Q Create an array of size 2D(3 x 10) containing multiplication tables of the number 2, 7 and  9 respectively.

// #include<iostream>
// using namespace std; 

// void printtable(int *table, int num, int n){
//     cout<<"The multiplication table of "<<num<<endl;
    
//     for (int i = 0; i < n; i++)
//     {
//         table[i] = num*(i+1);
//         cout<<num<<" X "<<i+1<<" = "<<table[i]<<endl;
//     }
// cout<<"-------------------------------- \n \n"<<endl;
// }
// int main()
// {
//     int table[3][10];  // mane 3 dafa, 1D array banaye jis ka size 10 ha table([0][1][2], size[10]); 
//     int a, b, c;        //Just like a matrix form
//     cout<<"Enter your three require number that you want to see for the multiplication table "<<a<<b<<c<<endl;
//     cin>>a>>b>>c;
//     // cin>>b;
//     // cin>>c;
//     printtable(table[0], a, 10);
//     printtable(table[1], b, 10);
//     printtable(table[2], c, 10);

//     return 0;
// }

// Q Create a three diemensional array and print the address of its element in increasing order;

#include<iostream>
using namespace std; 

int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 3; j++){
    for (int k = 0; k <4; k++){
         cout<<"The address of "<<"arr["<<i<<"]["<<j<<"]["<<k<<"] is "<<&arr[i][j][k];
        //  cout<<"The address of "<<"arr["<<i<<"]["<<j<<"]["<<k<<"] is "<<&arr[i][j][k]<<endl;         
         cout<<endl;
                 // & (address of) operator;
    }
            }
    }
    
    return 0;
}