#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,i,q,u,v,sum=0,val;
	cin>>n;
	int a[n+1]={};
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>q;
	while(q--)
		{
		cin>>u>>v>>val;
		a[u]+=val,a[v+1]-=val;
		}
	for(i=0;i<n;i++)
		{
		sum+=a[i];
		cout<<sum<<" ";
		}
	}
		
	
