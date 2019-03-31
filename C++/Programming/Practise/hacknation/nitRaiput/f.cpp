#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,l,i,j,k,count=0,end;
	cin>>t;
	string str;
	char ch[]={'a','e','o','u','i'};
	while(t--)
		{
		count=0;
		cin>>str;
		l=str.length();
		int a[l];
		for(i=0;i<l;i++)
		    {a[i]=0;
		        for(k=0;k<=4;k++)
		            {
		                if(str[i]==ch[k])
		                    a[i]=1;
		            }
		    }
		for(i=2;i<=l;i++)
			{
			for(j=0;j<=(l-i);j++)
				{
				end=j+i-1;
				if((a[j]==1&&a[end]==0)||(a[end]==1&&a[j]==0))
					count++;
				}
			}
		cout<<count<<endl;
		}
	}
