#include<bits/stdc++.h>
using namespace std;
int main()
	{
	string str,s;
	int len,n,i,val,j,k,l,ch,count,v;
	cin>>str;
	len=str.length();
	int arr[len]={};
	int a[10],b[10]={};
	cin>>n;
	for(i=0;i<n;i++)
		{
		cin>>val;
		b[val]=1;
		}
	count=0;
	i=0;
	for(k=0;k<10;k++)
		a[k]=0;
	for(j=i;j<len;j++)
			{
			for(k=0;k<l;k++)
				a[s[k]-'0']++;
					}
				else
					{
					v=j-1;
					a[str[v]-'0']--;
					v+=i;
					a[str[v]-'0']++;
					}
			
					
				ch=0;
				for(k=0;k<10;k++)
					{
					if(a[k]==0&&b[k]==1)
						{
						ch=1;
						break;
						}
					}
				if(ch==0)
					{
					count++;
					arr[j]=1;		
					}
				}
			}
	
		}
		cout<<count<<endl;			
	}
	
		
			

