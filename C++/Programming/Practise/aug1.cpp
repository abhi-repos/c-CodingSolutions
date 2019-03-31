#include<bits/stdc++.h>
using namespace std;
int main()
	{
	long long n,k,i,val,count,num;
	cin>>n>>k;
	long long a[n][2];
	double d;
	multiset <long long> s;
	multiset <long long> :: iterator it;
	for(i=0;i<n;i++)
		cin>>a[i][0];
	for(i=0;i<n;i++)
		cin>>a[i][1];
	for(i=0;i<n;i++)
		{
		val=(a[i][0]*a[i][0])+(a[i][1]*a[i][1]);
		d=sqrt(val);
		num=ceil(d);
		s.insert(num);
		}
	count=0;
	for(it=s.begin();it!=s.end();it++)
			{
			count++;
			if(count==k)
				break;
					
			}
	cout<<*it<<endl;
	}	
	
