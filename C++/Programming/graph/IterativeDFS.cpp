#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
void dfs(int src,bool *visited)
	{
	int u;
	list <int> :: iterator it;
	stack <int> s;
	s.push(src);
	while(!s.empty())
		{	
		u=s.top();
		s.pop();
		if(!visited[u])
			{
			cout<<u<<" ";
			visited[u]=true;
			}
		for(it=adj[u].begin();it!=adj[u].end();it++)
			{
			if(visited[*it]==false)
				s.push(*it);
		
			}
			
		
		}	
	
	}
int main()
	{
	int n,m,u,v,src,i;
	cin>>n>>m;
	bool visited[n]={};
	adj=new list<int> [n];
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		
		}
	for(i=0;i<n;i++)
		{
		if(visited[i]==false)
			dfs(i,visited);
		}
	
	}
		
