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
	int L,N,W,H;
	string str;
	cin>>L;
	cin>>N;
	while(N--)
	{
		cin>>W>>H;
		if(W<L || H<L)
		{
			str="UPLOAD ANOTHER";
		}
		else if(W==H)
		{
			str="ACCEPTED";
		}
		else
		{
			str="CROP IT";
		}
		cout<<str<<endl;
	}
}