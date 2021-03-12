/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


//https://www.hackerrank.com/challenges/printing-pattern-2


﻿#include<stdio.h>
int min(int,int);
int main()
{
	int a,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a=min(i,j);
			printf("%d ",n-a);
		}
		for(j=n-2;j>=0;j--)
		{
			a=min(i,j);
			printf("%d ",n-a);
		}
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			a=min(i,j);
			printf("%d ",n-a);
		}
		for(j=n-2;j>=0;j--)
		{
			a=min(i,j);
			printf("%d ",n-a);
		}
		printf("\n");
	}
}
int min(int a,int b)
{
	if(a<=b)
		return a;
	else
		return b;
}
