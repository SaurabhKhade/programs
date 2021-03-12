/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


﻿#include<iostream>
using namespace std;
int main()
{
	int size,query,temp;
	cin>>size>>query;
	int* array[size];
	int x,y;
	for(int i=0;i<size;i++)
	{
		cin>>temp;
		array[i]=new int[temp];
		for(int j=0;j<temp;j++)
		{
			cin>>array[i][j];
		}
	}
	for( int i=0;i<query;i++)
	{
		cin>>x>>y;
		cout<<array[x][y]<<endl;
	}
}