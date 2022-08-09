#include<iostream>
#include<cstring>
using namespace std; 

int main()
{
    char *str = "Hasan";
    char store[200];   
    strcpy(store, str); // strcpy ===>> for copy the content of second string into the first string;
    cout<<"Now the store value is "<<store<<endl;
    cout<<" \n "<<endl;


char s1[34] = "Hello";
char s2[] = "Hasan";
strcat(s1,s2);  // This function is used to concatenate two functions;   
cout<<"Result is "<<s1<<endl;

    return 0;
}