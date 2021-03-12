#include<iostream>
using namespace std;

double product(double ,double);

int main()
{
    int num1,num2;
    cout<<"Enter a number to give product"<<endl;
    cin>>num1>>num2;

    int prd=product(num1,num2);

    cout<<"Product is : "<<prd<<endl;
}

double product(double a,double b)
{
    return a*b;
}