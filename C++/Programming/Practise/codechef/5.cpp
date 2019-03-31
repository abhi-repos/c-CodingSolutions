#include<bits/stdc++.h>
using namespace std;		
int main()
	{
	int x,y,t,n,q,u,v,val,count,i,j;
	cin>>t;
	while(t--)
		{	
		cin>>n>>q;
		int b[n];
		for(i=0;i<n;i++)
			b[i]=-1;
		count=0;
		while(q--)
			{
			cin>>u>>v>>val;
			u--,v--;
			if(u==v&&val!=0)
				count=1;
			else
				{
				if(b[u]==-1&&b[v]==-1&&val!=0)
					b[u]=0,b[v]=1;
	
				else if(b[u]==-1&&b[v]==-1&&val==0)
					b[u]=0,b[v]=0;

				else if(b[u]==-1&&b[v]!=-1&&val!=0)
					b[u]=1-b[v];

				else if(b[u]!=-1&&b[v]==-1&&val!=0)
					b[v]=1-b[u];

				else if(b[u]!=-1&&b[v]==-1&&val==0)
					b[v]=b[u];

				else if(b[u]==-1&&b[v]!=-1&&val==0)
					b[u]=b[v];
					
	
				else
					{
					if(abs(b[u]-b[v])!=val)
						count=1;
					}
				}										
			
			}
			
			
		if(count==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		}
	}	

