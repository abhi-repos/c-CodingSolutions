#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,m,i,ch,u,v,sum;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	while(m--)
		{
		cin>>ch;
		if(ch==1)
			{
			cin>>u>>v;
			u-=1;	
			a[u]=v;
			}
		else
			{
			cin>>v;
			sum=0;
			for(i=0;i<n;i++)
				sum+=a[i]/v;
			cout<<sum<<endl;
			}
		}
	}

	

