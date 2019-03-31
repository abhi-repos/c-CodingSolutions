/*
graph with no edges is also Bipiartite.
input
4 8
0 1
0 3
1 0
1 2
2 1
2 3
3 0
3 2
output
yes
*/
#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
list <int> :: iterator it;
int n,m;
bool bipartite(int src,int *a)
	{
	int i,u,v;
	a[src]=1;
	queue <int> q;
	q.push(src);
	while(!q.empty())
		{
		u=q.front();
		q.pop();
		for(it=adj[u].begin();it!=adj[u].end();it++)
				{
				v=*it;
				if(a[v]==-1)
					{
					a[v]=1-a[u];
					q.push(v);
					}
				else if(a[v]==a[u])
					return false;				
					
				}
		}
	return true;

	}
int main()
	{
	int i,n,m,u,v;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++)
		a[i]=-1;
	adj=new list<int>[n];
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		}
	for(i=0;i<n;i++)
		{
		if(a[i]==-1)
			{
			if(bipartite(i,a)==false)
				break;
			}
		
		}
	if(i==n)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;

	
	}
	      

