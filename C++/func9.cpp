#include<iostream>
using namespace std;

long fact(long);

int main()
{
    long n;
    cout<<"Enter number to find factorial till that number "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ! = "<<fact(i)<<endl;
    }
    return 0;
}

long fact(long n)
{ 
    if(n<2)
    {
        return 1;
    }
    else 
    return (n*fact(n-1));
}
