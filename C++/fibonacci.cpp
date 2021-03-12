// Program to print fibonacci series till 100

#include<iostream>
using namespace std;
int main()
{
int f1=1,f2=1,fn=0;
  cout<<f1<<" "<<f2<<" ";
while(fn<100)
{
  fn=f1+f2;
  if(fn<=100)
  cout<<fn<<" ";
  f1=f2;
  f2=fn;
}
return 0;
}
