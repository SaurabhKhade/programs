// Use of multiple return 

#include<iostream>
using namespace std;

int great(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}

int main()
{
    int n1,n2;
    cout<<"Enter two numbers to find greater one "<<endl;
    cin>>n1>>n2;
    int g=great(n1,n2);
    cout<<"Greater among both is "<<g<<endl;
    return 0;
}