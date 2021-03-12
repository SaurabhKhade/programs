#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int m=3,n=3;
    int arr[m][n]={{5,6,8},{1,9,7},{3,6,8}};

    int sum =0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             sum=sum+pow(arr[i][j],2);
        }
    }
    
    cout<<"Sum of all elements is "<<sum<<endl;
    cout<<"square root of the sum of the squares of all the elements is "<<sqrt(sum);

return 0;
}