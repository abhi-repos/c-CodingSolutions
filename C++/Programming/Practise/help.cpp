#include<bits/stdc++.h>
using namespace std;
int n;
int sum(int *ft,int i)
	{
	int sum=0;
	while(i>0)
		{
		sum+=ft[i];
		i-=i&(-i);
		}
	return sum;
	}

void update(int *ft,int i,int v)
	{
	int index;
	index=i+1;
	while(index<=n)
		{
		ft[index]+=v;
		index+=index&(-index);
		}
	}
		

	
int main()
	{
	int q,u,v,x,res,i,pos,val; 
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int ft[n+1]={};
	for(i=0;i<n;i++)
		{
		if(a[i]%2==0)
			update(ft,i,1);
		}
	cin>>q;
	while(q--)
		{
		cin>>x>>u>>v;
		val=v-u;
		val+=1;
		u-=1;
		res=sum(ft,v)-sum(ft,u);
		if(x==0)
			{
			if(a[u]%2==0&&v%2!=0)
				update(ft,u,-1);
			if(a[u]%2!=0&&v%2==0)
				update(ft,u,1);
			a[u]=v;
			}
		else if(x==1)
			cout<<res<<endl;
		else
			cout<<val-res<<endl;
		}
	}
		
	
	
	
		

