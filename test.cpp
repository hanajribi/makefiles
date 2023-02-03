#include <stdio.h>
#include <iostream>
using namespace std;

void  check (int n){

    for (int i = 1; i < n; i++)
    {
       
        if (i%3 == 0) {
             cout<<"Fizz";
             if (i%5 ==0)
              {
               cout<<"Buzz";
              }
        }
        else if (i%5 ==0)
              {
               cout<<"Buzz";
              }
     
        else
            cout <<i;
            cout<<endl;
    }
    
}



int  main(){

    int n=100;
    check(n);
    return 0;

}