#include<bits/stdc++.h>
using namespace std;
int tree[1000001], a[1000001];
int min(int a, int b) { return a < b ? a : b; } 
void build(int node, int left, int right)
    {
    if (left == right)
	 tree[node] = a[left];					
    else
    	{
    		build(2*node, left, (left+right)/2);					
    		build(2*node + 1, (left+right)/2 + 1, right);			
    		tree[node] = min(tree[2*node], tree[2*node + 1]);		
    	}
    }
int query(int node, int curr_l, int curr_r, int query_l, int query_r)
    {
    	if (curr_l > query_r || curr_r < query_l)					
    		return 1e9;
    	if (curr_l >= query_l && curr_r <= query_r)					
    		return tree[node];
    	else														
    		return min( query(2*node, curr_l, (curr_l + curr_r) / 2, query_l, query_r),
    					query(2*node + 1, (curr_l + curr_r) / 2 + 1, curr_r, query_l, query_r));
    }
     
void update(int node, int left, int right, int index, int value)
    {
    	if (left == right) 
		tree[node] = a[index] = value;
    	else
    	{
    		if (left <= index && index <= (left+right)/2)			
    			update(2*node, left, (left+right)/2, index, value);
    		else								
    			update(2*node + 1, (left+right)/2 + 1, right, index, value);
    		tree[node] = min(tree[2*node], tree[2*node + 1]);		
    	}
    }
     

int main()
	{
	long long n,i,q,x,u,p,l,r,mn,val;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];	
	cin>>q;
	while(q--)
		{
		cin>>x;
		if(x==1)
			{
			cin>>u>>p;
			a[u]=p;
			update(1, 1, n, u, p);		
			}
		else
			{
			mn=1e9;
			cin>>l>>r>>p;
			val=query(1, 1, n, l, r);
			if(p<val)
				{
				cout<<val<<endl;
				}
			else
				{
				for(i=l;i<=r;i++)
					{
					if(a[i]>p)
						mn=min(mn,a[i]);
					}
				if(mn!=1e9)
					cout<<mn<<endl;
				else
					cout<<"-1"<<endl;				
					
				}
			}
		}
	}
