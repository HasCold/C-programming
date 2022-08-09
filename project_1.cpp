#include<iostream>
#include<random>
#include<ctime>

using namespace std; 

 // **************PROJECT 1**************
int main()
{
    //    *****************RANDOM NUMBER GENERATOR*********

    int num, guess, nguesses=1;                    // time(0) means time seconds ma return krta ha.
    srand(time(0));             // rand() aur time() functions hamare header file ma se arahe ha.
    num = rand()%50 + 1;       // Generates the random number between 1 and 100.    
                        // Division modular opeartor gives the remainder;
    cout<<"The numbeer is "<<num<<endl;

   // Keep running the loop until the number is guessed.

   do{
       cout<<"Guess the number between 1 to 50 \n"<<guess<<endl;
       cin>>guess;
   if(guess>num){
       cout<<"Lower number please! "<<endl;
   }
   else if(guess<num){
       cout<<"Higher number please! "<<endl;
   }
   else{
       cout<<"You guessed it in "<<nguesses<<" attempts \n"<<endl;
   }
   nguesses++;
   }while(guess!=num);

    return 0;
}