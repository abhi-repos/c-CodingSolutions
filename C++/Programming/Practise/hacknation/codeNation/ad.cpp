#include<bits/stdc++.h>
using namespace std;
vector <long long> *adj;
vector <long long> :: iterator it;
vector <long long> h,g;
long long n;
long long bfs(long long src,bool *visited)
	{
	long long u,v,count=0,edges=0,diff;
	queue <long long> q;
	q.push(src);
	visited[src]=true;
	while(!q.empty())
		{
		u=q.front();
		edges+=adj[u].size();
		q.pop();
		for(it=adj[u].begin();it!=adj[u].end();it++)
			{
			v=*it;
			if(visited[v]==false)
				{
				count++;
				q.push(v);
				visited[v]=true;
				}		
			}
		}
	edges=edges/2;
	diff=edges-count;
	h.push_back(diff);
	if(diff==0&&count!=0)
		g.push_back(count);
	return count;
	}

int main()
	{
	long long m,u,v,i,sum=0,val,num=0,done=0,res;
	cin>>n>>m;
	bool visited[n]={};
	adj=new vector<long long>[n];
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
			val=bfs(i,visited);
			sum+=(val*(val+1))/2;
			}				
		}
	for(i=0;i<h.size();i++)
		{
		if(h[i]>=2||num==2)
			{
			res=sum*2;
			done=1;
			break;
			}
		if(h[i]==1)
			num++;
	
		}
	sort(g.begin(),g.end());
	if(done==0)
		{
		if(num==1)
			res=(sum-g[0])*2;
		else if(num==0)
			{
			if(g[0]==1)
				res=(sum-(g[0]+g[1]))*2;
			else
				res=(sum-(g[0]+(g[0]-1)))*2;
			}
		}
	cout<<res<<endl;
	}
		
