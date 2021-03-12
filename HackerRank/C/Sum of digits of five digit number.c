/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        c+=b;
    }
    printf("%d",c);
} 
