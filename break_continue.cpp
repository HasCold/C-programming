#include<iostream>
using namespace std; 

int main()
{
    // for(int i=0; i<5; i++){

    //     cout<<i<<endl;
    //     if (i==2)
    //     {
    //         break;          // break loop ke bahr agayega condition as per.
    //     }
        
    // }


     // ***************Continue*******
    
    for (int  i = 0; i < 40; i++)
    {
        if(i==2){
            continue;          // continue hamari 2 ki alteration ko skip krdega baki sari run hoti rahi ge
        }                      // It means print 1-39 without 2  
        cout<<i<<endl;

    }
    

    return 0;
}