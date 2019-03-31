#include<bits/stdc++.h>
using namespace std;
int sum(int *bt,int index)
	{
	int s=0;
	while(index>0)
		{
		s+=bt[index];
		index-=index&(-index);
		}
	return s;
	}
void update(int *bt,int index,int n)
	{
	while(index<=n)
		{
		bt[index]+=1;
		index+=index&(-index);
		}
	}
int main()
	{
	int n,i,x,t=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int bt[n+1]={};
	for(i=n-1;i>=0;i--)
		{
		x=sum(bt,a[i]-1);
		t+=x;
		update(bt,a[i],n);
		}
	cout<<t<<endl;
	}		
