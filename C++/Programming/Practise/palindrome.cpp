#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,q,x,u,v,len,i,count;
	string str,s;
	char ch;
	cin>>n>>q;
	cin>>str;
	while(q--)
		{
		cin>>x>>u;
		u-=1;
		if(x==1)
			{
			cin>>ch;
			str[u]=ch;
			}
		else
			{
			cin>>v;
			len=v-u;
			s=str.substr(u,len);
			int a[26];		
			for(i=0;i<26;i++)
				a[i]=0;
			for(i=0;i<len;i++)
				a[s[i]-'a']++;
			count=0;
			for(i=0;i<26;i++)
				{
				if(a[i]%2!=0)
					count++;
				}
			if(count<=1)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
			}
	}
	}
