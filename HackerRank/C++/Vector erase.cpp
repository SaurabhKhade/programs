/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int size;
	cin>>size;
	vector <int> v(size);
	for(int i=0;i<size;i++)
	{
		int j;
		cin>>j;
		v[i]=j;
	}
	int i,j;
	cin>>i;
	v.erase(v.begin()+i-1);
	cin>>i>>j;
	v.erase(v.begin()+i-1, v.begin()+j-1);
	cout<<v.size()<<endl;
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
