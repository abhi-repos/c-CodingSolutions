#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,k,countp,countt,sum=0,mn;
	char c;
	cin>>t;
	while(t--)
		{
		sum=0;
		cin>>n>>k;
		int a[n][n];
		for(i=0;i<n;i++)
			{
			countp=0,countt=0;
			for(j=0;j<n;j++)
				{
				cin>>c;
				if(c=='P')
					{
					a[i][j]=1;
					countp++;
					}
				else
					{
					a[i][j]=0;
					countt++;
					}
				
				}
			mn=min(countt,countp);
			sum+=mn;
			}
		cout<<sum<<endl;
		}
}
