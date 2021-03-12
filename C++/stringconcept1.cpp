#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1= "Hello there ";                      // intitilization 
    string s2("How are you..?");
    cout<<s1+s2<<endl;

    if(s1.compare(s2)==0)
    cout<<"Strings are equal"<<endl;
    else
     cout<<"Strigs are not equal"<<endl;

    s1.insert(12,"buddy");
    cout<<"String after inserting : "<<s1;

    return 0;
}