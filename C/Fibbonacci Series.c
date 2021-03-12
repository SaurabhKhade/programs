/*
C program to print fibbonacci series
*/

#include<stdio.h>
//Function to print Fibbonacci series
void fibbo(int a,int b, int steps)
{
	//if steps are 0, return
	if(steps==0)
	{
		return;
	}
	//else print a+b and call function again with updated values of a,b and steps 
	else
	{
		printf("%d ",a+b);
		fibbo(b,a+b,--steps); 
	}
}
//Main Function
int main()
{
	//Taking first two numbers and steps to be printed
	printf("Enter first two numbers and steps:");
	int a,b,steps;
	scanf("%d%d%d",&a,&b,&steps);
	printf("%d %d ",a,b);
	//calling function
	fibbo(a,b,steps);
}