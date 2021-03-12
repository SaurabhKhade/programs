#include<iostream>
using namespace std;

int sort(int *,int n);
int display(int *,int n);
int main()
{
    int arr[50], n;

    cout<<"Enter size of an array"<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    sort(arr,n);
    display(arr,n);

    return 0;
}

int sort(int *a ,int n)
{
    int temp=0,i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
}

int display(int *a ,int n)
{ 
    cout<<"Array After sorting in ascending order : ";
    for(int i=0;i<n;i++)
          cout<<a[i]<<" ";
}