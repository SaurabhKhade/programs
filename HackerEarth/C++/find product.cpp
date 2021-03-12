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
	int size,num;
	long long int answer=1;
	cin>>size;
	vector<int> v;
	for(int i=0;i<size;i++)
	{
		cin>>num;
		v.push_back(num);
	}
	for(int i=0;i<size;i++)
	{
		answer=(answer*v[i])%((long long int)pow(10,9)+7);
	}
	cout<<answer;
}