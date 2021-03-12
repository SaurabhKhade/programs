/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


﻿#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i;
    char arr[1000000];
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]!=',')
            printf("%c",arr[i]);
        else
            printf("\n");
    }
}
