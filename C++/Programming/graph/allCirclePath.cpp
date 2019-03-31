#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
void dfs(int u,int* path,int index,bool* visited)
	{
	int i;
	list <int> :: iterator it;
	visited[u]=true;
	path[index]=u;
	index++;
	for(it=adj[u].begin();it!=adj[u].end();it++)
		{
		if(!visited[*it])
			dfs(*it,path,index,visited);
		else
			{		
			for(i=0;i<index;i++)
				cout<<path[i];
			cout<<*it<<endl;
			}
		}
	visited[u]=false;
	index--;
	}
	

int main()
	{
	int n,m,src,index=0,u,v;
	cin>>n>>m;
	adj=new list<int>[n];
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		}
	cin>>src;
	bool visited[n]={};
	int path[n]={};
	dfs(src,path,index,visited);
	}
