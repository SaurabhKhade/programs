#include<stdio.h>

int main(){
	int arr[10],key,flag=0;
	printf("Enter 10 numbers: ");
	for(int i=0;i<10;i++)
		scanf("%d",arr+i);
	printf("\nEnter number to search in the array: ");
	scanf("%d",&key);
	for(int i=0;i<10;i++)
		if (arr[i]==key){
			flag=1;
			break;
		}
	if(flag)
		printf("\nEntered number is in the array");
	else
		printf("\nEntered number is not in the array");
}