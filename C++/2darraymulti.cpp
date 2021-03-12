#include<iostream>
using namespace std;
int main()
{
    int m=2,n=2,p=2,q=2;
    int a[m][n]={{1,2},{3,4}};
    int b[p][q]={{5,6},{7,8}};
    int c[2][2]={0};

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
              {
                    c[i][j]+=a[i][j]*b[i][j];
              }
        }

    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;

    }

}
