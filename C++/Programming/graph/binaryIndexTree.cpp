#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
	{
    	struct node *temp =  (struct node *)malloc(sizeof(struct node));
   	temp->key = item;
    	temp->left = temp->right = NULL;
    	return temp;
	}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->key<<endl;
        inorder(root->right);
    }
}


struct node* insert(struct node* node, int key)
	{  
   	if (node == NULL) 
		 return newNode(key);
    
    	if (key < node->key)
    	    	node->left  = insert(node->left, key);
 
   	else if (key > node->key)
        	node->right = insert(node->right, key);   
 
	return node;
}


struct node* search(struct node* root, int key)
{

    if (root == NULL || root->key == key)
       return root;
    

    if (root->key < key)
       return search(root->right, key);
 

    return search(root->left, key);
}


int main()
{
	int n,val;
	struct node *root = NULL;
	cin>>n;
	while(n--)
		{
		cin>>val;
		if(root==NULL)
    			root = insert(root, val);
		else
    			insert(root, val);
   		}
  
        inorder(root);
  
    	return 0;
}
