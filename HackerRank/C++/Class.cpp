/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


﻿﻿#include<iostream>
#include<cstring>
using namespace std;
class student
{
    private:
        int age,standard;
        char first_name[100],last_name[100];
    public:
        void get_age()
        {
            cout<<age;
        }
        void set_age(int a)
        {
            age=a;
        }
        void get_first_name()
        {
            cout<<first_name;
        }
        void set_first_name(char sample[100])
        {
            strcpy(first_name,sample);
        }
        void get_last_name()
        {
            cout<<last_name;
        }
        void set_last_name(char sample[100])
        {
            strcpy(last_name,sample);
        }
        void set_standard(int a)
        {
            standard=a;
        }
        void get_standard()
        {
            cout<<standard;
        }
        void to_string()
        {
            cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
        }
};
int main()
{
    student data;
    int age,standard;
    char name[100],lastname[100];
    cin>>age>>name>>lastname>>standard;
    data.set_age(age);
    data.set_first_name(name);
    data.set_last_name(lastname);
    data.set_standard(standard);
    data.get_age();
    cout<<"\n";
    data.get_last_name();
    cout<<", ";
    data.get_first_name();
    cout<<"\n";
    data.get_standard();
    cout<<"\n\n";
    data.to_string();
}
