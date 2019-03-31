#include<bits/stdc++.h>
using namespace std;
void subsequence(int *a,int n)
	{
	int i,j;
	unsigned int p=pow(2,n);
	for(i=0;i<p;i++)
		{
		for(j=0;j<n;j++)
			{
			if(i&(1<<j))
				cout<<a[j]<<" ";
			}
		cout<<endl;
		}
	}
int main()
	{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	subsequence(a,n);
	}
