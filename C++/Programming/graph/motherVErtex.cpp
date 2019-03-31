//iterator must be defined in functon otherwise it will give Segmentation fault
#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
int n;
void dfs(int src,bool visited[])
	{
	visited[src]=true;
	list <int> :: iterator it;
	for(it=adj[src].begin();it!=adj[src].end();it++)
		{
		if(visited[*it]==false)
			dfs(*it,visited);
		}
	}
	
int main()
	{
	int m,u,v,src,i,mother;
	cin>>n>>m;
	bool visited[n]={};
	adj=new list<int>[n];
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		}
	for(i=0;i<n;i++)
		{
		if(visited[i]==false)
			{		
			dfs(i,visited);
			mother=i;
			}
		}
	for(i=0;i<n;i++)
		visited[i]=false;
	dfs(mother,visited);
	for(i=0;i<n;i++)
		{
		if(visited[i]==false)
			{
			cout<<"-1"<<endl;
			break;
			}
		}
	if(i==n)
		cout<<mother<<endl;
	cout<<endl;
	}
		

