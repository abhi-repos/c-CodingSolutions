#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,i,q,x,u,p,l,r,flag;
	multimap <int,int> m;
	typedef multimap<int, int>::iterator MMAPIterator;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		{
		cin>>a[i];
		m.insert({a[i],i});
		}
	cin>>q;
	while(q--)
		{
		cin>>x;
		if(x==1)
			{
			cin>>u>>p;
			u--;
			pair<MMAPIterator,MMAPIterator> result = m.equal_range(a[u]);
			for (MMAPIterator it = result.first; it != result.second; it++)
				{
				if(it->second==u)
					{
					m.erase(it);
					break;
					}
				}
			a[u]=p;
			m.insert({p,u});
			}
		else
			{
			cin>>l>>r>>p;
			l--,r--;
			flag=0;
			for(MMAPIterator it=m.upper_bound(p);it!=m.end();it++)
				{
				if((it->second>=l)&&(it->second<=r)&&(it->first!=p))
					{
					cout<<it->first<<endl;
					flag=1;
					break;
					}
				}
			if(flag==0)
				cout<<"-1"<<endl;

			}
		}
	}	
