#include<iostream>
#include<cstring>
using namespace std; 

int main()
{
    char *st = "Hasan";  // ye hame string ki length bataye ga excluding the null character
    int a = strlen(st);
    cout<<"The length of string is "<<a<<endl;

    return 0;
}