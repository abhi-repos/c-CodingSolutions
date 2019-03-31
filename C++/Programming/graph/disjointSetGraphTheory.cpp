#include<bits/stdc++.h>
#define ll long long
using namespace std;
unordered_map<ll,ll> parent;
/*
int find(int parent[], int i)
	{
    	if (parent[i] == -1)
        		return i;
    	return find(parent, parent[i]);
	}
 
 void Union(int parent[], int x, int y)
	{
	    int xset = find(parent, x);
	    int yset = find(parent, y);
	    parent[xset] = yset;
	}
*/

ll find(ll x){
    if(!parent[x]) return x;
    return x!= parent[x]? parent[x] = find(parent[x]): parent[x];
}

int main()
	{
	ll m,u,v,i,q,x,y,n;
	cin>>n>>m;
	ll mx[n+1];
	for(i=0;i<=n;i++)
	    mx[i]=i;
	
	while(m--)
		{
		cin>>u>>v;
		x=find(u);
		y=find(v);
		if(x!=y)
			{
			parent[x]=y;
			mx[y]=max(mx[x],mx[y]);
			}
		}

	cin>>q;
	while(q--)
		{
		cin>>u>>v;
		x=find(u);
		y=find(v);
		
		if(mx[x]==mx[y])
			cout<<"TIE"<<endl;
		else if(mx[x]>mx[y])
			cout<<u<<endl;
		else
			cout<<v<<endl;
		}
	}

