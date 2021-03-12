#include<iostream>
using namespace std;
int a,b;
int main()
{
    int m,n;
    int a[50][50];

    cout<<"Enter rows and column of an array"<<endl;
    cin>>m>>n;

    cout<<"Enter array elements"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[m][n];
        }
    }

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[m][n]<<" ";
        }
    }

    return 0;

}