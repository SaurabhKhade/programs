#include<stdio.h>
#include<stdlib.h>

struct tree
{
	int data;
	struct tree *left=NULL;
	struct tree *right=NULL;
};
typedef struct tree tree;
tree* root=NULL;

void add(int data){
	tree* p=(tree*)malloc(sizeof(tree));
	p->data=data;
	p->left=NULL;
	p->right=NULL;
	if (root==NULL){
		root=p;
		return;
	}
	tree* q=root;
	while(true){
		if(q->data > data){
			if(q->left==NULL){
				q->left=p;
				return;
			}
			else{
				q=q->left;
			}
		}
		else{
			if(q->right==NULL){
				q->right=p;
				return;
			}
			else{
				q=q->right;
			}
		}
	}
}

void show(tree* p){
	if(p==NULL){
		return;
	}
	show(p->left);
	printf("%d ",p->data);
	show(p->right);
}

void show_reverse(tree* p){
	if(p==NULL){
		return;
	}
	show_reverse(p->right);
	printf("%d ",p->data);
	show_reverse(p->left);
}