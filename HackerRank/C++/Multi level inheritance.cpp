/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


﻿﻿#include <iostream>
using namespace std;
class Triangle
{
	public:
		void tri()
		{
			cout<<"I am a triangle"<<endl;
		}		
};

class Isosceles:public Triangle
{
	public:
		void iso()
		{
			cout<<"I am an isosceles triangle"<<endl;
		}
};

class Equilateral:public Isosceles
{
	public:
		void Equ()
		{
			cout<<"I am an equilateral triangle"<<endl;
			iso();
			tri();
		}
};

int main()
{
	Equilateral E;
	E.Equ();
}
