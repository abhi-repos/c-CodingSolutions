#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
stack <int> s;
void topoSorting(int u,bool *visited)
	{
	
	visited[u]=true;
	list <int> :: iterator it;
	for(it=adj[u].begin();it!=adj[u].end();it++)
		{
		if(visited[*it]==false)
			topoSorting(*it,visited);
		}
	s.push(u);
	}
int main()
	{
	int n,m,u,i,v;
	cin>>n>>m;
	adj=new list<int> [n];
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		
		}
	bool visited[n]={};
	for(i=0;i<n;i++)
		{
		if(visited[i]==false)
			topoSorting(i,visited);
		}
	while(!s.empty())
		{
		u=s.top();
		cout<<u<<" ";
		s.pop();
		}
	}
