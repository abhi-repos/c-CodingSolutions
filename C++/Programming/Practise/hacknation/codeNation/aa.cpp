#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,l,i;
	string str;
	cin>>str;
	cin>>n;
	int arr[26]={};
	l=str.length();
	for(i=0;i<l;i++)
		arr[str[i]-'a']++;
	for(i=0;i<l;i++)
		{
		if(arr[str[i]-'a']>=n)
			cout<<str[i];
		}
	cout<<endl;
	}
	
