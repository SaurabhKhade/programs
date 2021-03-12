#include<stdio.h>

int menu(){
	printf("Enter your choice:\n");
	printf("1: To Insert number in stack\n");
	printf("2: To Remove number from stack\n");
	printf("3:To Print the Stack\n");
	printf("4:To exit the program\n");
	printf("your choise: ");
	int n;
	scanf("%d",&n);
	printf("\n");
	return n;
}

int main(){
	int arr[10],index=-1;
	while(1){
		switch(menu()){
			case 1:
				if(index==10)
					printf("stack is already full:\n");
				else{
    				printf("Enter a number:");
    				scanf("%d",&arr[++index]);
				}
				break;
			case 2:
			    if(index==-1)
			        printf("stack is empty\n");
		        else
		            index--;
                break;
			case 3:
			    for(int i=index;i>=0;i--)
			        printf("index-%d => %d\n",i,arr[i]);
			    break;
			case 4:
			    return 0;
			default:
			    printf("Invalid choise! try again.\n");
		}
		printf("\n\n");
	}
}