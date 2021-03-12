//  Demonstrating local and global variable
// Variable scope within a block
//Use of scope resolution
#include<iostream>
using namespace std;
int a=10;                       //Global variable

int scope();

int main()
{
    int x=20;
   cout<<"Value of x inside main function before calling function  = "<<x<<endl;
   scope();
    cout<<"Value of x inside main after calling function function is : "<<x<<endl;           //after calling function
    cout<<"value of global a = "<<a<<endl;
    int a=30;
    cout<<"Value of local a is : "<<a<<endl;
    cout<<"Value of a using scope resolution operator is "<<::a<<endl;                      // Access global variable using scope resolution operator
                                                                                             // it resolvres scope..           
}

int scope()
{
    int x=50;
    cout<<"Value of x inside scope function is : "<<x<<endl;
}