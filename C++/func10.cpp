//Recursive function
//Fibbonaci number at a given location 

#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    return fib(n-1)+fib(n-2);

}

int main()
{
    int number;
    cout<<"Enter a position  "<<endl;
    cin>>number;
    cout<<"Position at "<<number <<" is "<<fib(number);
    return 0;
}