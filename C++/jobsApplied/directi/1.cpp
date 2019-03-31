#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,l1,l2,i,j;
	string s,p;
	cin>>t;
	while(t--)
		{
		cin>>p>>s;
		l1=p.length();
		l2=s.length();
		int dp[l1+1][l2+1];
		for(i=0;i<=l1;i++)
			dp[i][0]=0;
		for(i=0;i<=l2;i++)
			dp[0][i]=0;

		for (i=1; i<=l1; i++)
   			{
     			for (j=1; j<=l2; j++)
     				{
       					 if (p[i-1] == s[j-1])
         					dp[i][j] = dp[i-1][j-1] + 1;
  	
 				      	else
         					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
     				}
   			}
		cout<<dp[l1][l2]<<endl;
		}
	}
