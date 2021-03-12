/*
Name: Saurabh Khade
CSE Student
*/

#include<iostream>
using namespace std;
int main()
{
	int size,remove=-1;
	long int sum=0;
	cin>>size;
	long int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if((sum-arr[i])%7==0)
		{
			if(remove==-1)
			{
				remove=i;
			}
			else if(arr[i]<arr[remove])
			{
				remove=i;
			}
		}
	}
	cout<<remove;
}