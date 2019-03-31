#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,u,v;
	multimap <int,int> m;
	multimap <int,int> :: iterator it;
	cin>>n;
	while(n--)
		{
		cin>>u>>v;
		m.insert({u,v});
		}
	cout<<endl;
	for(it=m.begin();it!=m.end();it++)
		cout<<(*it).first<<" "<<(*it).second<<endl;

	cout<<m.lower_bound(24)->second<<endl;
	}	
