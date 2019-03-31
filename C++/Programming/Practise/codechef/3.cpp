#include<bits/stdc++.h>
using namespace std;
int a[100000];
void calc()
	{
	int i;
	a[0]=2,a[1]=1;
	for(i=2;i<=100000;i++)
		a[i]=a[i-2]+2;
	}
		
			
int main()
	{
	calc();
	int t,i,n;
	cin>>t;
	while(t--)
		{
		cin>>n;
		if(n%2==0)
			{
			for(i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
			}
		else
			{
			for(i=0;i<(n-2);i++)
				cout<<a[i]<<" ";
			cout<<a[n]<<" "<<a[n-2]<<endl;
			}
		}
	}		
