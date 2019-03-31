    #include<bits/stdc++.h>
    using namespace std;
    vector <long long> *adj;
    vector <long long> :: iterator it;
    long long n;
    long long bfs(long long src,long long *a)
    	{
    	bool visited[n]={};
    	long long x=a[src],u;
    	queue <long long> q;
    	q.push(src);
    	visited[src]=true;
    	while(!q.empty())
    		{
    		u=q.front();
    		q.pop();
    		for(it=adj[u].begin();it!=adj[u].end();it++)
    			{
    			if(visited[*it]==false)
    				{
    				x^=a[*it];
    				q.push(*it);
    				visited[*it]=true;
    				}
    			}
    		}
    	return x;
    	}
    	
    int main()
    	{
    	long long k,m,u,v,i,j,x,y;
    	cin>>n>>k;
    	long long a[n],b[501];
    	adj=new vector <long long> [n];
    	m=n-1;
    	while(m--)
    		{
    		cin>>u>>v;
    		adj[u].push_back(v);
    		}
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	for(i=1;i<=500;i++)
    		{
    		for(j=0;j<n;j++)
    			a[j]=bfs(j,a);
    		b[i]=a[0];
    		}
    	while(k--)
    		{
    		cin>>y;
    		cout<<b[y]<<endl;
    		}
    	}
    	
     
