#include<bits/stdc++.h>
using namespace std;

int i,j,prime[100000]={};

void calc()
	{
	prime[1]=1;
	for(i=2;i*i<100000;i++)
		{
		if(prime[i]==0)
			{
			for(j=i;j<100000;j+=i)
				prime[j]=i;
			}
		}
	}

int main()
	{
	calc();
	int n,num,sum,count=0;
	cin>>n;
	while(n--)
		{
		cin>>num;
		sum=1
		while(num>1)
			{
			sum+=1;
			num=num/prime[num];
			}
		if(sum%2==0)
			count+=1;

		}
	cout<<count<<endl;
	}
