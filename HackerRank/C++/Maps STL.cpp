/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/



#include<iostream>
#include<map>
using namespace std;
int main()
{
	int q,query,mark;
	string name;
	cin>>q;
	map <string,int> arr;
	map<string,int>::iterator p;
	for(int i=0;i<q;i++)
	{
		cin>>query;
		if(query==1)
		{
			cin>>name>>mark;
			p=arr.find(name);
			if(p == arr.end())
			{
				arr.insert(pair<string,int>(name,mark));
			}
			else
			{
				p->second+=mark;
			}
		}
		else if(query==2)
		{
			cin>>name;
			arr.erase(name);
		}
		else
		{
			cin>>name;
			p=arr.find(name);
			if(p == arr.end())
			{
				cout<<"0"<<endl;
			}
			else
			{
				cout<<p->second<<endl;
			}
		}
	}
}
