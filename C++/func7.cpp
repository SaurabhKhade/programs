//Demonstrates the use of default parameter values

#include<iostream>
using namespace std;

int volume(int length ,int height=10,int widht=15);

int main()
{
    int l=20,h=25,w=30;
    cout<<"First call passing all the three length  height and width "<<endl;
    cout<<"Volume of a cuboid is "<<volume(l,h,w)<<endl;
    cout<<"Second  call passing the value of length and height value of width  it takes by default as 15 "<<endl;
    cout<<"Volume of a cuboid is "<<volume(l,h)<<endl;
    cout<<"Third call just passing the value of length,  height width value it takes by default as 10 and  15 "<<endl;
    cout<<"Volume of a cuboid is "<<volume(l)<<endl;
}

int volume(int length,int height,int width)
{
    return length*height*width;
}