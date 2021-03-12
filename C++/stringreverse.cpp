#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
        char str[100], temp;
        int i=0, j;
        cout<<"\n Enter String : ";
        gets(str);
        i=0;
        j=strlen(str)-1;
        while(i<j)  //loop for reversing a string
        {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                i++;
                j--;
        }
        cout<<"\n Reverse String : "<<str;  //displaying reverse string
        return 0;
}