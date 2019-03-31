#include<bits/stdc++.h>
using namespace std;
int solve(int x,int k)
	{
	int res=1;
	while(k>0)
		{
		if(k&1)
			res*=x;
		k=k>>1;
		}
	return res;
	}
		
		
		
int main()
	{
	int n,k;
	cin>>n>>k;
	cout<<solve(n,k)<<endl;
	}
