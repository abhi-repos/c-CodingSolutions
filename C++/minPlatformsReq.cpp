/*
input
6
9 00 9 10
9 40 12 00
9 50 11 20
11 00 11 30
15 00 19 00
18 00 20 00



output
3
*/

#include<bits/stdc++.h>
using namespace std;
int main()
	{	
	int n,shr,smn,ehr,emn,st,et,count=0,mx=0,i;
	cin>>n;
	multimap <int,char> mp;
	multimap <int,char> :: iterator it;
	for(i=0;i<n;i++)
		{
		cin>>shr>>smn>>ehr>>emn;
		st=shr*60+smn;
		et=ehr*60+emn;
		mp.insert({st,'a'});
		mp.insert({et,'d'});
		}
	for(it=mp.begin();it!=mp.end();it++)
		{
		if((*it).second=='a')
			count++;
		else
			count--;
		mx=max(mx,count);
		}
	cout<<"Min no of Platforms Required"<<mx<<endl;
	}
		
