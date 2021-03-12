#include<iostream>
#include<math.h>
using namespace std;

int sum(int a[3][3] ,int m,int n)
{
    int total =0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             total=total+pow(a[i][j],2);
        }
    }
    return sum;
}


int main()
{
    int m=3,n=3;
    int arr[m][n]={{5,6,8},{1,9,7},{3,6,8}};
    
    int sum1 ;
    sum1= sum(arr,m,n);
    
    cout<<"square root of the sum of the squares of all the elements is "<<sqrt(sum1);

return 0;
}