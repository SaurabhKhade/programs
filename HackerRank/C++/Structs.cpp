/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


﻿#include<iostream>
using namespace std;
struct student
{
    int age;
    char name[500];
    char lastname[500];
    int standard;
};
int main()
{
    student data;
    cin>>data.age>>data.name>>data.lastname>>data.standard;
    cout<<data.age<<" "<<data.name<<" "<<data.lastname<<" "<<data.standard;
}
