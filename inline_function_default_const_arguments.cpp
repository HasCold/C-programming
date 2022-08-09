#include<iostream>
using namespace std; 

// inline int product(int a, int b){   // Inline function ka use tab karna ha jab hamare function ma line of code na k barabar ho;
// Not recommended to use below lines with  inline function 
    // static int c = 0; // This execute only at once (static varaible);   
    // c = c + 1;  // Next time this function is run, the value of c will be retained; 
    // return a*b;                 
// }
float Moneyrecieved(int Currentmoney, float factor=1.06){ // Default arguments simply wo hoti ha jo apko BY-DEFAULT
    return Currentmoney*factor;                           // milti ha like here factor = 1.06 in our function; 
} // Shru ma ap wo arguments likhe jo compulsory ha baad ma ap default arguments likhe;

// int strlen(const char *p){}
int main()
{
    // int a, b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
int money;
cout<<"Enter your current balance "<<endl;
cin>>money;
cout<<"If you have "<<money<<" Rs in your account then you will get "<<Moneyrecieved(money)<<" Rs after 1 year"<<endl;
cout<<"FOR VIP MEMBERS: If you have "<<money<<" Rs in your account then you will get "<<Moneyrecieved(money,1.12)
<<" Rs after 1 year"<<endl;

    return 0;
}