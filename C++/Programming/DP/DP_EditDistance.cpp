#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,m,i,j;
	string str1,str2;
	cin>>str1>>str2;
	n=str1.length();
	m=str2.length();
	int edit[n+1][m+1];
	for(i=0;i<=n;i++)
		edit[i][0]=i;
	for(i=0;i<=m;i++)
		edit[0][i]=i;
	for(i=1;i<=n;i++)
		{
		for(j=1;j<=m;j++)
			{
			if(str1[i-1]==str2[j-1])
				edit[i][j]=edit[i-1][j-1];
			else
				edit[i][j]=1+min(edit[i-1][j-1],min(edit[i-1][j],edit[i][j-1]));
			}
		}
	cout<<edit[n][m]<<endl;
	}
