#include<bits/stdc++.h>
using namespace std;
int knapsack(int *a,int *p,int w,int i)
	{
	if(i==0||w<=0)
		return 0;

	if(a[i-1]>w)
		return knapsack(a,p,w,i-1); 

	return max(p[i-1]+knapsack(a,p,w-a[i-1],i-1),knapsack(a,p,w,i-1));
	}
int main()
	{
	int n,w,i;
	cin>>n>>w;
	int a[n],p[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>p[i];
	cout<<knapsack(a,p,w,n)<<endl;
	}
