#include<bits/stdc++.h>
using namespace std;
int main()
	{
	long long i,j,a,n,k,count=0;
	cin>>a>>n>>k;
	if(a%k==0)
		{
		n-=1;
		count=(n*(n+1))/2;
		cout<<count<<endl;
		}
	else
		{

		long long arr[n];
	
		for(i=1;i<=n;i++)
			arr[i-1]=a*i;
		for(i=0;i<n-1;i++)
			{
			for(j=i+1;j<n;j++)
				{
				if((arr[i]+arr[j])%k==0)
					count++;
				}
			}
		cout<<count<<endl;
		}
	}
