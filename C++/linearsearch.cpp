// Program to perform linear search.
#include<iostream>
using namespace std;
int main()
{
    int a[20],n,k,i,flag=0;
    cout<<"Enter size of an array "<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to find"<<endl;
    cin>>k;

    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Elemennt is present at position"<<" "<<i+1<<endl;
        }
    }
    return 0;
}