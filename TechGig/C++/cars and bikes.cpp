/*
Name : Saurabh Khade
CSE Student
*/

#include<iostream>
using namespace std;
class Vehicle
{
	public:
	virtual void display()
	{
		cout<<"This is a Vehicle"<<endl;
	}
};
class Car:public Vehicle
{
	public:
	void display()
	{
		cout<<"This is a Car"<<endl;
	}
};
class Bike:public Vehicle
{
	public:
	void display()
	{
		cout<<"This is a Bike"<<endl;
	}
};
int main()
{
	Vehicle* obj;
	int n;
	cin>>n;
	if(n==2)
	{
		obj=new Bike;
	}
	else
	{
		obj=new Car;
	}
	obj->display();
}