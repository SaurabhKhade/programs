/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


﻿﻿#include <iostream>
#include <string>
using namespace std;
void swap(char* a,char* b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{	
	int i=0,j=0;
	string str1;
	string str2;
	cin>>str1>>str2;
	for(int n:str1)
	{
		i++;
	}
	for(int n:str2)
	{
		j++;
	}
	cout<<i<<" "<<j<<endl;
	cout<<str1+str2<<endl;
	swap(&str1[0],&str2[0]);
	cout<<str1<<" "<<str2;
}
