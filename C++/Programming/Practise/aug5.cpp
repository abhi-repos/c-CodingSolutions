#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
	{
	int n,m,i,u,v,result;
	cin>>n>>m;
	int a[n],visited[n+1]={};
	for(i=0;i<n;i++)
		cin>>a[i];
	while(m--)
		{
		cin>>u>>v;
		visited[u]=1,visited[v]=1;
		}
	
	result = a[0];
    	for(i=1; i<n; i++)
		{
		if(visited[i+1]==1)
        	result = gcd(a[i], result);
		}
	cout<<result<<endl;
	}
	
