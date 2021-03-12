// Inline function 
//program to find area of tringle

#include<iostream>
using namespace std;

inline float area(float height ,float base)
{
    return (height*base)/2;
}

int main ()
{
    float h,b;
    cout<<"Entar height and base of a rectangle "<<endl;
    cin>>h>>b;
    float a=area(h,b);
    cout<<"Area of a rectangle is "<<a;
    return 0;
}
