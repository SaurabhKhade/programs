#include<iostream>
using namespace std;

//generic class TreeCollection
template<class type>
class TreeCollection
{
	private:
		//Inner class leaf to store each data unit
		class leaf
		{
			public:
				type data;
				leaf* left;
				leaf* right;
				leaf(type data){
					this->data=data;
					left=NULL;
					right=NULL;
				}
		};
		
		//root pointer for tree
		leaf* root;
		
		//Printer function to print values in ascending or descending order
		
		/*
			Note: i created this function because i was
			unable to pass root as a default argument
			to show() and show_reverse() function below
			if any one having better idea please change
			my code. 
		*/
		void printer(leaf* p,bool reverse=false){
			if(reverse){
				if(p==NULL){
					return;
				}
				printer(p->right,true);
				cout<<p->data<<" ";
				printer(p->left,true);
			}
			else{
				if(p==NULL){
					return;
				}
				printer(p->left);
				cout<<p->data<<" ";
				printer(p->right);
			}
		}
			
	public:
		TreeCollection(){
			root=NULL;
		}
		
		//function to take input and save it in a tree
		bool add(type data){
			leaf* p=new leaf(data);
			if (root==NULL){
				root=p;
				return true;
			}
			leaf* q=root;
			while(true){
				if(q->data > data){
					if(q->left==NULL){
						q->left=p;
						return true;
					}
					else{
						q=q->left;
					}
				}
				else{
					if(q->right==NULL){
						q->right=p;
						return true;
					}
					else{
						q=q->right;
					}
				}
			}
		}
		
		//function will call printer to print tree in ascending order
		//here i want to add root as a default argument to this function
		void show(){
			printer(root);
			cout<<endl;
		}
		
		//function will call printer to print tree in descending order
		//here i want to add root as a default argument to this function
		void show_reverse(){
			printer(root,true);
			cout<<endl;
		}
};