#include<iostream>
using namespace std; 

typedef struct employee   // structures jab ham ak aisa user defined data type banana chate ha jis ke andr ki entities 
{                   // alag alag data type se milkr bani ha   
    /* data */
    int id;
    char favChar;        // typedef kisi bhi data type ka name change krdeta ha
    float salary;        // If we use typedef function and put the alternate small name at the end of a bracket like 
}emp;                    // we use emp; So both has been used;
                        

// Unions are same as structures but they provide better memory management.

union money   // structures jab ham ak aisa user defined data type banana chate ha jis ke andr ki entities 
{                   // alag alag data type se milkr bani ha   
    /* data */
    int rice; // 4 bytes;
    char car; // 1 bytes;
    float pounds;  // 4 bytes ;    // If we use typedef function and put the alternate small name at the end of a bracket like 
};
int main()
{
    // Structures, Unions & Enum are user-defined data type 

enum Meal{breakfast, lunch, dinner};  // In C++ Breakfast lunch dinner is now our  data-type 
Meal m1 = lunch;
cout<<m1<<endl;
cout<<breakfast;
cout<<lunch;
cout<<dinner;

// struct employee hasan;
// emp hasan;
// union money m1;
// m1.rice = 34;      // ak time pr ak hi value chalegi jaise yahan pr rice ki value overwrite hogayi aur output ma garbage value print 
// m1.car= 'c';          // hogi rice ki aur car ki value sahi milegi;
// cout<<m1.car<<endl;
// hasan.id = 5;
// hasan.favChar = 'h';
// hasan.salary = 4200000;
// cout<<"I.D. Number = "<<hasan.id<<endl;
// cout<<"Favourite Character = "<<hasan.favChar<<endl;
// cout<<"Salary = "<<hasan.salary<<endl;

    return 0;
}