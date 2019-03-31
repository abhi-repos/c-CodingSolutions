/*

input
9 14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
0 
output

*/


#include<bits/stdc++.h>
using namespace std;
vector <pair<int,int>> *adj;
vector <pair<int,int>> :: iterator it;

void dijkstra(int src,int *key)
	{
	int i,w,u,x,y;
	key[src]=0;
	set <pair<int,int>> s;
	set <pair<int,int>> :: iterator is;
	s.insert({0,src});
	while(!s.empty())
		{
		is=s.begin();
		w=(*is).first,u=(*is).second;
		s.erase(s.begin());
		for(it=adj[u].begin();it!=adj[u].end();it++)	
			{
			x=(*it).first,y=(*it).second;
			if(w+y<key[x])
				{
				if(key[x]!=1000)
					s.erase(s.find({key[x],x}));
				key[x]=w+y;				
				s.insert({key[x],x});
				}
			}
		}
	}
			
				
	
int main()
	{
	int n,m,u,v,w,src,dst,i;
	cin>>n>>m;
	adj=new vector<pair<int,int>> [n];
	int key[n];
	for(i=0;i<n;i++)
		key[i]=1000;
	while(m--)
		{
		cin>>u>>v>>w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
		}
	cin>>src;
	dijkstra(src,key);
	for(i=0;i<n;i++)
		cout<<key[i]<<" ";
	cout<<endl;
	}
	
	
