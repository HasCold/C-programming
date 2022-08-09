#include<iostream>
#include<cstring>
using namespace std; 

// ******************* HEART PATTERN *********************** 

int main()
{
    int i, j, n;
    char name[50];
    int len;

cout<<"Follow the instruction below"<<endl;
    cout<<"Enter your name:- ";
    gets(name);

    cout<<"Enter any one number 30 or 40 or 50 n:- ";
    cin>>n;
    len = strlen(name);

    // Print upper part of the heart shape;

    for (int  i = n/2; i <= n; i+=2)
    {
      for (j = 1; j < n-i; j+=2)
      {
          cout<<" ";
      }
      for (j = 1; j <= i; j++)
      {
          cout<<"*";
      }
      for (j = 1; j <= n-i; j++)
      {
          cout<<" ";
      }
      for (j = 1; j <= i; j++)
      {
          cout<<"*";
      }
      cout<<"\n";
    }
    

    // Print lower triangular part of the pattern;

    for ( i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
      {
          cout<<" ";
      }
    // Print the name
    if (i==n)
    {
        for ( j = 1; j <= (n*2-len)/2; j++)
        {
            cout<<"*";
        }
        cout<<name;
        for ( j = 1; j < (n*2-len)/2; j++)
        {
           cout<<"*";
        }
    }
    else{
        for ( j = 1; j <= (i*2)-1; j++)
        {
            cout<<"*";
        }
        
    }
    cout<<"\n";
    
    }
    int z;
    cout<<"Insert the End:- "<<endl;
    cin>>z;
    return 0;
}