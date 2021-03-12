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
	int size;
	cin>>size;
	vector <int> v;
	for(int i=0;i<size;i++)
	{
		int j;
		cin>>j;
		v.push_back(j);
	}
	sort(v.begin(), v.end());
	for(int i:v)
	{
		cout<<i<<" ";
	}
}
