/*
Name: Saurabh Khade
CSE Student
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int test,length,count=0;
	string str;
	cin>>test;
	while(test--)
	{
		cin>>length>>str;
		for(int i=0;i<length-1;i++)
		{
			if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
			{
				if(str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u')
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
		count=0;
	}
}