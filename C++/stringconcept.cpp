// String concept

#include<iostream>
#include<String>
#include<cstring>
using namespace std;

int main()
{
    string s,p,a;   
    cout<<"Enter a name"<<endl;
    getline (cin,s);
    cout<<"Enter another name"<<endl;
    cin>>p;
    cout<<"First string :"<<s<<endl;
    cout<<"Concatination of two strings is : "<<s+p<<endl;
    cout<<"Second character of second strinfg is : "<<p[1]<<endl;
    cout<<"Length of  first  strings is : "<<s.size()<<endl;
    p[2]='J';
    cout<<"Second digit of second strinfg after changing one character is : "<<p<<endl;
    cout<<s;
    a=s;                 //copy
    cout<<a;
    return 0;
}