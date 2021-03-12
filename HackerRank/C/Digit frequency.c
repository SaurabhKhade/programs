/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


//https://www.hackerrank.com/challenges/frequency-of-digits-1

﻿
#include<stdio.h>
int main()
{
    char c[1000];
    int i;
    int zero=0,one=0,two=0,three=0,four=0,five=0;
    int six=0,seven=0,eight=0,nine=0;
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {        
        if(c[i]=='0')
            zero++;
        else if(c[i]=='1')
            one++;
        else if(c[i]=='2')
            two++;
        else if(c[i]=='3')
            three++;
        else if(c[i]=='4')
            four++;
        else if(c[i]=='5')
            five++;
        else if(c[i]=='6')
            six++;
        else if(c[i]=='7')
            seven++;
        else if(c[i]=='8')
            eight++;
        else if(c[i]=='9')
            nine++;
    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}
