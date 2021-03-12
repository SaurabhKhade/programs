#include<iostream>
using namespace std;

int sum(int *s,int n);

int main()
{
    int ar[100],n;
    cout<<"Enter size of an array "<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

   
   int s=sum( ar, n);
   cout<<"Sum = "<<s;
   return 0;

}

int sum(int *s,int n)
{
    int i=0,total=0;
    for(i=0;i<n;i++)
    {
        total=total+*(s+i);
    }
    return total;
}