/*
Name: Saurabh Khade
CSE Student
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
	string str;
	int z=0,o=0;
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='z')
		{
			z++;
		}
		else
		{
			o++;
		}
	}
	if(z*2==o)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}