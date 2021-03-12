/*
Name : Saurabh Khade
CSE Student
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int size,num;
	cin>>size;
	while(size--)
	{
		cin>>num;
		v.push_back(num);
	}
	int i,j;
	cin>>i>>j;
	v.erase(v.begin()+i-1,v.begin()+j);
	cout<<v.size()<<endl;
	for(int k=0;k<v.size();k++)
	{
		cout<<v[k]<<" ";
	}
}