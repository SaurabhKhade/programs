/*
1. Write a program to find out the gross amount from the given basic pay.
Gross = Basic + DA + HRA
DA & HRA can be calculated as follows: -
If Basic Pay is greater than or equal to 8000 DA is 20% of Basic Pay & HRA is 25% of Basic
Pay, otherwise DA is 15% of Basic Pay & HRA is 20% of Basic Pay.
Using three functions input, calculate and display.
*/

#include<iostream>
using namespace std;

double pay,da,hra;

void input()
{
    cout<<"Enter basic pay"<<endl;
    cin>>pay;
}

int calculate()
{
    if(pay>=8000)
    {
    da=pay*0.2;
    hra=pay*0.25;
    }
    else 
    {
        da=pay*0.15;
        hra=pay*0.2;
    }

    
}
void display()
{
    cout<<"Totay Salary = "<<pay+da+hra<<endl;
}

int main()
{
input();
calculate();
display();
return 0;
}