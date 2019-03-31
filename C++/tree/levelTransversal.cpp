/*level order transversal using Queue*/
#include<bits/stdc++.h>
using namespace std;
struct node
	{
	int data;
	struct node *left,*right;
	};
struct node* newNode(int data)
	{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
	}
void levelTransversal(struct node* root)
	{
	struct node* temp;
	queue <struct node*> q;
	q.push(root);
	while(!q.empty())
		{
		temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
		}
	}

int main()
	{
	struct node* root;
	root = newNode(1);
    	root->left = newNode(2);
    	root->right = newNode(3);
    	root->left->left = newNode(4);
   	root->left->right = newNode(5);
	cout<<"Level Order Transversal ";
	levelTransversal(root);
	}
