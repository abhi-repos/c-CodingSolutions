#include<bits/stdc++.h>
using namespace std;
unordered_map <int,int> m;
void solve()
	{

	long long i,n,count,s,d;
	for(i=2;i<=810;i++)
		{
		count=1;
		n=i;
		s.insert(n);
		while(n!=1)
			{
			if(n==89)
				{
				count=0;
				break;
				}
			s=0;
			while(n>0)
				{
				d=n%10;
				s=s+d*d;
				n=n/10;
				}
			n=s;
			s.insert(n);
			}		
		if(count==1)
			m.insert({n,1});
		}
	}	
int main()
	{
	solve();
	int t,l,r,count=0,i;
	cin>>t;
	while(t--)
		{
		cin>>l>>r;
		count=0;
		for(i=l;i<=r;i++)
				{
				if(m[i]==1)
					count++;
				}
		cout<<count<<endl;
		}
	}
		

