#include<bits/stdc++.h>
#define ll long long
using namespace std;
unordered_map<ll,ll> parent;

ll find(ll x)
		{
    		if(!parent[x])
			 return x;
    		return x!= parent[x]? parent[x] = find(parent[x]): parent[x];

	}


ll pow(ll a, ll b, ll MOD) {
ll x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}
		

int main()
	{
	ll n,m,u,v,x,y,count=0,p,t,s=0,r;
	cin>>t;
	while(t--)
		{
		parent.clear();	 
		count=0,s=0;
		cin>>n>>m;
		n-=1;
		while(m--)
			{
			cin>>u>>v;
			x=find(u);
			y=find(v);
			if(x!=y)
				{
				parent[x]=y;
				count++;
				}
			s++;
			}		
		cin>>p;
		while(p--)
			{
			cin>>u>>v;
			s++;
			x=find(u);
			y=find(v);
			if(x!=y)
				{
				parent[x]=y;
				count++;
				}
			r=pow(s,n-count,1000000007);
			if(r<0)
				r+=1000000007;
			cout<<r<<" ";
			}
			cout<<endl;
		}
	}


	
