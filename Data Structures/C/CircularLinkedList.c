#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


//structure of the linked list
struct NODE
{
	struct NODE* prev;
	int data;
	struct NODE* next;
};

typedef struct NODE NODE;
NODE *HEAD=NULL,*TAIL=NULL;


int data(){
	printf("Enter Data Element:");
	int data;
	scanf("%d",&data);
	return data;
}


void addFirst(){
	NODE* p=(NODE*)malloc(sizeof(NODE));
	p->data=data();
	if(HEAD==NULL){
		HEAD=p;
		TAIL=p;
		p->next=p;
		p->prev=p;
		return;
	}
	p->next=HEAD;
	HEAD->prev=p;
	HEAD=p;
	TAIL->next=p;
	p->prev=TAIL;
}


void addLast(){
	NODE* p=(NODE*)malloc(sizeof(NODE));
	p->data=data();
	if(HEAD==NULL){
		HEAD=p;
		TAIL=p;
		p->next=p;
		p->prev=p;
		return;
	}
	p->next=HEAD;
	HEAD->prev=p;
	p->prev=TAIL;
	TAIL->next=p;
	TAIL=p;
}


void addAny(){
	int index;
	printf("Enter Position number:");
	scanf("%d",&index);
	if(index<=0){
		printf("Invalid position!\ncan't be less than 1\n");
		return;
	}
	int count=1;
	NODE* q=HEAD;
	while(count++ < index){
		q=q->next;
		if(q==HEAD){
			printf("Invalid position!\nEntered position is greater than elements in list");
			return;
		}
	}
	if(q==HEAD){
		addFirst();
		return;
	}
	NODE* p=(NODE*)malloc(sizeof(NODE));
	p->data=data();
	p->next=q;
	p->prev=q->prev;
	q->prev->next=p;
	q->prev=p;
}


void deleteFirst(){
	if(HEAD==NULL){
		printf("List is already empty\n");
		return;
	}
	else if(HEAD==TAIL){
		free(HEAD);
		HEAD=NULL;
		TAIL=NULL;
		return;
	}
	NODE* q=HEAD;
	q->next->prev=q->prev;
	q->prev->next=q->next;
	HEAD=q->next;
	free(q);
}


void deleteLast(){
	if(HEAD==NULL){
		printf("List is already empty\n");
		return;
	}
	else if(HEAD==TAIL){
		free(HEAD);
		HEAD=NULL;
		TAIL=NULL;
		return;
	}
	NODE* q=TAIL;
	q->next->prev=q->prev;
	q->prev->next=q->next;
	TAIL=q->prev;
	free(q);
}


void deleteAny(){
	int index;
	printf("Enter Position number:");
	scanf("%d",&index);
	if(index<=0){
		printf("Invalid position!\ncan't be less than 1\n");
		return;
	}
	int count=1;
	NODE* q=HEAD;
	while(count++ < index){
		q=q->next;
		if(q==HEAD){
			printf("Invalid position!\nEntered position is greater than elements in list");
			return;
		}
	}
	if(q==HEAD){
		deleteFirst();
		return;
	}
	else if(q==TAIL){
		deleteLast();
		return;
	}
	q->next->prev=q->prev;
	q->prev->next=q->next;
	free(q);
}


void traverse(){
	NODE* q=HEAD;
	do{
		printf("%d ",q->data);
		q=q->next;
	}
	while(q!=HEAD);
}


int main()
{
	while(1){
		printf("Enter:\n1:To Add node at first\n2:To add node at last\n3:To add node at any position\n4:To delete node at first\n5:To delete node at last\n6:To delete node at any position\n7:print the List\n8:To exit\nYour Choice:");
		int ch;
		scanf("%d",&ch);
		switch(ch){
			case 1:
				addFirst();
				break;
			case 2:
				addLast();
				break;
			case 3:
				addAny();
				break;
			case 4:
				deleteFirst();
				break;
			case 5:
				deleteLast();
				break;
			case 6:
				deleteAny();
				break;
			case 7:
				traverse();
				break;
			case 8:
				exit(1);
				break;
			default:
				printf("Incorrect choice\n");
		}
		getch();
		getch();
		printf("\n\n");
	}	
}
	