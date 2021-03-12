#include<iostream>
using namespace std;

int main()
{
    int m=4,n=4;
    int eles[m][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"["<<i<<"]["<<j<<"]"<<" = "<<eles[i][j]<<endl;
        }
    }

    return 0;
} 