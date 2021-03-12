// Program to reverse a number
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cout<<"Enter a number"<<endl;
    cin>>n;

    while(n%10!=0)
    {
        a=n%10;
        cout<<a;
        b=n/10;
        n=b;
    }
    return 0;
}