#include<iostream>
using namespace std;

float  TaxPay(int amount , const float tax=1.1)      
{
    return amount*tax;  
}

int main()
{
    int amt;
    cout<<"Enter amount "<<endl;
    cin>>amt;
    int a=TaxPay(amt );                    
    cout<<"Tax you have to pay is "<<a;
    return 0;
}