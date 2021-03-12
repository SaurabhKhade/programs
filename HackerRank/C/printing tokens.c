/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


//https://www.hackerrank.com/challenges/printing-tokens-

﻿
#include<stdio.h>
int main()
{
    char *p;
    int i;
    p=calloc(30,sizeof(char));
    gets(p);
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",*(p+i));
        }
    }
    return 0;
}
