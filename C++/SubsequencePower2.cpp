#include<bits/stdc++.h>
using namespace std;
bool power2(int num)
	{
	return (num&&!(num&(num-1)));
	}
int main()
	{
	int n,i,total=0,j,ans;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<32;i++)
		total=total|(1<<i);
	for(i=0;i<32;i++)
		{
		ans=total;
		for(j=0;j<n;j++)
			{
			if(a[j]&(1<<i))
				ans=ans&a[j];
			}
		if(power2(ans))
			{
			cout<<"Possible"<<endl;
			break;
			}
		}
	}
