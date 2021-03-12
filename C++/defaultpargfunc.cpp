#include<iostream>
using namespace std;

float  TaxPay(int amount ,float tax=1.1)      // Here tax is by default 1.1 that is 10 % 
{
    
    
    return amount*tax;
   

}

int main()
{
    int amt;
    cout<<"Enter amount "<<endl;
    cin>>amt;
    int a=TaxPay(amt,1.5);                     //If we dont pass tax value it takes by default as 1.1 
    cout<<"Tax you have to pay is "<<a;
    return 0;
}