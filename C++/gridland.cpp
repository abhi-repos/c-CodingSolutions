

#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,m,k,x,u,v,p,i,temp1,temp2;
	long long sum,count=0;
	vector <pair<int,int>> adj[1001];
	vector <pair<int,int>> :: iterator it;
	map <int,int> mp;
	cin>>n>>m>>k;
	while(k--)
		{
		cin>>x>>u>>v;
        	x--;
		if(mp.find(x)==mp.end())
			mp[x]=mp.size();
		p=mp[x];
		adj[p].push_back({u,v});
		}
       sum=(long long)n*(long long)m;
       for(i=0;i<mp.size();i++)
		sort(adj[i].begin(),adj[i].end());
       for(i=0;i<mp.size();i++)
               {
	       temp1=0,temp2=0;
	       for(it=adj[i].begin();it!=adj[i].end();it++)
		         {
		         u=(*it).first,v=(*it).second;
		         if(temp2==0)
		                {
			        temp1=u;
				temp2=v;
				continue;
				}
			 else
			        {
			        if(u>temp2)
				            {
                        		    count+=(temp2-temp1+1);
                                   	    temp1=u;
                                    	    }
                            	temp2=max(temp2,v);
                         }
                 }
                 count+=(temp2-temp1+1);
             }

                sum-=count;
                cout<<sum<<endl;
       }

