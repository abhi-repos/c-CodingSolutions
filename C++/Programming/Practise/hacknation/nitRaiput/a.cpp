#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,n,i;
	cin>>t;
	while(t--)
		{
		cin>>n;
		int temp,so=0,se=0;
		for(i=0;i<n;i++)
			{
			cin>>temp;
			if(i%2==0)
				se+=temp;
			else
				so+=temp;
			}
		cout<<abs(se-so)<<endl;
		}
	}
		
