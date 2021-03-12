//Pass by value 
//Program to swap two numbers 
//Here copy of a actual parameter is sent to a formal parameter as a arguments so value of actual parameters doses not 
//changes in main function

#include<iostream>
using namespace std;

void swap(int,int);

int main()
{
    int num1,num2;
    cout<<"Enter two numbers to swap "<<endl;
    cin>>num1>>num2;
    swap(num1,num2);
    return 0;
}

void swap(int n1,int n2)                                                         
{
    cout<<"Value before swapping : "<<n1<<" "<<n2<<endl;
    int temp=n1;
    n1=n2;
    n2=temp;
    cout<<"value after swapping : "<<n1<<" "<<n2<<endl;
}