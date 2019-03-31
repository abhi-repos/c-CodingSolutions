#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,p,i,sum,val,j,count,k,b,temp;
	multimap <int,int> m;
	multimap <int,int> :: iterator it;
	cin>>n>>p;
	int a[n][2];
	for(i=0;i<n;i++)
		{
		cin>>temp;
		m.insert({temp,i});
		}
	sum=0,i=0;
	for(it=m.begin();it!=m.end();it++)
		{
		sum+=(*it).first;
		a[i][0]=(*it).first;
		a[i][1]=(*it).second;
		if(sum>p)
			break;
		i++;
		}
	k=a[i-1][0];
	count=0,sum=0;
	vector <int> v;
	for(j=0;j<i;j++)
		{
		sum+=a[j][0];
		if(sum>k)
			{
			cout<<v.size()<<" ";
			for(b=0;b<v.size();b++)
				cout<<v[b]+1<<" ";
			cout<<endl;
			v.clear();
			v.push_back(a[j][1]);
			count+=k-(sum-a[j][0]);
			sum=a[j][0];
			}
		else
			{
			v.push_back(a[j][1]);
			}
		
		}
	cout<<v.size()<<" ";
	for(b=0;b<v.size();b++)
				cout<<v[b]+1<<" ";
			cout<<endl;
	
	
	}
