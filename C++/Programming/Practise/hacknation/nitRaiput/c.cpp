#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,u,v,i;
	set <int> s[3];
	set <int> :: reverse_iterator it;
	cin>>n;
	while(n--)
		{
		cin>>u>>v;
		s[u].insert(v);
		}
	for(i=0;i<3;i++)
		{
		for(it=s[i].rbegin();it!=s[i].rend();it++)
			cout<<(*it)<<" ";
		cout<<endl;
		}
	}
