#include<iostream>
using namespace std;

find(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[0]>a[i])
        {
             a[0]=a[i];
        }
        
    }
    return a[0];

}
int main()
{
    int arr[100],n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    int ele =find(arr,n);
    cout<<"Smallest element in array is "<<ele;

return 0;
}