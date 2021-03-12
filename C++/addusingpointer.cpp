// Program to add two number using pointer. 
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;

    int *c= &a,*d=&b;
    cout<<"Sum is "<<*c+*d<<endl;

    
    return 0;
    
}