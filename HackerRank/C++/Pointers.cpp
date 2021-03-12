/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


//https://www.hackerrank.com/challenges/c-tutorial-pointer



#include<iostream>
using namespace std;
void update(int*,int*);
int main()
{
    int a,b;
    int *pa,*pb;
    cin>>a>>b;
    pa=&a;
    pb=&b;
    update(pa,pb);
    cout<<a<<"\n"<<b;
}
void update(int *a,int *b)
{
    int temp1,temp2;
    temp1=*a;
    temp2=*b;
    *a=temp1+temp2;
    if(temp1>temp2)
         *b=temp1-temp2;
    else
         *b=temp2-temp1;
}

