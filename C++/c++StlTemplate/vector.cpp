#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,i,t,u;
	vector <pair<int,int>> v;
	vector <pair<int,int>> :: iterator it;
	cin>>n;
	for(i=0;i<n;i++)
		{
		cin>>t>>u;
		v.push_back({t,u});
		}
	for(it=v.begin();it!=v.end();it++)
		cout<<(*it).first<<" "<<(*it).second<<endl;
	cout<<endl;
	}
