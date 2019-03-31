#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,m,i,j;
	string str1,str2;
	cin>>str1>>str2;
	n=str1.length();
	m=str2.length();
	int lcs[n+1][m+1]={};
	for(i=1;i<=n;i++)
		{
		for(j=1;j<=m;j++)
			{
			if(str1[i-1]==str2[j-1])
				lcs[i][j]=1+lcs[i-1][j-1];
			else
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
			}
		}
	cout<<lcs[n][m]<<endl;
	}

