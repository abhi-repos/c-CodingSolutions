/*
max Path=topological Sort + traversing the stack 
input
6 10
0 1 5
0 2 3
1 3 6
1 2 2
2 4 4     
2 5 2
2 3 7
3 5 1
3 4 -1
4 5 -1
1

output

-100010 0 2 9 8 10 
*/
#include<bits/stdc++.h>
using namespace std;
list <pair<int,int>> *adj;
stack <int> s;
const int mx=-(1e5+10);
void topologicalSort(int i,bool* visited)
	{
	int u;
	list <pair<int,int>> :: iterator it;
	visited[i]=true;
	for(it=adj[i].begin();it!=adj[i].end();it++)
		{
		u=(*it).first;
		if(visited[u]==false)
			topologicalSort(u,visited);
		}
		s.push(i);
	}
			
	
int main()
	{
	int n,m,u,v,w,i,src;
	cin>>n>>m;
	list <pair<int,int>> :: iterator it;
	bool visited[n]={};
	int dist[n];
	for(i=0;i<n;i++)
		dist[i]=mx;	
	
	adj=new list <pair<int,int>>[n];
	while(m--)
		{
		cin>>u>>v>>w;
		adj[u].push_back({v,w});
		}
	cin>>src;
	dist[src]=0;
	for(i=0;i<n;i++)
		{
		if(visited[i]==false)
			topologicalSort(i,visited);
		}
	while(!s.empty())
		{
		u=s.top();
		s.pop();
		if(dist[u]!=mx)
			{
			for(it=adj[u].begin();it!=adj[u].end();it++)
				{
				v=(*it).first,w=(*it).second;
				if(dist[v]<dist[u]+w)
					dist[v]=dist[u]+w;
				}
			}
		}
	for(i=0;i<n;i++)
		cout<<dist[i]<<" ";
	cout<<endl;
				

	}
	
