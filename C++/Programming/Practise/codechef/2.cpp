#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,l,i,j,d;
	string str;
	cin>>t;
	while(t--)
		{
		cin>>str;
		l=str.length();
		int a[10]={};
		for(i=0;i<l;i++)
			a[str[i]-'0']++;
		
		for(i=6;i<10;i++)
			{
			if(a[i]!=0)
				{
				for(j=0;j<10;j++)
					{
					if(a[j]!=0)
						{
						if((i==j)&&a[i]<2)
							continue;
						else
							{
							d=i*10+j;
							if(d>=65&&d<=90)
								printf("%c",d);
							}
			
						}
					}
				}
			}
		cout<<endl;
		}
	}					


