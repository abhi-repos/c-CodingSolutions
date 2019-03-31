#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
list <int> :: iterator it;
int n;
void dfs(int src,bool visited[])
	{
	visited[src]=true;
	cout<<src<<" ";
	for(it=adj[src].begin();it!=adj[src].end();it++)
		{
		if(visited[*it]==false)
			dfs(*it,visited);
		}
	}
	
int main()
	{
	int m,u,v,src,i;
	cin>>n>>m;
	bool visited[n]={};
	adj=new list<int>[n];
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	cin>>src;		
	dfs(src,visited);
	cout<<endl;
	}
		

