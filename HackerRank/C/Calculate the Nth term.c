/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


//https://www.hackerrank.com/challenges/recursion-in-c


﻿#include<stdio.h>

int main()
{
    int i,n;
    int array[n];
    scanf("%d",&n);
    scanf("%d %d %d",&array[0],&array[1],&array[2]);
    for(i=3;i<=n;i++)
    {
        array[i]=array[i-1]+array[i-2]+array[i-3];
    }
    printf("%d",array[n-1]);
}
