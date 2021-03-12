/*
The c program to implement concept of tree
Program only cover the operations traverse, searching and Creating new node
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//structure of node in tree 
struct tree
{
	struct tree *left;
	int data;
	struct tree *right;
};
 
 
typedef struct tree tree;
//creating a root pointer
tree *root=NULL;

//Function to add new node in tree
void create()
{
	//creating new node
	tree* p=(tree*)malloc(sizeof(tree));
	printf("Enter data:");
	scanf("%d",&p->data);
	p->left=NULL;
	p->right=NULL;
	//if tree is empty
	if(root==NULL){
		root=p;
	}
	//else
	else{
		tree* q=root;
		//infinite loop to traverse through all nodes
		while(1){
			//if data is less than data of existing node, move to left
			if(p->data < q->data){
				//if nothing to left, add node here
				if(q->left==NULL){
					q->left=p;
					break;
				}
				q=q->left;
			}
			//if data is greater than data of existing node, move to right
			else if(p->data > q->data){
				//if nothing to right, add node here
				if(q->right==NULL){
					q->right=p;
					break;
				}
				q=q->right;
			}
			//if the same data is present already in tree then return
			else{
				printf("Repetation not allowed!");
				return;
			}
		}
	}
}

//Function to search the data is present in tree or not
void search()
{
	tree* q=root;
	//The data to be searched
	printf("Enter number to search:");
	int num;
	scanf("%d",&num);
	//traverse until q is not null or we find it
	while(q!=NULL){
		//if data matched 
		if(q->data == num){
			printf("Exists in tree");
			return;
		}
		//if data is less than data of existing node, move to left
		else if(num < q->data){
			q=q->left;
		}
		//if data is greater than data of existing node, move to right
		else{
			q=q->right;
		}
	}
	//if q is null then data is not present in tree
	printf("Not Exists");
}

//Function to show all nodes of tree using recursion
void show_tree(tree *q)
{
	//if q is null then return
	if(q==NULL)
		return;
	//else print the data
	printf("%d, ",q->data);
	//then if left node is not null call function again with passing the left node
	if(q->left!=NULL)
		show_tree(q->left);
	//then if right node is not null call function again with passing the right node
	if(q->right!=NULL)
		show_tree(q->right);
	//if right and left both nodes are null then return
	else
		return;
}

//Main Function
int main()
{
	//infinite loop
	while(1){
		clrscr();
		//Choices
		printf("Enter 1 to add node\n");
		printf("Enter 2 to search node\n");
		printf("Enter 3 to show tree\n");
		printf("Enter 4 to exit\n");
		printf("choice:");
		int choice;
		scanf("%d",&choice);
		if(choice==1)
			create();
		if(choice==2)
			search();
		else if(choice==3)
			show_tree(root);
		else if(choice==4)
			exit(0);
		else
			printf("Invalid Choice!");
		getch();
		getch();
	}
}
