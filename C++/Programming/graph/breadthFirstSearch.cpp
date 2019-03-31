#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
list <int> :: iterator it;
int n;
void bfs(int src)
	{
	int u,v;
	queue <int> q;
	q.push(src);
	visited[src]=true;
	while(!q.empty())
		{
		u=q.front();
		cout<<u<<" ";
		q.pop();
		for(it=adj[u].begin();it!=adj[u].end();it++)
			{
			v=*it;
			if(visited[v]==false)
				{
				q.push(v);
				visited[v]=true;
				}		
			}
		}
	cout<<endl;
	}
int main()
	{
	int m,u,v,src,i;
	cin>>n>>m;
	adj=new list<int>[n];
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	bool visited[n]={};
	for(i=0;i<n;i++)
		{
		if(!visited[i])	
			bfs(src);
		}
	}
