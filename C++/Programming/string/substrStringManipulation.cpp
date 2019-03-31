#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int i,j,len;
	string str;
	cin>>str;
	len=str.length();
	for(i=1;i<=len;i++)
		for(j=0;j<=(len-i);j++)
			cout<<str.substr(j,i)<<endl;
	}			
