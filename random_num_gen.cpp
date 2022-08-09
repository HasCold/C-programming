#include<iostream>
#include<random>
#include<ctime>

using namespace std; 

int main()
{
    //    *****************RANDOM NUMBER GENERATOR*********

    int num;   // time(0) means time seconds ma return krta ha.
    srand(time(0));          // rand() aur time() functions hamare header file ma se arahe ha.
    num = rand()%100 + 1;  // Generates the random number between 1 and 100.    
    
    cout<<"The numbeer is "<<num<<endl;


    return 0;
}