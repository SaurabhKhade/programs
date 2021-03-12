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
	int test,green,purple,parti,i,j;
	int count1,count2;
	cin>>test;
	while(test--)
	{
		count1=0;
		count2=0;
		cin>>green>>purple>>parti;
		while(parti--)
		{
			cin>>i>>j;
			count1+=i;
			count2+=j;
		}
		if((count1*green+count2*purple)<(count1*purple+count2*green))
		{
			cout<<(count1*green+count2*purple)<<endl;
		}
		else
		{
			cout<<(count2*green+count1*purple)<<endl;
		}
	}
}