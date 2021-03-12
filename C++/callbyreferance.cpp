#include<iostream>
using namespace std;

int swap(int &a,int &b)
{
    
    int temp=a;
    a=b;
    b=temp;
}



int main()
{
    int c,d;
    cout<<"Enter two numbers "<<endl;
    cin>>c>>d;
   cout<<"Value Before swapping "<<c<<" "<<d<<endl;

    swap(c,d);
    
    cout<<"Value aftrer swapping "<<c<<" "<<d;

    return 0;
}