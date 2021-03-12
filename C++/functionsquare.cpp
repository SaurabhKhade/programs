#include<iostream>
using namespace std;

int square(int a)
{
    return a*a;

}

int main  ()
{
    int n;
    cout<<"Enter a number to find square "<<endl;
    cin>>n;
    int s=square(n);
    cout<<"Square of a number is "<<s;
    return 0;
}