#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
list <int> :: iterator it;
int n;
int bfs(int src,bool *visited,int *a)
	{
	int u,v,mn,count=0;
	set <int> s;
	set <int> :: iterator is;
	mn=a[src];
	queue <int> q;
	q.push(src);
	visited[src]=true;
	while(!q.empty())
		{
		u=q.front();
		s.insert(u);
		mn=min(mn,a[u]);
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
	for(is=s.begin();is!=s.end();is++)
		{
		if(a[*is]==mn)
			count++;
		
		
		}
		
	return count;
	}

int main()
	{
	int m,u,v,i;
	long long int mult=1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	bool visited[n]={};
	adj=new list<int>[n];
	cin>>m;
	while(m--)
		{
		cin>>u>>v;
		u--,v--;
		adj[u].push_back(v);
		adj[v].push_back(u);			
		}
	
	for(i=0;i<n;i++)
		{
		if(visited[i]==false)
			{	
			mult*=bfs(i,visited,a);
			mult%=1000000007;
			}
			
		}
	cout<<mult<<endl;	

	}
		

