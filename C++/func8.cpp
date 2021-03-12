//simple random number function generator...

#include<iostream>
#include<stdlib.h>
#include<dos.h>

using namespace std;

int main()
{

cout<<"Random Numbers : "<<endl;
for(int i=0;i<10;i++)    
{
    cout<<rand()<<" "<<endl;
}

cout<<"Random Numbers between 0 to 99 : "<<endl;
for(int i=0;i<10;i++)    
{
    cout<<rand()%100<<" "<<endl;
}

system("pause");
return 0;
}