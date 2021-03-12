/*
2. Raising a number n to a power p is the same as multiplying n by itself p times. Write a
function called power ( ) that takes a double value for n and an int value for p, and returns the
result as double value. Use a default argument of 2 for p, so that if this argument is omitted,
the number will be squared. Write a main ( ) function that gets values from the user to test
this function.
*/


#include<iostream>
#include<math.h>
using namespace std;

int power(double n,int p=2)
 {
    // double sum=1;
    // for(int i=0;i<p;i++)
    // {   
    //           sum=sum*n;
    // }
    // return sum;
    
        return pow(n,p);

}

int main()
{
    double n;
    int p;
    cout<<"Enter a value of n and p"<<endl;
    cin>>n>>p;
    cout<<"Value is : "<<power(n,p)<<endl;
}