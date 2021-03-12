#include<iostream>
using namespace std;
struct student 
{
    int rno;
    char name[10];
};
int main()dff
{
    struct student n;
    struct student *n1;

 // cin>>n.rno;
 cout<<"Enter Name "<<endl;
 cin>>n.name;

  n.rno=2045;
  //n.name="ATHARV"  to this we have to declare name as pointer  (*name ) in structure..
 n1=&n;
  
   cout<<"Number is "<<n1->rno<<endl;
    cout<<"Name  is "<<n1->name;


  return 0;
}