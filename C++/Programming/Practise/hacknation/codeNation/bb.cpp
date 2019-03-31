#include<bits/stdc++.h>
using namespace std;
long long k,mn=1000000000000000;
int main()
	{
	long long n,m,l,i,temp,sum,count,j,r,val;
	vector <long long> v;
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
		{
		cin>>temp;
		if(temp==1)
			v.push_back(i);
		}
	l=v.size();
	if(l==m)
		{
		sum=v[0],count=1;
		for(i=1;i<l;i++)
			{
			sum+=((v[i]-v[i-1])*(count*k));
			count++;
			}
		cout<<sum<<endl;
		}
	else if(l<m)
		cout<<"-1"<<endl;
	else
		{
		for(i=0;i<=(l-m);i++)
			{
			if(i==0)
				{
				sum=v[i],count=1,val=0;
				for(j=i+1;j<(i+m);j++)
					{
					val+=(v[j]-v[j-1])*k;
					sum+=((v[j]-v[j-1])*(count*k));
					count++;
					}
				mn=min(mn,sum);
				}
			else
				{
				r=m-1;
				j=i+r;
				sum-=v[i-1];
				sum-=val;
				val-=(v[i]-v[i-1])*k;
				sum+=v[i];
				sum+=(v[j]-v[j-1])*(r*k);
				val+=(v[j]-v[j-1])*k;
				mn=min(mn,sum);
				}
			}
		cout<<mn<<endl;
		}
	}
