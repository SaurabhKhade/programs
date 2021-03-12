/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int size,query;
	cin>>size;
	vector <int> v(size);
	for(int i=0;i<size;i++)
	{
		cin>>query;
		v[i]=query;
	}
	cin>>query;
	vector<int>::iterator p;
	for(int i=0;i<query;i++)
	{
		cin>>size;
		p=lower_bound(v.begin(), v.end(), size);
		if(*p == size)
		{
			cout<<"Yes "<<p-v.begin()+1<<endl;
		}
		else
		{
			cout<<"No "<<p-v.begin()+1<<endl;
		}
	}
}
