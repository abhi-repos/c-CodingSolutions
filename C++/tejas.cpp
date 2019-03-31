#include<bits/stdc++.h>
using namespace std;
vector <pair<int,int>> *adj;
vector <pair<int,int>> :: iterator it;
vector <pair<int,int>> :: reverse_iterator rt;
int main()
	{
	int n,m,sze,i,j; 
	cin>>n>>m;
	int a[n][m];
	sze=n+m-1;
	adj=new vector <pair<int,int>>[sze];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	for(i=0;i<n;i++)
		{
		for(j=0;j<m;j++)
			adj[i+j].push_back({i,a[i][j]});
		}
	for(i=0;i<sze;i++)
		sort(adj[i].begin(),adj[i].end());
	for(i=0;i<sze;i++)
		{
		if(i%2==0)
			{
			for(it=adj[i].begin();it!=adj[i].end();it++)
				cout<<(*it).second<<" ";
			}
		else
			{
			for(rt=adj[i].rbegin();rt!=adj[i].rend();rt++)
				cout<<(*rt).second<<" ";
			}
		}
	cout<<endl;
	}
	
