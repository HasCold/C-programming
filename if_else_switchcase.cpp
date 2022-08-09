#include<iostream>
using namespace std;

int main()
{         
    /*    ***********Selection Control Structure*********    
     If else statement , If else ladder statement,  Switch-case statement */
    int age;
    cout<<"What is your age "<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<"You can not enter in the party "<<endl;
    
    }
    else if (age==18)
    {
        cout<<"You can enter in the party with a kid pass "<<endl;
    }
    else{
        cout<<"You can enter in the party "<<endl;
    }

    
    // switch case statement
    switch (age)    // ma jis ki value ko cases ma batna chata hu uski variable likh doga switch k andr
    {
    case 18:
        cout<<" You are 18 "<<endl;
         break;  // break ka matlb tm jahan pr ho usko swicth statemnt se tod kr bahr nikal jao;
    
    case 22:
        cout<<" You are 22 "<<endl;
         break;  // break ka matlb tm jahan pr ho usko swicth statemnt se tod kr bahr nikal jao;
    
    case 2:
        cout<<" You are 2 "<<endl;
         break;  // break ka matlb tm jahan pr ho usko swicth statemnt se tod kr bahr nikal jao;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Thankyou for patience, Enjoy your party "<<endl;

    return 0;
}
