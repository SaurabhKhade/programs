#include<iostream>
using namespace std;

void table(int n);

int main()
{
    int n;
    cout<<"Enter a number to print table "<<endl;
    cin>>n;
    table(n);
    return 0;

}

void table(int n)
{
    for(int i=1;i<11;i++)
    {
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }
}