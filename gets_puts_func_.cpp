#include<iostream>
using namespace std; 

int main()
{
    // char *ptr = "Hasan Bhai \n"; Both are same
    char ptr[] = "Hasan Bhai \n";
cout<<ptr<<endl;

char s[35];
cout<<"Enter your name "<<endl;
gets(s); // To recieve a multi word string; gets() function ham input k liye use karenge;
puts(s);
cout<<"Your name is "<<s<<endl;
    return 0;
}