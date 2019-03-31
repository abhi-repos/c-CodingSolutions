#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,n,k,i,count=0;
	cin>>t;
	while(t--)
		{
		count=0;
		cin>>n>>k;
		char a[n];
		for(i=0;i<n;i++)
			a[i]='0';
		for(i=0;i<n;i+=k)
			{
			if(a[i]=='0')
				count++;
			a[i]='1';
			}
		for(i=n-1;i>=0;i-=k)
		    {
			if(a[i]=='0')
				count++;
			a[i]='1';
		    }
		if(count==n)
			cout<<"impossible"<<endl;
		else
			{	
			for(i=0;i<n;i++)
				cout<<a[i];
			cout<<endl;
			}
		}
	}
		
