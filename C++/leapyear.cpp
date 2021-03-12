// Program to check given year is leap year or not
#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter year"<<endl;
    cin>>y;



        if(((y%100!=0) &&(y%4==0)) || (y%400==0))

        cout<<"Given year is leap year"<<endl;



    else
    {
    cout<<"Given year is not a leap year"<<endl;

    }
    return 0;
}
