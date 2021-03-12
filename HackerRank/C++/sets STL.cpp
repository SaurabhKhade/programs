/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/



#include<iostream>
#include<set>
using namespace std;
int main()
{
	int Q,m,n;
	cin>>Q;
	set <int> arr;
	set<int>::iterator p;
	for(int i=0;i<Q;i++)
	{
		cin>>m>>n;
		if(m==1)
		{
			arr.insert(n);
		}
		else if(m==2)
		{
			arr.erase(n);
		}
		else
		{
			if(arr.find(n) == arr.end())
			{
				cout<<"No"<<endl;
			}
			else
			{
				cout<<"Yes"<<endl;
			}
		}
	}
}
