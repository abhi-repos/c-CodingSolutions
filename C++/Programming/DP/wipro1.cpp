#include<bits/stdc++.h>
using namespace std;
unordered_map <int,int> a;
void calc()
	{
	int sum,i;
	a[0]=0;
	sum=0;
	for(i=1;i<=10000;i++)
		{
		if(i%2!=0)
			sum+=(i*(i+1));
		else
			sum-=(i*(i+1));
		if(a[i-1]<sum)
			a[i]=sum;
		else
			a[i]=a[i-1];
		}
	}
			
int main()
	{
	int i;
	calc();
	for(i=1;i<=30;i++)
		cout<<a[i]<<" ";
	int t,n;
	cin>>t;
	while(t--)
		{
		cin>>n;
		cout<<a[n]<<endl;
		}
	}
	
