#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    cout<<"Enter array elements "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Max number is "<<max(arr[i]);
    return 0;
}