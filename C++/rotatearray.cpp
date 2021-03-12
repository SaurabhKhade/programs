#include<iostream>
using namespace std;

int main()
{
    int n,r;
    int a[1000];
    cin>>n>>r;

    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }

    for(int i=0;i<r;i++)
    {
        a[n+1]=a[0];
        a[0]=a[1];
    }
    
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }


    return 0;
}