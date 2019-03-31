#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,m,i,j;
	string str;
	cin>>n>>m;
	int a[n][m],node[2][2];
	for(i=0;i<n;i++)
		{
		cin>>str;
		for(j=0;j<m;j++)
			{
			if(str[j]=='*')
				a[i][j]=0;
			else
				{
				if(str[j]=='V')
					node[0][0]=i,node[0][1]=j;
				else if(str[j]=='H')
					node[1][0]=i,node[1][1]=j;
				a[i][j]=1;
				}
			}
		}
	for(i=0;i<n;i++)
		{
		for(j=0;j<m;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
		}
	}
				
		
