/*
Name:Saurabh Shankar Khade
CSE Student
*/


#include<stdio.h>
#include<stdlib.h>
void swap(int toswap,int size,int *arr)
{
	int min=999999;
	int index=toswap;
	for(int i=toswap+1;i<size;i++){
		if(*(arr+i)<min && *(arr+i)>*(arr+toswap)){
			min=*(arr+i);
			index=i;
		}
	}
	int temp=*(arr+toswap);
	*(arr+toswap)=*(arr+index);
	*(arr+index)=temp;
}
void sort(int start,int size,int* arr)
{
	for(int i=start;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(*(arr+i)>*(arr+j)){
				int temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
}
void print(int *arr,int size)
{
	for(int i=0;i<size;i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
int main()
{
	printf("This program is for only permutations of numbers. Please don't enter any characters.\n\n");
	printf("Enter Size:");
	int size;
	scanf("%d",&size);
	int *arr=(int*)calloc(size,sizeof(int));
	printf("Enter Members:");
	for(int i=0;i<size;i++)
		scanf("%d",(arr+i));
	print(arr,size);
	int j=size-1;
	while(j>0){
		if(*(arr+j)>*(arr+j-1)){
			swap(j-1,size,arr);
			sort(j,size,arr);
			j=size-1;
			print(arr,size);
		}
		else{
			j--;
		}
	}
}
