#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	cout<<fixed<<setprecision(2);
	string name;
	int student;
	float sum=0;
	cin>>student;
	int marks[student][5];
	for(int i=0;i<student;i++)
	{
		cin>>name;
		for(int j=0;j<5;j++)
		{
			cin>>marks[i][j];
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<student;j++)
		{
			sum+=marks[j][i];
		}
		cout<<sum/(float)student<<" ";
		sum=0;
	}
}