#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//structure of doubly linked list
struct NODE
{
	struct NODE* prev;
	int data;
	struct NODE* next;
};
typedef struct NODE NODE;
NODE* HEAD=NULL;
NODE* LAST=NULL;


//function to show the entire list
void show_list(){
	
	if(HEAD==NULL){
		printf("\nEmpty list\n");
	}
	
	else{
		NODE* q=HEAD;
		printf("\n");
		while(q!=LAST){
			printf("%d ",q->data);
			q=q->next;
		}
		printf("%d",q->data);
	}
}


//Function to create node at first
void create_first(){
	
	NODE* p=(NODE*)malloc(sizeof(NODE));
	printf("\nEnter Number as a data:");
	scanf("%d",&p->data);
	
	if(HEAD==NULL){
		HEAD=p;
		LAST=p;
		p->prev=NULL;
		p->next=NULL;
	}
	
	else{
		p->next=HEAD;
		HEAD->prev=p;
		p->prev=NULL;
		HEAD=p;
	}
	
	printf("\nDone!");
}


//Function to create node at the end
void create_last(){
	
	NODE* p=(NODE*)malloc(sizeof(NODE));
	printf("\nEnter Number as a data:");
	scanf("%d",&p->data);
	
	if(LAST==NULL){
		HEAD=p;
		LAST=p;
		p->prev=NULL;
		p->next=NULL;
	}
	
	else{
		LAST->next=p;
		p->prev=LAST;
		p->next=NULL;
		LAST=p;
	}
	
	printf("\nDone!");
}


//Function to create node at any given position
void create_any(){
	
	int index;
	printf("\nEnter index:");
	scanf("%d",&index);
	
	if(index<1){
		printf("\nInvalid index!\nIndex can't be less than 1");
		return;
	}
	
	else if(index==1){
		create_first();
		return;
	}
	
	else{
		int i=1;
		NODE* q=HEAD;
		
		while(i<index){
			q=q->next;
			i++;
			if(q==NULL && i<index){
				printf("\nInvalid ondex!\nIndex out of range");
				return;
			}
		}
		
		if(q==NULL){
			create_last();
			return;
		}
		
		else{
			NODE* p=(NODE*)malloc(sizeof(NODE));
			printf("\nEnter Number as a data:");
			scanf("%d",&p->data);
			p->next=q;
			p->prev=q->prev;
			q->prev->next=p;
			q->prev=p;
		}
	}
	
	printf("\nDone!");
}


//Function to delete the first node
void delete_first(){
	
	if(HEAD==NULL){
		printf("\nList is empty\n");
		return;
	}
	
	NODE* q=HEAD;
	HEAD=HEAD->next;
	HEAD->prev=NULL;
	free(q);
	printf("\nDone!");
}


//Function to delete the last node
void delete_last(){
	
	if(LAST==NULL){
		printf("\nList is empty\n");
		return;
	}
	
	NODE* q=LAST;
	LAST=LAST->prev;
	LAST->next=NULL;
	free(q);
	printf("\nDone!");
}


//Function to delete node of any given position
void delete_any(){
	
	int index;
	printf("\nEnter index:");
	scanf("%d",&index);
	
	if(index<1){
		printf("\nInvalid index!\nIndex can't be less than 1");
		return;
	}
	
	else if(index==1){
		delete_first();
		return;
	}
	
	else{
		int i=1;
		NODE* q=HEAD;
		
		while(i<index){
			q=q->next;
			i++;
			if(q==NULL){
				printf("\nInvalid ondex!\nIndex out of range");
				return;
			}
		}
		
		if(q==LAST){
			delete_last();
			return;
		}
		
		q->next->prev=q->prev;
		q->prev->next=q->next;
		free(q);
	}
	
	printf("\nDone!");
}


//main Function
int main()
{
	while(1){
		clrscr();
		
		printf("Enter Choice:\n");
		printf("1: To create node at first\n");
		printf("2: To create node at last\n");
		printf("3: To create node at any position\n");
		printf("4: To delete node at first\n");
		printf("5: To delete node at last\n");
		printf("6: To delete node at any position\n");
		printf("7: To show the list\n");
		printf("8: To exit the program\n");
		printf("Your choice:");
		
		int choice;
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				create_first();
				break;
			case 2:
				create_last();
				break;
			case 3:
				create_any();
				break;
			case 4:
				delete_first();
				break;
			case 5:
				delete_last();
				break;
			case 6:
				delete_any();
				break;
			case 7:
				show_list();
				break;
			case 8:
				printf("\n\tThank you\n\tVisit Again\n");
				return 0;
			default:
				printf("\nError! Invalid Choice\nTry Again\n\n");
		}
		
		printf("\n\n");
		getch();
		getch();
	}
}