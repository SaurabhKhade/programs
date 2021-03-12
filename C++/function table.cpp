#include<iostream>
using namespace std;

int table(int n);

int main()
{
    int n;
    cout<<"Enter a number to print table "<<endl;
    cin>>n;
    table(n);
    return 0;

}

int table(int n)
{
    for(int i=1;i<11;i++)
    {
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }
}