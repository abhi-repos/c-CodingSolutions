#include<bits/stdc++.h>
using namespace std;
vector <long long> *adj;
vector <long long> :: iterator it;
long long n;
void bfs(long long src, long long *b)
	{
	bool visited[n]={};
	long long u;
	queue <long long> q;
	q.push(src);
	visited[src]=true;
	b[src]++;
	while(!q.empty())
		{
		u=q.front();
		q.pop();
		for(it=adj[u].begin();it!=adj[u].end();it++)
			{
			if(visited[*it]==false)
				{
				b[*it]++;
				q.push(*it);
				visited[*it]=true;
				}
			}
		}
	}
	
int main()
	{
	long long k,m,u,v,i,j,x,y,r;
	cin>>n>>k;
	long long a[n],b[n]={};
	adj=new vector <long long> [n];
	m=n-1;
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		}
	for(i=0;i<n;i++)
		cin>>a[i];
	for(j=0;j<n;j++)
		bfs(j,b);
	
	while(k--)
		{
		x=0;
		cin>>y;
		r=(y*(y+1))/2;
		for(i=0;i<n;i++)
			{
			if(b[i]==1)
				x^=a[i];
			else if(b[i]==2&&y%2!=0)
				x^=a[i];
			else if(b[i]==3)
				{
				if(r%2!=0)
					x^=a[i];
				}
			}
		cout<<x<<endl;		
		}
		
	}
	
