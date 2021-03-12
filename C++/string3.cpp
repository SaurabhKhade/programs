/*
Following program is copying one string to another string using strcpy() library function.
 This function is used to copy one string to another string.
*/

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
        char str1[20], str2[20];
        cout<<"\n Enter First String : ";
        gets(str1);
        strcpy(str2, str1);  //Copying String 1 into String 2
        cout<<"\n First String Copied into Second String : "<<str2;
        return 0;
}