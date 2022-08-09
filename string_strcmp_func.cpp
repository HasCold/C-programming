#include<iostream>
#include<cstring>
using namespace std; 

int main()
{
    char s1[30] = "Heloo"; // Kuyn k L pehle ata ha Z se tu isliye iski value -1 hogi; 
    char s2[] = "Helzo";
    int value = strcmp(s1,s2);
    cout<<"Now the value is "<<value<<endl;
    
    return 0;
}