// Demonstrates multiple return statements

#include<iostream>
using namespace std;

long int square(long int);

 int main()
{
    long double n,number;
    cout<<"Enter number to be squared "<<endl;
    cin>>n;
    number=square(n);
    cout<<"Number after squred : "<<number<<endl;
    return 0;
}

long int square(long int n)
{
    if(n<100000)
    return n*n;
    
    else
    {
        cout<<"Please enter number below than 100000 "<<endl;
        return -1;
    }
}
