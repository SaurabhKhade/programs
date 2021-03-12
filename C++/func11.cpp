//Program to print random numbers..

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    cout<<"Any Random number : "<<rand()<<endl;
    cout<<"Any ten 1 digit Random number : ";
    for(int i=0;i<10;i++)
    {
        cout<<rand()/3300<<" ";
    }
    cout<<endl;

    cout<<" Random number below 100 : "<<rand()/330<<endl;
    cout<<"Any floating point Random number : "<<rand()/33000.0<<endl;
    cout<<"Any 10 floating point Random number : "<<endl;
    for(float i=0;i<10;i++)
     {
         cout<<rand()/33000.0<<" ";
     }


    return 0;
}