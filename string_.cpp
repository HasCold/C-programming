#include<iostream>
using namespace std; 


int main()
{
    //  char str[] = { 'H', 'a', 's', 'a', 'n', '\0'};
    //  cout<<"Your name is "<<str<<endl;
    char str[] = "Hasan"; 
char *ptr = str;
while(*ptr != '\0')   // humisko print karenge jab tak *ptr null character k barabar na hogae; jaise hi *ptr ki value 
{            // nullcharacter k barabar hoage gi tu loop terminate hoage ga;
    cout<<*ptr;
    ptr++;
}



    return 0;
}