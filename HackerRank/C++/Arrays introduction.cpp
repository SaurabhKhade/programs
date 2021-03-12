/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    cin>>array[i];
    j=n-1;
    for(i=0;i<j;i++)
    {
         temp=array[j];
         array[j]=array[i];
         array[i]=temp;
         j--;
    }
    for(i=0;i<n;i++)
    cout<<array[i]<<" ";
}


