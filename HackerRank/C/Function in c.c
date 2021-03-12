/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


//https://www.hackerrank.com/challenges/functions-in-c

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=max_of_four(a,b,c,d);
    printf("%d",e);
    return 0;
}
int max_of_four(int a,int b,int c,int d)
{
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                return a;
            }
            else
            {
                return d;
            }
        }
        else if(c>d)
        {
            return c;
        }
        else
        {
            return d;
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
             return b;
        }
        else
        {
             return d;
        }
    }
    else if(c>d)
    {
        return c;
    }
    else
    {
        return d;
    }
}
