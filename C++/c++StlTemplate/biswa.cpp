#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,n,k,i,mx,j; 
	cin>>t;
	while(t--)
		{
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<=(n-k);i++)
			{
			mx=0;
			for(j=i;j<(i+k);j++)
				mx=max(mx,a[j]);
			cout<<mx<<" ";
			}
		cout<<endl;
		}
	}
