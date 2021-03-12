#include<iostream>
#include<string.h>
#include<stdio.h>
 using namespace std;
using namespace std;
int main()
{
        char str[100];
        cout<<"\n Enter a String : ";
        gets(str);
        cout<<"\n Length of the String is : "<<strlen(str);  
        //strlen() is a library function, used to count the length of the string.
        return 0;
}