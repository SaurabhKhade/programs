#include<iostream>
using namespace std;

insert(int arr[], int position, int arraysize , int usedsize, int element)
{
    int i=0;
    if(position>arraysize)
    {
     return -1;
    }

    for(int i=usedsize-1;i>=position;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[position]=element;
}

display(int arr[], int usedsize )
{
    for(int i=0;i<usedsize;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int arr[50]={2,4,5,6,10};
    int usedsize=5;
    int position=4;

    insert(arr, position, 50, usedsize, 1);
    usedsize +=1;
    display(arr,usedsize);

    return 0;

}