#include<bits/stdc++.h>
using namespace std;
int a[100000][3];
int find(int j,int i)
	{
	if(i==n-1)
		{
		if(j==0)
			return min(a[i][1],a[i][2]);
		else if(j==1)
			return min(a[i][0],a[i][2]);
		else
			return min(a[i][0],a[i][1]);
		}
	else 
		{
		if(j==0)
			return min(a[i][j]+find(1,i+1),a[i][j]+find(2,i+1));
		else if(j==1)
			return min(a[i][j]+find(0,i+1),a[i][j]+find(2,i+1));
		else
			return min(a[i][j]+find(0,i+1),a[i][j]+find(1,i+1));
		}
	}
int main()
	{
	int t,n,i,j;
	cin>>t;
	while(t--)
		{
		cin>>n;
		for(i=0;i<n;i++)
			for(j=0;j<3;j++)
				cin>>a[i][j];
			cout<<min(find(0,0),find(1,0),find(2,0))<<endl;
		}
	}
		
