#include<iostream>
using namespace std;

struct employee
{
    char empname[10];
    int empno;
    char empgroup;
}emp[5];

int main()
{
    cout<<"ENTER EMPLOYEE DETAILS : "<<endl;
    for(int i=1;i<3;i++)
    {
        cout<<"Enter employee details of emplyee "<<i<<endl;
        cout<<"Enter employee name : ";
        cin>>emp[i].empname;
        cout<<"Enter employee number  : ";
        cin>>emp[i].empno;
        cout<<"Enter employee group A to Z : ";
        cin>>emp[i].empgroup;

    }

    cout<<endl<<"EMPLOYEE DETAILS : "<<endl;

    for(int i=1;i<3;i++)
    {
        cout<<"Employee details of emplyee "<<i<<endl;
        cout<<"Employee name : ";
        cout<<emp[i].empname<<endl;
        cout<<"Employee number  : ";
        cout<<emp[i].empno<<endl;
        cout<<"Employee group A to Z : ";
        cout<<emp[i].empgroup<<endl;

    }

    return 0;

}