#include<bits/stdc++.h>
using namespace std;
vector <int> *adj;
vector <int> :: iterator it;
int a[100000][2],n;
void bfs(int src)
	{
	int u,v,count;
	bool visited[n]={};
	queue <int> q;
	q.push(src);
	visited[src]=true;
	a[src][1]=1;
	while(!q.empty())
		{
		u=q.front();
		q.pop();
		for(it=adj[u].begin();it!=adj[u].end();it++)
			{
			v=*it;
			if(visited[v]==false)
				{
				a[v][0]+=a[u][0];
				a[v][1]=a[u][1]+1;
				q.push(v);
				visited[v]=true;
				}		
			}
		}
	}
int main()
	{
	int i,u,v,q,count,num;
	cin>>n;
	adj=new list <int> [n];
	for(i=0;i<(n-1);i++)
		{
		cin>>u>>v;
		u--,v--;
		parent[v]=u;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	for(i=0;i<n;i++)
		a[i][0]=adj[i].size();
	bfs(0);
		
	cin>>q;
	while(q--)
		{
		cin>>num;
		num--;
		count=a[num][0]-((2*(a[num][1]-2))+2);
		cout<<count<<endl;
		}
	}
