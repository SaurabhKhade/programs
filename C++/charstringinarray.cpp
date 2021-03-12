#include<iostream>
using namespace std;

int main()
{
    char fletter[10];
    int n;
    cout<<"Enter size of an character array"<<endl;
    cin>>n;
    cout<<"Enter a characters"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>fletter[i];
    }
     for(int i=0;i<n;i++)

    cout<<fletter[i]<<endl;
    return 0;
}