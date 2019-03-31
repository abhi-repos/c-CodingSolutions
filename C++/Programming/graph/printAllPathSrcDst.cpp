#include<bits/stdc++.h>
using namespace std;
list <int> *adj;
void Path(int u,int d,bool *visited,int *path,int index)
	{
	int i;
	list <int> :: iterator it;
	visited[u]=true;
	path[index]=u;
	index++;
	if(u==d)
		{
		for(i=0;i<index;i++)
			cout<<path[i]<<" ";
		cout<<endl;
		}
	else
		{
		for(it=adj[u].begin();it!=adj[u].end();it++)
			{
			if(visited[*it]==false)	
				Path(*it,d,visited,path,index);
			}
		}
	index--;
	visited[u]=false;
	}


int main()
	{
	int n,m,u,v,s,d;
	cin>>n>>m;
	int path[n],index=0;
	adj=new list<int>[n];
	while(m--)
		{
		cin>>u>>v;
		adj[u].push_back(v);
		}
	cout<<"Enter Src and Dest"<<endl;
	cin>>s>>d;
	bool visited[n]={};
	Path(s,d,visited,path,index);	
	}	
