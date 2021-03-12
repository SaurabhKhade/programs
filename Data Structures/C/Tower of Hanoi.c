/*

Program to implement Tower of Hanoi using Recursion

*/


#include<stdio.h>

//Tower of Hanoi function
//Parameters 1) no of disks 2) Source Tower 3) Auxillary Tower 4) Drstination Tower
void tower_of_hanoi(int disks,char source,char aux,char dest){
	if(disks==1)
		//if only disk then only move
		printf("from %c to %c\n",source,dest);
	else
	{
		//First shift N-1 disks out of total N disks to auxillary tower simply using recursion method
		tower_of_hanoi(disks-1,source,dest,aux);
		//Shift only remaining N'th disk from source to Destination
		printf("from %c to %c\n",source,dest);
		//Now shift remaining N-1 disks from auxillary tower to destination using recursion method 
		tower_of_hanoi(disks-1,aux,source,dest);
	}
}
//Main Function
int main()
{
	int disks;
	char source,aux,dest;
	//No of disks in tower
	printf("Enter number of disks:");
	scanf("%d",&disks);
	//if disks are 0, Finish the program
	if(disks==0)
	{
		printf("no disks!");
		return 0;
	}
	//disks can't be less than zero
	else if(disks<0)
	{
		printf("disks can't be negative!");
		return 0;
	}
	//if disks are valid, take names of tower
	getchar();
	printf("Enter name of Source tower:");
	scanf("%c",&source);
	getchar();
	printf("Enter name of Auxillary tower:");
	scanf("%c",&aux);
	getchar();
	printf("Enter name of Destination tower:");
	scanf("%c",&dest);
	//Call function by passing required arguments
	tower_of_hanoi(disks,source,aux,dest);
}