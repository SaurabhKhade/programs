//  The use of local variable and parameters
// Program to convert temperature celcious to fareignheight

#include<iostream>
using namespace std;

float convert(float);

int main()
{
    float cel,far;
    cout<<"Enter temperature in celcious "<<endl;
    cin>>cel;
    far=convert(cel);
    cout<<"Temperature in Fareignheight : "<<far<<endl;
    return 0;

}

float convert(float cel)
{
    float farh=((1.8)*cel)+32;
    return farh;
}