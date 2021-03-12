#include<iostream>
#include<iomanip>
using namespace std;

class Employee                                                              // class defination 
{
    char name[15];                                                          // Declaring datamembers 
    int id;
    float salary;
    char department;

    public: void getdata();                                                 // Declaring memberfunctions 
            void putdata();

};

void Employee::getdata()                                                   // Function to read values of employee
{
    cout<<"Enter name of Employee"<<endl;
    cin>>name;
    cout<<"Enter Employee id"<<endl;
    cin>>id;
    cout<<"Enter Employee salary"<<endl;
    cin>>salary;
    cout<<"Enter Employee department among A B C"<<endl;
    cin>>department;
}


void Employee::putdata()                                                 // Function to write values of employee
{
    cout<<"Name of Employee : "<<name<<endl;
    cout<<"Employee id : "<<id<<endl;
    cout<<"Employee salary : "<<salary<<endl;
    cout<<"Employee department among A B C : "<<department<<endl;
}

int main()
{
    Employee e1,e2;                                                        // Creating a objects e1 and e2
    cout<<"Enter Details of first Employee"<<endl;
    e1.getdata();                                                          // Function call for e1 to read data
    cout<<"Enter Details of second Employee"<<endl;
    e2.getdata();                                                          // Function call for e2 to read data
    cout<<endl<<"Details of the first employee : "<<endl;
    e1.putdata();                                                          // Function call for e1 to write data
    cout<<endl<<"Details of the Second employee : "<<endl;
    e2.putdata();                                                           // Function call for e2 to write data

    return 0;
}