#include<bits/stdc++.h>
using namespace std;
int main()	
	{
	long long t,n,m,i,x,u,v,j,r,sum; 
	cin>>t;
	while(t--)
		{
		cin>>n>>m;
		r=m+1;
		int a[r][n]={};	
		for(i=1;i<=m;i++)
			{
			cin>>x>>u>>v;
			u--;
			if(x==1)
				{
				for(j=0;j<n;j++)
					{
					if(j>=u&&j<v)
						sum=a[i-1][j]+1;
					else
						sum=a[i-1][j];
					a[i][j]=sum%1000000007;
					}
										
				}
			else
				{
				for(j=0;j<n;j++)
					{
					sum=(a[v][j]-a[u][j])+a[i-1][j];
					a[i][j]=sum%1000000007;
					}
				}
			}
		for(j=0;j<n;j++)
			cout<<a[m][j]<<" ";
		cout<<endl;
		}

	}

					
				
		
