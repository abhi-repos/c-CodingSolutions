/*
input
6 6
5 2
5 0
4 0
4 1
2 3
3 1
output
5 4 2 3 1 0
*/
#include<bits/stdc++.h>
using namespace std;
stack <int> s;
list <int> *adj;
void topological(int src,bool *visited)
	{
	list <int> :: iterator it;
	visited[src]=true;
	for(it=adj[src].begin();it!=adj[src].end();it++)
	S	{
		if(visited[*it]==false)
			topological(*it,visited);
		}
	s.push(src);
	}
	
int main()
	{
	int n,m,u,v,i;
	cin>>n>>m;
	adj=new list<int>[n];
	while(m--)
		{		
		cin>>u>>v;
		adj[u].push_back(v);
		}
	bool visited[n]={};
	for(i=0;i<n;i++)
		{
		if(visited[i]==false)
			topological(i,visited);
		}
	while(!s.empty())
		{
		cout<<s.top()<<" ";
		s.pop();
		}
 	cout<<endl;
	}
