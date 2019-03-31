#include<bits/stdc++.h>
using namespace std;
int find(int *parent,int i)
	{
	if(parent[i]==-1)
		return i;
	return find(parent,parent[i]);
	}


int main()
	{
	int n,k,u,v,w,x,y,count,mst,i;
	multimap <int,pair<int,int>> m;
	multimap <int,pair<int,int>> :: iterator it;
	cin>>n>>k;
	int parent[n];
	while(k--)
		{
		cin>>u>>v>>w;
		m.insert({w,{u,v}});
		}
	for(i=0;i<n;i++)
		parent[i]=-1;
	n-=1;
	count=0,mst=0;
	for(it=m.begin();it!=m.end();it++)
		{
		u=(*it).second.first,v=(*it).second.second,w=(*it).first;
		x=find(parent,u);
		y=find(parent,v);
		if(x!=y)
			{
			count++;
			parent[x]=y;
			mst+=w;
			}
		if(count==n)
			break;
		}
	cout<<mst<<endl;
	}
		
		
		
	
