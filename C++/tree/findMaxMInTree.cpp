#include<bits/stdc++.h>
using namespace std;
struct node
	{
	int data;
	struct node *left,*right;
	};
int mn=1e9,mx=0;
struct node* newNode(int data)
{
    struct node* newnode = (struct node*)
                        malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return(newnode);
}

void preorder(struct node* root)
	{
	if(root==NULL)
		return;
	mn=min(mn,root->data);
	mx=max(mx,root->data);
	preorder(root->left);
	preorder(root->right);
	}
int main()
	{
	struct node *root;
	root=newNode(10);
	root->left = newNode(7);
   	root->right= newNode(5);
    	root->left->right = newNode(6);
    	root->left->right->left=newNode(18);
    	root->left->right->right=newNode(11);
    	root->right->right=newNode(9);
    	root->right->right->left=newNode(4);
	preorder(root);
	cout<<"Min="<<mn<<" "<<"Max="<<mx<<endl;
	}	
	
	
