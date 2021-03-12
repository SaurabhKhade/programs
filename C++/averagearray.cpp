#include<iostream>
using namespace std;

int main()
{
    int a[50],n;
    float sum=0;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {
        sum=sum+=a[i];
    }
    cout<<"Average of an array is : "<<sum/n;
    return 0;
}