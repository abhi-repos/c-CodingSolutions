#include<bits/stdc++.h>
using namespace std;
std::vector<std::vector<int>> v(100000, std::vector<int>(100000, 0));
int n,m,x[]={0,1},y[]={1,0};
long long total=0;

void get(int i,int j,int sum)
	{
	int k,xn,yn;
	if(i==n-1&&j==m-1)
		{
		total+=sum;
		total%=1000000007;
		}
	for(k=0;k<2;k++)
		{
		xn=i+x[k];
		yn=j+y[k];
		if(xn<n&&yn<m)
			{
			cout<<xn<<" "<<yn<<" "<<v[xn][yn]<<endl;
			get(xn,yn,sum+v[xn][yn]);
			}
		}
	}
	

int main()
    	{
	int k,l,r,w,t,i,j;
	cin>>t;
	while(t--)
		{
		        
		cin>>n>>m>>k;
       		while(k--)
			{
			cin>>l>>r>>w;
			l--,r--;
			v[l][r]=w;	
			}
		get(0,0,0);
		cout<<total<<endl;
		std::vector<std::vector<int>> v(100000, std::vector<int>(100000, 0));
		}
	}        
