/*

Program to implement Linked List

*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//node Structure
struct node
{
	int data;
	struct node* next;
};


typedef struct node node;
//creating start and last pointer
node *start=NULL,*last=NULL;

//Function for Traverse operation
void traverse()
{
	printf("\n");
	node* q=start;
	//Traverse can't performed on empty list
	if(start==NULL)
	{
		printf("Empty list");
		return;
	}
	//Traversing
	while(q!=NULL)
	{
		printf("%d  ",q->data);
		q=q->next;
	}
}

//Function to delet first node
void delete_first()
{
	//Deletion can't performed in empty list
	if(start==NULL)
	{
		printf("\nDeletion cannot be performed! List is empty");
	}
	//deleting only node in list
	else if(start==last)
	{
		free(start);
		start=NULL;
		last=NULL;
	}
	//deleting first node of list
	else
	{
		node* p=start;
		start=start->next;
		free(p);
	}
	printf("Done");
	traverse();
}

//Function to delet last node
void delete_last()
{
	//deletion can't performed on empty list
	if(last==NULL)
	{
		printf("\nDeletion cannot be performed! List is empty");
	}
	//deleting only node in list
	else if(start==last)
	{
		free(start);
		start=NULL;
		last=NULL;
	}
	//deleting last node
	else
	{
		node* q=start;
		while(q->next != last)
			q=q->next;
		free(last);
		last=q;
		last->next=NULL;
	}
	printf("Done");
	traverse();
}

//Deleting node at particular position
void delete_any()
{	
	//taking position of node as input
	printf("Enter position number:");
	int pos;
	scanf("%d",&pos);
	//If entered position is negative
	if(pos<1)
	{
		printf("Error! position is less than or equal to 0");
		return;
	}
	//if entered position is 1, call delete_first()
	else if(pos==1)
	{
		delete_first();
		return;
	}
	//logic to delete node
	else
	{
		node* q=start;
		int i=1;
		while(i<pos-1)
		{
			i++;
			q=q->next;
			//if entered position is greater than elements in list
			if(q->next==NULL)
			{
				printf("Error! Invalid position");
				return;
			}
		}
		//deleting node
		node* p=q->next;
		if(p==last)
		{
			last=q;
			free(p);
			q->next=NULL;
		}
		else
		{
			q->next=p->next;
			free(p);
		}
	}
	printf("Done");
	traverse();
}

//Function to add node at first
void add_first()
{
	//taking input for node to save in data 
	node* p=(node*)malloc(sizeof(node));
	printf("Enter Number:");
	scanf("%d",&p->data);
	//if list is empty 
	if(start==NULL)
	{
		start=p;
		last=p;
		p->next=NULL;
	}
	//else
	else
	{
		p->next=start;
		start=p;
	}
	printf("Done");
	traverse();
}

//to add node at last of list
void add_last()
{
	//taking input for node
	node *p=(node*)malloc(sizeof(node));
	p->next=NULL;
	printf("Enter Number:");
	scanf("%d",&p->data);
	//if list is empty 
	if(start==NULL)
	{
		start=p;
		last=p;
	}
	//else
	else
	{
		last->next=p;
		last=p;
	}
	printf("Done");
	traverse();
}

//adding new node at particular position in list
void add_any()
{
	//taking position number to find that position
	node *p=(node*)malloc(sizeof(node));
	printf("Enter Position Number:");
	int pos;
	scanf("%d",&pos);
	//if negative position entered
	if(pos<1)
	{
		printf("Error! position is less than or equal to 0");
		return;
	}
	//if position is 1, call add_first()
	else if(pos==1)
	{
		add_first();
		return;
	}
	//if list is empty and position entered greater than 1 (ie incorrect position)
	else if(start==NULL && pos!=1)
	{
		printf("Error! Invalid position");
		return;
	}
	//else
	else
	{
		node *q=start;
		int i=1;
		while(i<pos-1)
		{
			q=q->next;
			i++;
			//if position is greater than elements actually present in list (again incorrect position)
			if(q==NULL)
			{
				 printf("Error! Invalid position");
				return;
			}
		}
		//at last position found
		//taking input for data
		printf("Enter Number:");
		scanf("%d",&p->data);
		//adding node
		if(q->next==NULL)
		{
			q->next=p;
			p->next=NULL;
			last=p;
		}
		else
		{
			p->next=q->next;
			q->next=p;
		}
	}
	printf("Done");
	traverse();
}

//Menu function
int menu()
{
	//Choices
	printf("Enter Choise:\n");
	printf("1: To create a node at first\n");
	printf("2: To create a node at last\n");
	printf("3: To create a node at any position\n");
	printf("4: To delete a node at first\n");
	printf("5: To delete a node at last\n");
	printf("6: To delete a node at any position\n");
	printf("7: To Show the Linked List\n");
	printf("8: To exit\n");
	printf("Choice:");
	int choice;
	scanf("%d",&choice);
	printf("\n");
	return choice;
}

//Main Function
int main()
{
	//infinite loop
	while(1)
	{
		clrscr();
		switch(menu())
		{
			case 1:
				add_first();
				break;
			case 2:
				add_last();
				break;
			case 3:
				add_any();
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
				traverse();
				break;
			case 8:
				exit(0);
			default:
				printf("Invalid choice! try again.");
		}
		getch();
		getch();
	}
}

/*
This is program to implement linked list. Please follow me for more such programs
*/