/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


//https://www.hackerrank.com/challenges/pointer-in-c

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    update(&a,&b);
    return 0;
}
void update(int *p,int *q)
{
    int c,d;
    c=*p+*q;
    if((*p-*q)<0)
        d= -(*p-*q);
    else
        d= *p-*q;
    printf("%d\n%d",c,d);
}
