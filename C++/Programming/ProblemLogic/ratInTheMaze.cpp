#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int rat(int i,int j)
	{
	int x,y,k;
	if(i==0&&j==0)
		return 1;
	if(i<0||j<0||a[i][j]==1)
		return 0;
	return rat(i-1,j)+rat(i,j-1);
		
	}
			
	

int main()
	{
	int n,i,j; 
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	n-=1;
	cout<<rat(n,n)+1<<endl;
	}
