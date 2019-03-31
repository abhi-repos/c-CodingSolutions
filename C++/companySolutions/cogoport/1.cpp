#include<bits/stdc++.h>
using namespace std;
int main()
	{
	long long n,i,j=0,sum=0;
	string str;
	cin>>str;
	n=str.length();
	for(i=n;i>0;i--)
		{
		if(str[j]=='1')
			sum+=i;
		j++;
		}	
	cout<<sum<<endl;
	}	
