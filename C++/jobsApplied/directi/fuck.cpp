#include<bits/stdc++.h>
using namespace std;
unordered_map <int,int> m;

int squareSum(int n)
	{	
	int sum=0,d,num;
	if(m.find(n)!=m.end())
		return m[n];
	num=n;
	while(n>0)
		{
		d=n%10;
		sum+=(d*d);
		n/=10;
		}
	m[num]=squareSum(sum);
	return m[num];
	}

int main()
	{
	int n,u,v,count,i,val;
	cin>>n;
	m[1]=1,m[89]=89;
	while(n--)
		{
		cin>>u>>v;
		count=0;
		for(i=u;i<=v;i++)
			{
			val=squareSum(i);
			if(val==1)
				count++;
		
			}
		cout<<count<<endl;
		
		}
	}
