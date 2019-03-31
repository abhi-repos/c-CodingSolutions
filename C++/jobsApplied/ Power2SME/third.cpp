#include<bits/stdc++.h>
using namespace std;
list <pair<long long,long long>> *adj;
long long mn=1e12; 
void Path(long long u,long long w,long long d,bool *visited,bool *a,long long *path,long long index)
	{
	long long i,v,k;
	list <pair<long long,long long>> :: iterator it;
	visited[u]=true;
	path[index]=w;
	index++;
	if(u==d)
		{
		long long sum=0;
		for(i=1;i<index;i++)
			sum+=path[i];
		mn=min(mn,sum);
		}
	else
		{
		for(it=adj[u].begin();it!=adj[u].end();it++)
			{v=(*it).first;k=(*it).second;
			if(visited[v]==false)	
				{
				if(a[v]==false)
					Path(v,k,d,visited,a,path,index);
				}
			}
		}
	index--;
	visited[u]=false;
	}
int main()
	{
	long long t,n,i,src,dest,f,edges,u,v,w,index=0;
	cin>>t;
	while(t--)
		{
		cin>>n;
		long long path[n];
		adj=new list<pair<long long,long long>>[n];
		bool a[n],x,visited[n]={};
		for(i=0;i<n;i++)
			{
			cin>>x;
			a[i]=x;
			}
		cin>>src>>dest;
		cin>>edges>>f;
		while(edges--)
			{
			cin>>u>>v>>w;
			u--,v--;
			adj[u].push_back({v,w});
			adj[v].push_back({u,w});
			}
		
		if(a[src]==true||a[dest]==true)
		    cout<<"-1"<<endl;
		else
		    {
		    Path(src,0,dest,visited,a,path,index);
		    if(mn==1e12)
			    cout<<"-1"<<endl;
		    else
			    cout<<mn<<endl;
		    }
		}
	}
