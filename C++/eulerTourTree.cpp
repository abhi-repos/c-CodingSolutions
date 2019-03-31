#include <bits/stdc++.h>
using namespace std; 
#define MAX 1000001
vector<int> adj[MAX]; 
int vis[MAX],Euler[2*MAX],level[2*MAX],first[MAX],parent[MAX],cnt[MAX]; 
void eulerTree(int u, int &index,int v,int &count)
{
    vis[u] = 1;
    Euler[index] = u;
    first[u]=index;
    level[index++]=++v;
    for (auto it : adj[u]) {
        if (!vis[it]) {
	    parent[it]=u;
            eulerTree(it, index,level[index-1],count);
            Euler[index] = u;
	    level[index++]=v;
        }
    }
}
int main()
	{
	int n,m,x,u,v,index,y,mn,i,lca,mx=0;
	cin>>n>>m;
	x=n-1;
	while(x--)
		{
		cin>>u>>v;
		u--,v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
 	index=0;
	parent[0]=-1;
	eulerTree(0,index,-1,index); 
   	while(m--)
		{
		cin>>x>>y;
		x--,y--;
		u=first[x],v=first[y];
		mn=MAX;
		for(i=u;i<=v;i++)
			{
			if(level[i]<mn)
				{
				mn=level[i];
				lca=Euler[i];
				}
			}
		cnt[lca]++;
		for(i=x;i!=lca;i=parent[i])
			cnt[i]++;
		for(i=y;i!=lca;i=parent[i])
			cnt[i]++;	
		}
	for(i=0;i<n;i++)
		mx=max(mx,cnt[i]);
 	cout<<mx<<endl;
   	}
