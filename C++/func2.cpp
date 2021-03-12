#include<iostream>
using namespace std;

typedef unsigned short Ushort;                        //Another method simplifying type identifier using typedef
                                                     //the words unsigned short is simplified to Ushort

Ushort area(Ushort length,Ushort breadth);              // Function  prototype                                       

int main()
{
    Ushort ylength;
    Ushort ybreadth;
    Ushort totalarea;

    cout<<"Enter length of an yard"<<endl;
    cin>>ylength;
    cout<<"Enter breadth of an yard "<<endl;
    cin>>ybreadth;

     totalarea =area(ylength ,ybreadth);
    cout<<"Area of an yard is : "<<totalarea<<endl;

    return 0;


}

Ushort area(Ushort length ,Ushort breadth)
{
    return length*breadth;
}