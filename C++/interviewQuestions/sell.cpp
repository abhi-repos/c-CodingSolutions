/*
input
7       
100 180 260 310 40 535 695

output
BUY=0 SELL=3
BUY=4 SELL=6
Maximum Profit is 865
*/
#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,i,j,sum=0,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	i=0;
	while(i<(n-1))
		{
		for(j=i+1;j<n;j++)
			{
			if(a[j]>a[i]&&j!=n-1)
				continue;
			else
				{
				if(j!=n-1)
					temp=j-1;
				else
					temp=j;
				if(a[temp]>a[i])
					{
					cout<<"BUY="<<i<<" "<<"SELL="<<temp<<endl;
					sum+=a[temp]-a[i];
					}
				i=j;
				break;
			
				}
				
			}
		}
	cout<<"Maximum Profit is "<<sum<<endl;
	}
	
