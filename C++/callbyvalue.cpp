#include<iostream>
using namespace std;

int add(int a,int b)
{
    
    int sum=a+b;
    return sum;
}

int sub(int a,int b)
{
    int min=a-b;
    return min;
}

int main()
{
    int c,d;
    cout<<"Enter two numbers "<<endl;
    cin>>c>>d;
    int i=add(c,d);
    int j=sub(c,d);
    cout<<"Sum of "<<c<<" & "<<d<<" is "<<i<<endl;
    cout<<"Sum of "<<c<<" & "<<d<<" is "<<j<<endl;

    return 0;
}