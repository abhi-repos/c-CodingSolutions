//brute force solution
#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,i,j,k,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-2;i++)
		{
		for(j=i+1;j<n-1;j++)
			{
			for(k=j+1;k<n;k++)
				{
				if((a[j]>a[i])&&(a[j]>a[k]))	
					count++;
				}
			}
		}
	cout<<count<<endl;
	}
