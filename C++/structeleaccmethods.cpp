#include<iostream>
using namespace std;

struct student
{
    char *name;
    int rno;
    char div;

};

int main()
{
   struct student s;
   struct student *ptr;
  s.name="Atharv";
  s.rno=2045;
  s.div='A';
  ptr = &s;

  cout<<"Diffrent methods of accessing elements : "<<endl;
  
  cout<<" s.name : "<<s.name<<endl;
  cout<<" ptr->name : "<<ptr->rno<<endl;
  cout<<"(*ptr).div : "<<(*ptr).div<<endl;

  return 0;
}