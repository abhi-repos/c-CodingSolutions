#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,i,j,count=0,sum=0,val=50,b;
	double num;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(j=n-1;j>=0;j--)
		{
		num=(double)val/a[j];
		b=ceil(num);
		sum+=b;
		if(sum<=n)
			count++;
		else
			break;
		}
	cout<<count<<endl;
	}
				
