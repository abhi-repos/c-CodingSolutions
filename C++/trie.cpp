#include<bits/stdc++.h>
using namespace std;

struct trie
	{
	bool visited;
	struct trie* alphabet[26];
	};

struct trie *getNode()
{
    	struct trie *pNode =  new trie;
   	pNode->visited = false;
    	for (int i = 0; i < 26; i++)
 		pNode->alphabet[i] = NULL;
    	return pNode;
}

void insert(struct trie* root,string str)
	{
	int l,i,index;
	struct trie* temp=root;
	l=str.length();
	for(i=0;i<l;i++)
		{
		index=str[i]-'0';
		if(!temp->alphabet[index])
			{
			struct trie *newNode = getNode();
			temp->alphabet[index]=newNode;
			}
		temp=temp->alphabet[index];
		}
	temp->visited=true;
	}			

bool search(struct trie* root,string str)
	{
	int l,i,index;
	struct trie* temp=root;
	l=str.length();
	for(i=0;i<l;i++)
		{
		index=str[i]-'0';
		if(!temp->alphabet[index])
			return false;
		temp=temp->alphabet[index];
		}
	if(temp->visited&&temp!=NULL)
		return true;
	}
		


int main()
	{
	struct trie *root = getNode();
	int n,q;
	string str;
	cin>>n>>q;
	while(n--)
		{
		cin>>str;
		insert(root,str);
		}
	while(q--)
		{
		cin>>str;
		cout<<search(root,str)<<endl;
		}
	}
		
