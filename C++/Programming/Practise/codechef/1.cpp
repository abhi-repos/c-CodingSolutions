#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,n,temp,index,mn=1000000,i;
	cin>>t;
	while(t--)
		{
		mn=1000000;
		cin>>n;
		for(i=0;i<n;i++)
			{
			cin>>temp;
			if(temp<mn)
				{
				mn=temp;
				index=i;
				}
			}
		cout<<index+1<<endl;
		}
	}
			
		
			
			
			
