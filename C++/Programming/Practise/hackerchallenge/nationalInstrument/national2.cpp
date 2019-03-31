#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,count,i,n;
	cin>>t;
	while(t--)
		{
		count=2;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n;i++)
			{
			if(a[i]>=count)
				count+=2;
			}	
		cout<<count<<endl;
		}
	}
