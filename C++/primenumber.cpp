// program to check number is prime or not
#include<iostream>
using namespace std;
int main()
{
 int n,i,flag=0;
 cout<<"Enter a number "<<endl;
 cin>>n;
 for(i=2;i<=n;i++)
{
  if(n%i==0)
  {
    flag=1;
    break;
  }
  else 
  {
      flag=0;
  }
}
if(flag=1)
cout<<"Number is not prime"<<endl;
else if(flag==0)
cout<<"Number is prime"<<endl;
return 0;
}
