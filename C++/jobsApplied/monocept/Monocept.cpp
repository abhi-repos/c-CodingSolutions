#include<bits/stdc++.h>
using namespace std;
int main()
	{
	string str,s;
	int l,len,i,j,k,cnt,index,mid;
	cin>>str;
	l=str.length();
	cnt=0;
	for(i=2;i<=l;i++)
		{
		for(j=0;j<=(l-i);j++)
			{
			int a[26]={};
			s=str.substr(j,i);
			len=s.length();
			if(i%2==0)
				{
				for(k=0;k<len;k++)
					{
					index=s[k]-'a';
					a[index]++;
					if(a[index]==len)
						{
						cnt++;
						continue;
						}
					}	
				}
			else
				{
				int b[2]={};
				mid=len/2;
				for(k=0;k<len;k++)
					{
					index=s[k]-'a';
					a[index]++;
					}
				for(k=0;k<26;k++)
					{
					if(a[k]==len)
						b[0]=1,b[1]=1;
					else if(a[k]==(len-1))
						b[0]=1;
					else if(a[k]==1&&s[mid]-'a'==k)
						b[1]=1;	
					else
						continue;	
					}
				if(b[0]==1&&b[1]==1)
					cnt++;
				}
			}
		}
	cout<<cnt+l<<endl;
	}
