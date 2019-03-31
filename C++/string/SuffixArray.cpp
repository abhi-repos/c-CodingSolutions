#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int len,i;
	string str,s;
	cout<<"Enter string"<<endl;
	cin>>str;
	map <string,int> m;
	map <string,int> :: iterator it;
	len=str.length();
	for(i=0;i<len;i++)
		{
		s=str.substr(i,len-i);
		m.insert({s,i});
		}
	
	for(it=m.begin();it!=m.end();it++)
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
		
