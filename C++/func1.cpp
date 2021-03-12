#include<iostream>
using namespace std;

void funcone();
int functwo();
void functhree(int,int);
float funcfour(float ,float);

int main()
{
    cout<<"First function Recives nothing Returns nothing : ";
    funcone();
    cout<<"Second function Recices nothing Returns something : ";
    int sum =functwo();
    cout<<sum<<endl;
    cout<<"Third function Recives some thing returns nothing : ";
    functhree(5,9);
    cout<<"Fourth function Recives something and returns something : " ;
    float sub=funcfour(5,2);
    cout<<sub;
}

void funcone()                                  
{                                   
    cout<<"Hello "<<endl;

}

int functwo()
{
    int a=10,b=20;
    return a+b;
}

void functhree(int a,int b)
{  
    cout<<"product of a & b is : "<<a*b<<endl;
}

float funcfour(float a,float b)
{ 
    return a-b;
}

