#include<iostream>
using namespace std;

int fact(int n)
{
    if(n<2)
    {
        return 1;
    }

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter number to find factorial "<<endl;
    cin>>n;
    int f=fact(n);
    cout<<"Factorial is "<<f;
}