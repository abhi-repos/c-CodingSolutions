#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
list <int> :: iterator it;
int main()
	{
	long long int i,count,so,se,u,v,m,n;
	cin>>n;
	int parent[n],a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	bool visited[n]={};
	adj=new list<int>[n];
	m=n-1;
	while(m--)
		{
		cin>>u>>v;
		u--,v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	

	for(i=0;i<n;i++)
		parent[i]=-1;
	queue <int> q;
	visited[0]=true;
	q.push(0);
	while(!q.empty());
		{
		u=q.front();
		q.pop();
		for(it=adj[u].begin();it!=adj[u].end();it++)
			{
			v=*it;
			if(visited[v]==false)
					{
					q.push(v);
					visited[v]=true;
					parent[v]=u;
					}
			}
		}
	/*set <int> :: iterator is;
	for(i=0;i<n;i++)
		{
		set <int> s;
		while(i!=-1)
			{
			s.insert(a[i]);
			i=parent[i];
			}
		count=0,so=0,se=0;	
		for(is=s.begin();is!=s.end();is++)
			{
			if(count%2==0)
				se+=*it,se%=1000000007;
			else
				so+=*it,so%=1000000007;
			count++;
			}
		cout<<(se*so)%1000000007<<endl;
		}
	*/
	for(i=0;i<n;i++)
		cout<<parent[i]<<" ";
	cout<<endl;
	}
