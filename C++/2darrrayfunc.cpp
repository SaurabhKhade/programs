#include<iostream>
using namespace std;

void parray(int a[][3]);

int main()
{
    int arr1[3][3]={{1,2,3},{7,3,4},{7,3,4}};
     int arr2[3][3]={{5,2,4},{3,5,4},{7,8,9}};
      int arr3[3][3]={{1,2,1},{6,3,4},{5,6,9}};

      cout<<"First array is : "<<endl;
        parray(arr1);
      cout<<"second array is : "<<endl;
              parray(arr2);
      cout<<"third array is : "<<endl;
           parray(arr3);

return 0;
} 

void parray(int a[][3])
{

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}

