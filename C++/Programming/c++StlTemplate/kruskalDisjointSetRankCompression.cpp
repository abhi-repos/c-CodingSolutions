#include<bits/stdc++.h>
using namespace std;
int find(struct subset subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
 
    return subsets[i].parent;
}
 

void Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
 
    // Attach smaller rank tree under root of high rank tree
    // (Union by Rank)
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
 
    // If ranks are same, then make one as root and increment
    // its rank by one
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
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
		
		
		
	


